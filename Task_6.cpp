#include <iostream>
#include <cmath>
int main() {
    double a,b,x,z,p,y,k,c,d;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите z: ";
    std::cin >> z;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << "Введите c: ";
    std::cin >> c;
    std::cout << "Введите d: ";
    std::cin >> d;
    if (sin(x)>1) {
        std::cout << "error";
    } else if (sin(x)<-1) {
        std::cout << "error";
    } else if (c*d==0) {
        std::cout << "error";
    } else {
        a = sin(x)-z;
        b = fabs(p-x);
        y = pow((a+b),2)-k/(c*d);
        std::cout << y;
    }
}