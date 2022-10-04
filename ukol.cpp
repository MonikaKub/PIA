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


    std::cout <<"Zadej vzdelani (zs, ss, vs): ";
    std::string vzdelani;
    std::cin >>vzdelani;
    std::cout << "Vzdelani je: " << vzdelani << "\n";

    std::cout <<"Jak jste vysoky/a? (V cm) ";
    std::string vyska;
    std::cin >>vyska;
    std::cout << "Vyska je: " << vyska << "\n";

    std::cout <<"Kolik Vam je? ";
    std::string vek;
    std::cin >>vek;
    std::cout << "Vek je: " << vek << "\n";

   // enum vzdelani {zs, ss, vs};

 //   vzdelani; skola = vs;

  //  if (skola == 1){
  //  std::cout << "Vzdelani je zakladni skola \n";
  //  }
  //  else if (skola == 2){
   // std::cout << "Vzdelani je stredni skola \n";
   // }
   // else if (skola == 3){
   // std::cout << "Vzdelani je vysoka skola \n";
   // }

   // std::ofstream vystup("vystup.txt"); // ulozi do souboru
   // vystup << "Jmeno: " << jmeno << "\n";

    return 0;
}

