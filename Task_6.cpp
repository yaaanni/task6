#include <iostream>
#include <cmath>
int main() {
    double a,d,b,s,x,pi;
    pi = 3,14159265;
    std::cout << "Введите значение d: ";
    std::cin >> d;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    if (cos(pi*x/180) > 1) {
        std::cout << "error";
    } else if ( -1 > cos(pi*x/180)) {
        std::cout << "error";
    } else if (b == 0) {
        std::cout << "error";
    } else {
        a = d*x/b;
    b = x+d;
    s = pow(a,2) + (b*cos(pi*x/180))/
    pow(d,3)+(a+d-b);
    std::cout << s;
    }
}