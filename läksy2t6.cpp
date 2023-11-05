#include <iostream>

int main() {
    char mjono[] = "Hellooo";
    char* mjonoOsoitin = mjono; 
    int pituus = 0;

    while (*mjonoOsoitin != '\0') {
        pituus++;
         mjonoOsoitin++; 
    }

    std::cout << "Merkkijonon pituus: " << pituus << std::endl;

    return 0;
}