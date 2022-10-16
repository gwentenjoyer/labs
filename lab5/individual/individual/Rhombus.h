#pragma once
#include "Quadrangle.h"
#include "Parallelogram.h"

class Rhombus : public Parallelogram {
private:
public:
	Rhombus();
	Rhombus(float);
	~Rhombus();

	float perimeter() const override;
};
