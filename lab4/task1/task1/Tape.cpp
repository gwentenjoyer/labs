#include "Tape.h"
#include <iostream>

Tape::Tape() : Publication(), audio_duration(0) {}
void Tape::setData() {
	int tmpdur;
	Publication::setData();
	std::cout << "Enter audio duration of the tape: ";
	std::cin >> tmpdur;
	setADur(tmpdur);
}

void Tape::getData() const {
	std::cout << "Name is \"" << this->getName() << "\"" << std::endl;
	std::cout << "Price is " << this->getPrice() << std::endl;
	std::cout << "Price is " << getADur() << std::endl;
	//return *this;
}

int Tape::getADur() const {
	return this->audio_duration;
}

void Tape::setADur(int p) {
	this->audio_duration = p;
}