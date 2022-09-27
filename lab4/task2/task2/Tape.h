#pragma once
#include "Publication.h"
#include "Sales.h"

class Tape : public Publication, public Sales {
private:
	int audio_duration;
public:
	Tape();
	//Book(char*, int, int);
	//Book(const Book&);
	void setADur(int);
	int getADur() const;
	void getData() const;
	void setData();
};
