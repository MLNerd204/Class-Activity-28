#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string doubleToString(double number, int precision){
    stringstream stream;
    stream<<fixed<<setprecision(precision)<<number;
    return stream.str();
};

int main() {
    double number;
    cout<<"Enter a double variable: "<<endl;
    cin>>number;
    string str = doubleToString(number, 1);
    cout<<"The string value for "<<number<<" is "<<str<<endl;
    return 0;
}

