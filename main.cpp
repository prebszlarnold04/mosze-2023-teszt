#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Elgépelt változónév, helyesen N_ELEMENTS lenne.
    std::cout << '1-100 ertekek duplazasa' //Sztring literálhoz dupla idézőjel (" ") kell, és hiányzik a pontosvessző a sor végéről.
    for (int i = 0;) //Hiányos a for ciklus feje,mivel hiányzik a leállási feltétel és a léptetés.
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //Hibás a feltétel (az 'i' értéke 0 és nincs helyesen megadva a leállási feltétel, így a ciklus el sem indul),i < N_ELEMENTS kellene, hogy szerepeljen a ciklus fejben.
    {
        std::cout << "Ertek:" //Nem írja ki magát a b[i] értéket, és hiányzik a pontosvessző a sor végéről.
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //Nincs kezdőérték adva, így a hozzáadás memóriaszemétre fog történni (int atlag = 0; kellene).
    for (int i = 0; i < N_ELEMENTS, i++) //A ciklusfeltétel után vessző helyett pontosvessző kell.
    {
        atlag += b[i] //Szintén hiányzik a pontosvessző a sor végéről.
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //Program vége előtt hiányzik a dinamikusan lefoglalt memória felszabadítása (delete[] b;).
    return 0;
}