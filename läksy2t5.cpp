#include <iostream>

void nollaa(int* taulukko, int koko) {
    for (int i = 0; i < koko; i++) {
        taulukko[i] = 0;
    }
}

int main() {
    const int koko = 5;  
    int taulukko[koko] = { 1, 2, 3, 4, 5 };  

    std::cout << "Taulukko ennen nollausta: ";
    for (int i = 0; i < koko; i++) {
        std::cout << taulukko[i] << " ";
    }
    std::cout << std::endl;

    nollaa(taulukko, koko);

    std::cout << "Taulukko nollattuna: ";
    for (int i = 0; i < koko; i++) {
        std::cout << taulukko[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
