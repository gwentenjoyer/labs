#include "Parallelogram.h"

Parallelogram::Parallelogram() : Quadrangle() {
	this->sideA = 0;
	this->sideB = 0;
	this->angle = 0;
}

Parallelogram::Parallelogram(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) :
Quadrangle(x1, y1, x2, y2, x3, y3, x4, y4) {}

Parallelogram::~Parallelogram() {}

//float Parallelogram::square(float len1, float len2, float angle) {
float Parallelogram::square() {
	//return len1 * len2 * sin(angle * 3.14159 / 180);
	return this->sideA * this->sideB * sin(this->angle * 3.14159 / 180);
}

void Parallelogram::setSideA(float a) {
	this->sideA = a;
}
void Parallelogram::setSideB(float a) {
	this->sideB = a;
}
void Parallelogram::setAngle(float a) {
	this->angle = a;
}

float Parallelogram::getSideA(float a) {
	return this->sideA;
}
float Parallelogram::getSideB(float a) {
	return this->sideB;
}
float Parallelogram::getAngle(float a) {
	return this->angle;
}

void Parallelogram::setParall() {
	float temp;
	std::cout << "Enter side a: ";
	std::cin >> temp;
	setSideA(temp);
	std::cout << "Enter side b: ";
	std::cin >> temp;
	setSideB(temp);
	std::cout << "Enter angle: ";
	std::cin >> temp;
	setAngle(temp);
}