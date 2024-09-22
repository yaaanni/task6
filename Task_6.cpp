#include <iostream>
#include <cmath>
int main() {
    double a,x,k,b,z,y,d,c;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << "Введите z: ";
    std::cin >> z;
    std::cout << "Введите d: ";
    std::cin >> d;
    std::cout << "Введите c: ";
    std::cin >> c;
    if (x<=0) {
        std::cout << "error";
    } else if (z<0) {
        std::cout << "error";
    } else if ( 0,75*a == 0) {
    std::cout << "error";
    } else {
        a = log(x) - k;
        b = sqrt(z);
        y = pow(d,2)+pow(c,2)/(0.75*a)+b;
        std::cout << y;
    }
    }