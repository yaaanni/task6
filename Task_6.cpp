#include <iostream>
#include <cmath>
int main() {
    double a,n,m,d,x,y,k,pi;
    pi = 3,14159265;
    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Введите m: ";
    std::cin >> m;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << "Введите d: ";
    std::cin >> d;
    if (a == 0) {
        std::cout << "error";
    } else if (cos(pi*x/180) == 0) {
        std::cout << "error";
    } else {
        a = fabs(n+m);
        d = tan(x);
        y = 1.29+k/a+ pow(d,2);
        std::cout << y;
    }
return 0;
}