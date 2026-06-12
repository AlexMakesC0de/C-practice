#include <math.h>
#include "calc.h"

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b, int *err)
{
    if (b == 0) {
        *err = 1;
        return 0;
    }
    return a / b;
}

double modulo(double a, double b, int *err)
{
    if (b == 0) {
        *err = 1;
        return 0;
    }
    return fmod(a, b);
}

double power(double base, double exp)
{
    return pow(base, exp);
}

double square_root(double x, int *err)
{
    if (x < 0) {
        *err = 1;
        return 0;
    }
    return sqrt(x);
}
