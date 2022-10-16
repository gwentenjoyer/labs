#include "Quadrangle.h"

Quadrangle::Quadrangle() : sideA(0), sideB(0), sideC(0), sideD(0) {}

Quadrangle::Quadrangle(float a, float b, float c, float d) : sideA(a), sideB(b), sideC(c), sideD(d) {}


void Quadrangle::setSideA(float a) {
	this->sideA = a;
}

void Quadrangle::setSideB(float b) {
	this->sideB = b;
}

float Quadrangle::getSideA() const {
	return this->sideA;
}

float Quadrangle::getSideB() const {
	return this->sideB;
}



void Quadrangle::setSideC(float c) {
	this->sideC = c;
}

void Quadrangle::setSideD(float d) {
	this->sideD = d;
}

float Quadrangle::getSideC() const {
	return this->sideC;
}

float Quadrangle::getSideD() const {
	return this->sideD;
}
//float Quadrangle::mult() {
//	return sideA * sideB;
//}

float Quadrangle::perimeter() const {
	return sideA + sideB + sideC + sideD;
}
Quadrangle::~Quadrangle() {}