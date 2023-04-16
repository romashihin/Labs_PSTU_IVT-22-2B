#include "equation.h"

int main()
{
	Equation Equation1("x^2 - 2x + 3 = 0", 1, -2, 3);
	Equation Equation2(Equation1);

	Equation Equation3;
	Equation3.setA(12);
	Equation3.setB(3);
	Equation3.setC(4);
	Equation3.setEq("a^2 + 2b + 4c = 16");

	cout << "Equation: " << Equation2.getEq() << "  Variables: " << Equation2.getA() << " " << Equation2.getB() << " " << Equation2.getC();

	return 0;
}