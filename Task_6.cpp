#include <iostream>
#include <cmath>
int main() {
    double a,x,y,b,z,k,c,d,t;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    std::cout << "Введите z: ";
    std::cin >> z;
    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << "Введите c: ";
    std::cin >> c;
    std::cout << "Введите d: ";
    std::cin >> d;
    if (z < 0) {
        std::cout << "error";
    } else if (k-(c*d)==0){
        std::cout << "error";
    } else if (cos(x) > 1) {
        std::cout << "error";}
        else if (cos(x) < -1) {
        std::cout << "error";}
        else {
        a = x-y;
        b = sqrt(z);
        t = cos(x)+pow(a,2)/(k-c*d)-b;
        std::cout << t;
        return 0;
    }
}