#include <iostream>

int main() {

    double pesos, reais, soles, euros;
    std::cout << "Enter a number of Colombian Pesos: ";
    std::cin >> pesos;
    std::cout << "Enter a number of Brazilian Reais: ";
    std::cin >> reais;
    std::cout << "Enter a number of Peruvian Soles: ";
    std::cin >> soles;

    // Pesos conversion rate: 0,00020
    // Reais conversion rate: 0,18
    // Soles conversion rate: 0,25

    euros = 0.00020 * pesos + 0.18 * reais + 0.25 * soles;

    std::cout << "Total Euro =  " << euros << "\n";

    return 0;
}
