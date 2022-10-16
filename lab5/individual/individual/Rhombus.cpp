#include "Rhombus.h"
#include "Quadrangle.h"
 
Rhombus::Rhombus() : Parallelogram() {}
Rhombus::Rhombus(float a) : Parallelogram(a, a) {}
//Rhombus::Rhombus(float a) : Quadrangle(a, a, a, a) {}
Rhombus::~Rhombus(){}
float Rhombus::perimeter() const  {
	return 4 * getSideA();
}