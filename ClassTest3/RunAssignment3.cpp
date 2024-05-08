
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <stack>
#include "DVD.hpp" 

using namespace std;


void readFromFile(const string& fileName, stack<DVD>& dvdStack) {
  
    ifstream inputFile(fileName);

  
    if (!inputFile.is_open()) {
        cout << "Error: Could not open the file " << fileName << endl;
        exit(1); 
    }

    
    string line, name, director, category;
    float price;

   
    while (getline(inputFile, line)) {
       
        stringstream ss(line);

       
        ss >> name >> director >> category >> price;

       
        DVD dvd(name, director, category, price);

        dvdStack.push(dvd);
    }

  
    inputFile.close();
}


int main() {
    stack<DVD> dvdStack; 

    
    string fileName = "dvd_data.txt";

   
    readFromFile(fileName, dvdStack);

   
    cout << "Number of DVDs read from file: " << dvdStack.size() << endl;

   

    return 0;
}
