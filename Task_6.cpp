#include <iostream>
#include <cmath>
int main() {
    double a,x,y,d,c,s,k;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    std::cout << "Введите c: ";
    std::cin >> c;
    std::cout << "Введите k: ";
    std::cin >> k;
    if (c == 0) {
        std::cout << "error";
    } else if (k*k == 0) {
        std::cout << "error";
    } else {
        a = x+y;
        d = fabs(c-a);
        s = 10.1 + a/c +d/(k*k);
        std::cout << s;
    }
    return 0;
}