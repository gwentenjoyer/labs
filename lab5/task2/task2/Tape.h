#pragma once
#include "Publication.h"

class Tape : public Publication {
private:
	int audio_duration;
public:
	Tape();
	//Book(char*, int, int);
	Tape(const Tape&);
	void setADur(int);
	int getADur() const;
	void getData() const override;
	void setData() override;
	bool isOversize() const;
};