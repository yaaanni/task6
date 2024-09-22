#include <iostream>
#include <cmath>
int main() {
    double a,x,p,h,y,b,k,c,d;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите h: ";
    std::cin >> h;
    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << "Введите c: ";
    std::cin >> c;
    std::cout << "Введите d: ";
    std::cin >> d;
    if (h<=0) {
        std::cout << "error";
    } else if (k*c*d==0) {
        std::cout << "error";
    } else {
        a = x - p;
        b = log(h);
        y = 0,78*b + pow(a,3)/(k*c*d);
        std::cout << y;
    }
}