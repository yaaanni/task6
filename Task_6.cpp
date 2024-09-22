#include <iostream>
#include <cmath>
int main() {
    double a,d,b,s,x;
    std::cout << "Введите значение d: ";
    std::cin >> d;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    if (cos(x) > 1) {
        std::cout << "error";
    } else if ( -1 > cos(x)) {
        std::cout << "error";
    } else if (b == 0) {
        std::cout << "error";
    } else {
        a = d*x/b;
    b = x+d;
    s = pow(a,2) + (b*cos(x))/
    pow(d,3)+(a+d-b);
    std::cout << s;
    }
}