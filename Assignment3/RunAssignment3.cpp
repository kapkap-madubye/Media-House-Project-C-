
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <stack>
#include "DVD.hpp" 

using namespace std;

void readFromFile(const string& filename, stack<DVD>& dvdStack) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    std::string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string name, director, category;
        if (!(iss >> name >> director >> category)) {
            cerr << "Error: Invalid data format in file " << filename << endl;
            exit(EXIT_FAILURE);
        }
        DVD dvd(name, director, category, 0.0);
        dvd.setPrice(); 
        dvdStack.push(dvd);
    }

    file.close();
}

int main() {
    stack<DVD> dvdStack;
    string filename = "DVD.txt";

    readFromFile(filename, dvdStack);

    while (!dvdStack.empty()) {
        DVD dvd = dvdStack.top();
        dvdStack.pop();
        cout << dvd.getName() << "\t\t" << dvd.getDirector() << "\t\t"
            << dvd.getCategory() << "\t\t" << dvd.getPrice() << endl;
    }

    return 0;
}