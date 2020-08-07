#include "Calculos.h"

double Calculos::Calculo(double x, char oper, double y)
{
	switch (oper)
	{
	case'+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		break;
		return 0.0;
	}
}
