#ifndef CALC_H
#define CALC_H

/* basic arithmetic */
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b, int *err);     /* err=1 on divide by zero */

/* extended operations */
double modulo(double a, double b, int *err);     /* err=1 on modulo by zero */
double power(double base, double exp);
double square_root(double x, int *err);          /* err=1 on negative input */

#endif
