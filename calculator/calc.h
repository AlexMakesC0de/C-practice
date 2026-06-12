#ifndef CALC_H
#define CALC_H

/* basic arithmetic */
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b, int *err);     /* err=1 on divide by zero */

#endif
