#pragma once

class Publication {
private:
	char* name;
	//std::string name;
	int price;
public:
	Publication();
	//Publication(std::string, int);
	//Publication(const Publication&);
	~Publication();
	//void setName(std::string);
	Publication(char*, int);
	Publication(const Publication&);
	void setName(char*);
	void setPrice(int);
	char* getName() const;
	int getPrice() const;
	virtual void setData();
	virtual void getData() const;
	virtual bool isOversize() const = 0 {};
};