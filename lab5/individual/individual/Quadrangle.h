#pragma once

class Quadrangle {
private:

	//  	abbc
	//     a   c
	//    addddc

	float sideA;
	float sideB;
	float sideC;
	float sideD;

public:
	Quadrangle();

	Quadrangle(float, float, float, float);
	
	void setSideA(float);
	float getSideA() const;
	void setSideB(float);
	float getSideB() const;
	void setSideC(float);
	float getSideC() const;
	void setSideD(float);
	float getSideD() const;

	virtual float perimeter() const;

	//float mult();
	~Quadrangle();
};