#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string doubleToString(double number, int precision){
    stringstream stream;
    stream<<fixed<<setprecision(precision)<<number;
    return stream.str();
};

#endif
