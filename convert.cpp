#include "convert.hpp"

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string doubleToString(double number, int precision);

int main() {
    double number;
    cout<<"Enter a double variable: "<<endl;
    cin>>number;
    string str = doubleToString(number, 1);
    cout<<"The string value for "<<number<<" is "<<str<<endl;
    return 0;
}

