#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::cout <<"Zadej jmeno: ";
    std::string jmeno;
    std::cin >>jmeno;

    std::cout << "Jmeno je: " << jmeno << "\n";

    std::cout <<"Zadej prijmeni: ";
    std::string prijmeni;
    std::cin >>prijmeni;

    std::cout << "Prijmeni je: " << prijmeni << "\n";
int vzdelani;
    std::cout <<"Zadej vzdelani (zs = 1, ss = 2, vs == 3): ";


    //enum vzdelani {zs, ss, vs};

    //vzdelani skola = vs;

    if (vzdelani == 1){
    std::cout << "Vzdelani je zakladni skola \n";
    }
    else if (vzdelani == 2){
    std::cout << "Vzdelani je stredni skola \n";
    }
    else if (vzdelani == 3){
    std::cout << "Vzdelani je vysoka skola \n";
    }

    std::ofstream vystup("vystup.txt"); // ulozi do souboru
    vystup << "Jmeno: " << jmeno << "\n";

    return 0;
}

