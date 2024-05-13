#include "DVD.hpp"
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

void DVD::setName(string name) {
    if (!name.empty()) {
        name[0] = toupper(name[0]);
    }
    this->name = name;

}

void DVD::setDirector(std::string director) {
    if (!director.empty()) {
        director[0] = std::toupper(director[0]);
    }
    this->director = director;
}



void DVD::setCategory(string category) {
    transform(category.begin(), category.end(), category.begin(), ::toupper);
    this->category = category;
}
void DVD::setPrice() {
    if (category == "ACTION") {
        price = 45.00;
    }
    else if (category == "COMEDY") {
        price = 40.00;
    }
    else if (category == "DRAMA") {
        price = 30.00;
    }
    else {
        price = 25.00;
    }
}
string DVD::getName(){
    return name;
}
string DVD::getDirector() {
    return director;
}

string DVD::getCategory() {
    return category;
}

float DVD::getPrice() {
    return price;
}
