#include <iostream>
#include <cmath>
int main() {
    double a,d,b,s;
    int x;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b: ";
    std::cin >> b;
    std::cout << "Введите значение d: ";
    std::cin >> d;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    if (x > 1) {
        std::cout << "error";
    } else if ( -1 > x) {
        std::cout << "error";
    } else if (b == 0) {
        std::cout << "error";
    }
    a = d*x/b;
    b = x+d;
    s = pow(a,2) + (b*cos(x))/
    pow(d,3)+(a+d-b);
    std::cout << s;
}