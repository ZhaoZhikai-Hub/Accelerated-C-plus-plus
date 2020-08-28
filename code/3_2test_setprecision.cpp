#include <iomanip>
#ifndef __GNUC__
#include <ios>
#endif
#include <iostream>
#include <string>

using std::cin;                  using std::setprecision;
using std::cout;                 using std::string;
using std::endl;                 using std::streamsize;

int main() {

    double a = 1.666666;//6��6
    double b = 1.336;//3��3

    cout << a << endl;
    cout << b << endl;

    streamsize prec = cout.precision();
    cout << "cout.precision():" << prec << endl;
    cout << setprecision(3) << a << setprecision(prec) <<  endl;
    cout << setprecision(7) << a << setprecision(prec) <<  endl;

    cout << setprecision(3) << b << setprecision(prec) <<  endl;//5��6��

    return 0;
}
