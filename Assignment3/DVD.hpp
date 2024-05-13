#pragma once
#ifndef DVD_hpp
#define DVD_hpp
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

class DVD {

private:
	string name = "";
	string director;
	string category;
	float price;
public:
	DVD() {
		name = "";
		director = "";
		category = "";
		price = 0.0;
	}
	DVD(string name,string director,string category, float price) : name(name), director(director), category(category), price(price) {}

	void setName(string name);
	void setDirector(string director);

	void setCategory(string category);
	void setPrice();
	string getName();
	string getDirector();
	string getCategory();
	float getPrice();


};

#endif
