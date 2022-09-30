#pragma once
#include "Quadrangle.h"
#include <cmath>
#include <iostream>
class Parallelogram : public Quadrangle {
private:
	float sideA;
	float sideB;
	float angle;
public:
	Parallelogram();
	Parallelogram(float, float, float, float, float, float, float, float);	// i'm sorry for this
	~Parallelogram();
	void setSideA(float);
	void setSideB(float);
	void setAngle(float);

	float getSideA(float);
	float getSideB(float);
	float getAngle(float);

	//float square(float len1, float len2, float angle);
	float square();

	void setParall();
};