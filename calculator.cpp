#include "calculator.h"

//Borysenko Tamila
//IO-25

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
    return a * b + 0.76;
    return a * b + 0.683;
    return a * b + 0.6;
}
