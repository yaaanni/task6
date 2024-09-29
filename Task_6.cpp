#include <iostream>
#include <cmath>
int main() {
    double a,x,b,d,y,c,k;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите d: ";
    std::cin >> d;
    std::cout << "Введите c: ";
    std::cin >> c;
    std::cout << "Введите k: ";
    std::cin >> k;
    if (x<=0) {
        std::cout << "error";
    } else if (k==0) {
    std::cout << "error";
    } else {
        a = log10(x);
        b = x + exp(d);
        y = (a+b)-pow(c,2)/k;
        std::cout << y;
    }
    return 0;
}