#pragma once
#include <cstdint>
#include <iostream>

class Integer32 {
private:
	long int data;
public:
	Integer32();
	Integer32(long int);
	void setData(long int);
	int getData() const;
	void annul();
	Integer32 operator +(const Integer32& y) const;
	Integer32 operator -(const Integer32& y) const;
	Integer32 operator *(const Integer32& y) const;
	Integer32 operator /(const Integer32& y) const;
};
