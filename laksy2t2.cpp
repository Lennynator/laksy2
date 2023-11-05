#include <iostream>

int main() {
    int x = 42;   
    int* y = &x;  

    std::cout << "Muuttujan x osoite muistissa: " << &x << std::endl;
    std::cout << "Muuttujan y osoite muistissa: " << y << std::endl;
    std::cout << "Muuttujan x arvo: " << x << std::endl;
    std::cout << "Muuttujan y arvo (osoittaa x:aan): " << *y << std::endl;

    return 0;
}