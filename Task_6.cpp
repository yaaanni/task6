#include <iostream>
#include <cmath>
int main() {
    double b,x,c,p,n,q,k,d;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << "Введите d: ";
    std::cin >> d;
    if (cos(x)<-1) {
        std::cout << "error";
    } else if (cos(x)>1) { std::cout << "error";}
    else if (k*d==0) {
        std::cout << "error";
    } else {
    b = cos(x);
    c = p - n;
    q = pow(b,2)/(k*d)+b*pow(c,3);
    std::cout << q;
    }
}