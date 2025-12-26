//
// Created by cocoa on 25/12/2025.
//

#include <iostream>
#include <fstream>

int main() {

    std::ifstream input;
    input.open("input.txt");

    int numTest = 0;
    int testAmount = 5;
    numTest -= testAmount;
    if (numTest < 0) {
        numTest = 100 + numTest;
    }
    else if (numTest > 100) {
        numTest = 100 - numTest;
    }
    std::cout << numTest << std::endl;



    return 0;
}
