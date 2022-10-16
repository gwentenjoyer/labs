#include "Parallelogram.h"
#include "Quadrangle.h"

Parallelogram::Parallelogram() : Quadrangle() {};

Parallelogram::Parallelogram(float a, float b) :
	Quadrangle(a, b, a, b) {}


Parallelogram::~Parallelogram() {}


//void Parallelogram::setParall() {
//	float temp;
//	std::cout << "Enter side a: ";
//	std::cin >> temp;
//	setSideA(temp);
//	std::cout << "Enter side b: ";
//	std::cin >> temp;
//	setSideB(temp);
//	std::cout << "Enter angle: ";
//	std::cin >> temp;
//	setAngle(temp);
//}

float Parallelogram::perimeter() const {
	return 2 * (getSideA() + getSideB());
}