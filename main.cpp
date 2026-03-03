#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Hibas nev
    std::cout << '1-100 ertekek duplazasa'; // Pontos vesszo hianyzik
    for (int i = 0; i < N_ELEMENTS; i++) // Hianyoznak parameterek
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // Vegtelen ciklus lesz
    {
        std::cout << "Ertek:";
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0; // Nincs inicializalva a valtozo
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; // Hianyzik a pontos vesszo 
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
