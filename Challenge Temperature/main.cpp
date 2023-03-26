#include "../library.h"

#include <iostream>

int main() {
    // New York Temp at the moment of writing this
    double tempf = 44;
    double tempc;
    tempc = (tempf - 32) / 1.8;
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}
