#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main(int argc, char *argv[])
{
    if (argc != 4) {
        printf("usage: %s NUM OP NUM\n", argv[0]);
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
        default:
            printf("error: unknown operator '%c'\n", op);
            return 1;
    }

    printf("%g\n", result);
    return 0;
}
