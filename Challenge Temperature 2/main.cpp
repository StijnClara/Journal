#include <iostream>

int main() {
    std::cout << "Enter the temperature in Fahrenheit: ";
    double tempf;
    std::cin >> tempf;
    double tempc;
    tempc = (tempf - 32) / 1.8;
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}
