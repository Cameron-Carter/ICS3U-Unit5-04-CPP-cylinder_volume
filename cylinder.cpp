// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program calculates the volume of a cylinder

#include <iostream>
#include <string>
#include <cmath>

float CalculateVolume(float radius, float height) {
    // Calculates volume

    // Declaring volume
    float volume;

    // Process and output
    volume = M_PI * pow(radius, 2) * height;

    return volume;
}


main() {
    // This function calls CalculateVolume

    // Declaring variables
    std::string radiusInput;
    std::string heightInput;
    float radiusAsFloat;
    float heightAsFloat;
    float cylinderVolume;

    // Input
    std::cout << "Enter the radius of a cylinder (cm): ";
    std::cin >> radiusInput;
    std::cout << "Enter height (cm): ";
    std::cin >> heightInput;

    // Process and Output
    try {
        radiusAsFloat = std::stof(radiusInput);
        heightAsFloat = std::stof(heightInput);
        cylinderVolume = CalculateVolume(radiusAsFloat, heightAsFloat);
        if (cylinderVolume > 0) {
            std::cout << "The volume of the cylinder is " <<  cylinderVolume
            << " cm³." << std::endl;
        } else {
            std::cout << "Invalid dimensions" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid dimensions" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
