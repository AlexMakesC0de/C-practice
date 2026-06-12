#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"

int main(int argc, char *argv[])
{
    if (argc == 3 && strcmp(argv[1], "sqrt") == 0) {
        int err = 0;
        double result = square_root(atof(argv[2]), &err);
        if (err) {
            printf("error: cannot take square root of a negative number\n");
            return 1;
        }
        printf("%g\n", result);
        return 0;
    }

    if (argc != 4) {
        printf("usage: %s NUM OP NUM  (or: %s sqrt NUM)\n", argv[0], argv[0]);
        return 1;
    }

    double a = atof(argv[1]);
    double b = atof(argv[3]);
    char op = argv[2][0];
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
