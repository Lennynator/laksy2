#include <iostream>

int summaa_osoittimina(int* luku1, int* luku2) {
    return *luku1 + *luku2;
}

int summaa_referensseina(int& luku1, int& luku2) {
    return luku1 + luku2;
}

int main() {
    int a = 5, b = 7;

    int tulos_osoittimina = summaa_osoittimina(&a, &b);
    std::cout << "Summa osoittimina: " << tulos_osoittimina << std::endl;

    int tulos_referensseina = summaa_referensseina(a, b);
    std::cout << "Summa referensseinä: " << tulos_referensseina << std::endl;

    return 0;
}






