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
	Quadrangle() {
		setUpperLeft(0, 0);
		setUpperRight(0, 0);
		setLowerLeft(0, 0);
		setLowerRight(0, 0);
	}

	Quadrangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
		setUpperLeft(x1, y1);
		setUpperRight(x2, y2);
		setLowerLeft(x3, y3);
		setLowerRight(x4, y4);
	}

	void setUpperLeft(float x, float y) {
		upperLeft_x = x;
		upperLeft_y = y;
	}

	void setUpperRight(float x, float y) {
		upperRight_x = x;
		upperRight_y = y;
	}

	void setLowerLeft(float x, float y) {
		lowerLeft_x = x;
		lowerLeft_y = y;
	}

	void setLowerRight(float x, float y) {
		lowerRight_x = x;
		lowerRight_y = y;
	}

	float getUpperLeft_x() {
		return this->upperLeft_x;
	}

	float getUpperLeft_y() {
		return this->upperLeft_y;
	}



	float getUpperRight_x() {
		return this->upperRight_x;
	}

	float getUpperRight_y() {
		return this->upperRight_y;
	}



	float getLowerLeft_x() {
		return this->lowerLeft_x;
	}

	float getLowerLeft_y() {
		return this->lowerLeft_y;
	}



	float getLowerRight_x() {
		return this->lowerRight_x;
	}

	float getLowerRight_y() {
		return this->lowerRight_y;
	}
	float mult() {
		return upperLeft_x * upperLeft_y * upperRight_x * upperRight_y *
		lowerLeft_x * lowerLeft_y *	lowerRight_x * lowerRight_y;
	}
	~Quadrangle();
};