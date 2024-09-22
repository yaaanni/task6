#include <iostream>
#include <cmath>
int main() {
    double a,d,k,b,x,y,c,p;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение p: ";
    std::cin >> p;
    std::cout << "Введите значение k: ";
    std::cin >> k;
    std::cout << "Введите значение d: ";
    std::cin >> d;
    std::cout << "Введите значение c: ";
    std::cin >> c;
    if (2*a*b==0) {
        std::cout << "error";
    } else if ( sin(p) > 1) {
        std::cout << "error";
    } else if ( -1 > sin(p)) {
        std::cout << "error";
    } else {
        a = x+sin(p);
    b = exp(k);
    y = 1+pow(k,2)/(2*a*b)-b+d*c;
    std::cout << y;
    }
    return 0;
}