// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program will convert °C to °F

#include <iostream>
#include <string>

void fahrenheit() {
    float userTemp;
    float fTemp;
    std::string userTempString;

    std::cout << "Enter a temperature (°C) : ";
        std::cin >> userTempString;

    try {
        userTemp = std::stof(userTempString);
        fTemp = (userTemp * 9 / 5) + 32;
        std::cout << userTemp << "°C is equal to " << fTemp
        << "°F" <<std::endl;
    } catch (std::invalid_argument) {
    std::cout << "Invalid input" <<std::endl;
    }
}

int main() {
    // call functions
    fahrenheit();

    std::cout << "\nDone." << std::endl;
}
