#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

/* run a single binary operation, prints result or error. returns 0 on success */
static int run_binary(double a, char op, double b)
{
    double result = 0;
    int err = 0;

    switch (op) {
        case '+': result = add(a, b); break;
        case '-': result = subtract(a, b); break;
        case '*': result = multiply(a, b); break;
        case '/':
            result = divide(a, b, &err);
            if (err) {
                printf("error: cannot divide by zero\n");
                return 1;
            }
            break;
        case '%':
            result = modulo(a, b, &err);
            if (err) {
                printf("error: cannot modulo by zero\n");
                return 1;
            }
            break;
        case '^':
            result = power(a, b);
            break;
        default:
            printf("error: unknown operator '%c'\n", op);
            return 1;
    }

    printf("%g\n", result);
    return 0;
}

static int run_sqrt(double x)
{
    int err = 0;
    double result = square_root(x, &err);
    if (err) {
        printf("error: cannot take square root of a negative number\n");
        return 1;
    }
    printf("%g\n", result);
    return 0;
}

/* interactive prompt loop, used when no arguments are given */
static void repl(void)
{
    char line[256];

    printf("Calculator - type 'quit' to exit\n");
    while (1) {
        double a, b, n;
        char op;

        printf("> ");
        if (!fgets(line, sizeof(line), stdin))
            break;

        if (strncmp(line, "quit", 4) == 0 || strncmp(line, "exit", 4) == 0)
            break;

        if (sscanf(line, "sqrt %lf", &n) == 1)
            run_sqrt(n);
        else if (sscanf(line, "%lf %c %lf", &a, &op, &b) == 3)
            run_binary(a, op, b);
    }
}

int main(int argc, char *argv[])
{
    if (argc == 1) {
        repl();
        return 0;
    }

    if (argc == 3 && strcmp(argv[1], "sqrt") == 0)
        return run_sqrt(atof(argv[2]));

    if (argc == 4)
        return run_binary(atof(argv[1]), argv[2][0], atof(argv[3]));

    printf("usage: %s NUM OP NUM  (or: %s sqrt NUM)\n", argv[0], argv[0]);
    return 1;
}
