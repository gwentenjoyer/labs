#pragma once
class Publication {
private:
	char* name;
	int price;
public:
	Publication();
	Publication(char*, int);
	Publication(const Publication&);
	~Publication();
	void setName(char*);
	void setPrice(int);
	char* getName() const;
	int getPrice() const;
	void setData();
	void getData();
};