#pragma once

class Quadrangle {
private:
	//float upperLeft[2];								// index 0 is x, index 1 is y
	//float upperRight[2];
	//float lowerLeft[2];
	//float lowerRight[2];

	float upperLeft_x;
	float upperLeft_y;
	float upperRight_x;
	float upperRight_y;
	float lowerLeft_x;
	float lowerLeft_y;
	float lowerRight_x;
	float lowerRight_y;

public:
	Quadrangle();

	Quadrangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
	void setUpperLeft(float x, float y);

	void setUpperRight(float x, float y);
	void setLowerLeft(float x, float y);

	void setLowerRight(float x, float y);

	float getUpperLeft_x();

	float getUpperLeft_y();



	float getUpperRight_x();

	float getUpperRight_y();



	float getLowerLeft_x();

	float getLowerLeft_y();



	float getLowerRight_x();

	float getLowerRight_y();
	float mult();
	~Quadrangle();
};