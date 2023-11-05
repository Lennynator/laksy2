#include <iostream>

int main() {
    int x = 15;
    int* y;
    y = &x;
    *y = *y + 3;
    int z = 2;
    int* w;
    w = y;
    y = 0;
    y = &z;
    *w = *w + *y;
    int t[] = { 9, 10 };
    y = t;
    *w += *y;
    y++;
    *w += *y;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << *y << std::endl;
    std::cout << "z = " << z << std::endl;
    std::cout << "w = " << *w << std::endl;

    return 0;
}





