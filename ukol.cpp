#include <iostream>
#include <fstream>
#include <string>

int main() {
double vyska;
int vek;

    std::cout <<"Zadej jmeno: ";
    std::string jmeno;
    std::cin >>jmeno;

    std::cout <<"Zadej prijmeni: ";
    std::string prijmeni;
    std::cin >>prijmeni;

    std::cout << "Jmeno je: " << jmeno << " " << prijmeni << "\n";

    vzdelaniznovu:
    std::string zs;
    std::string ss;
    std::string vs;
    std::cout <<"Zadej vzdelani (zs, ss, vs): ";
    std::string vzdelani;
    std::cin >>vzdelani;

    if(vzdelani == "zs" || vzdelani == "ss" || vzdelani == "vs") {
        std::cout << "Vzdelani je: " << vzdelani << "\n";
    }
    else {
        std::cout << "Neplatny format, zadej znovu ""\n";
        goto vzdelaniznovu;
    }


    vyskaznovu:
    std::cout <<"Jak jste vysoky/a? (V cm) ";
    std::cin >>vyska;

    if (vyska < 220 && vyska > 60) {
        std::cout << "Vyska je: " << vyska << "\n";
    }
    else {
        std::cout << "Vyska je nerealna ""\n";
        goto vyskaznovu;
    }
    vekznovu:
    std::cout <<"Kolik Vam je? ";
    std::cin >>vek;

    if (vek > 0 && vek < 120) {
        std::cout << "Vek je: " << vek << "\n";
    }
    else {
        std::cout << "Rekord ""\n";
        goto vekznovu;
    }

    return 0;
}

