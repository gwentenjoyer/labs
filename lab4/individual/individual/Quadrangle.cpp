#include "Quadrangle.h"

Quadrangle::Quadrangle() {
	setUpperLeft(0, 0);
	setUpperRight(0, 0);
	setLowerLeft(0, 0);
	setLowerRight(0, 0);
}

Quadrangle::Quadrangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
	setUpperLeft(x1, y1);
	setUpperRight(x2, y2);
	setLowerLeft(x3, y3);
	setLowerRight(x4, y4);
}

void Quadrangle::setUpperLeft(float x, float y) {
	upperLeft_x = x;
	upperLeft_y = y;
}

void Quadrangle::setUpperRight(float x, float y) {
	upperRight_x = x;
	upperRight_y = y;
}

void Quadrangle::setLowerLeft(float x, float y) {
	lowerLeft_x = x;
	lowerLeft_y = y;
}

void Quadrangle::setLowerRight(float x, float y) {
	lowerRight_x = x;
	lowerRight_y = y;
}

float Quadrangle::getUpperLeft_x() {
	return this->upperLeft_x;
}

float Quadrangle::getUpperLeft_y() {
	return this->upperLeft_y;
}



float Quadrangle::getUpperRight_x() {
	return this->upperRight_x;
}

float Quadrangle::getUpperRight_y() {
	return this->upperRight_y;
}



float Quadrangle::getLowerLeft_x() {
	return this->lowerLeft_x;
}

float Quadrangle::getLowerLeft_y() {
	return this->lowerLeft_y;
}



float Quadrangle::getLowerRight_x() {
	return this->lowerRight_x;
}

float Quadrangle::getLowerRight_y() {
	return this->lowerRight_y;
}
float Quadrangle::mult() {
	return upperLeft_x * upperLeft_y * upperRight_x * upperRight_y *
		lowerLeft_x * lowerLeft_y * lowerRight_x * lowerRight_y;
}
Quadrangle::~Quadrangle() {}