// Copyright (c) 2022 Hunter Connolly All rights reserved
//
// Created by: Hunter Connolly
// March 4, 2022
// This program calculates the area and perimeter of
// a rectangle by asking the user for length and width

#include <iostream>

// declare variables
float length, width, area, perimeter;

int main() {
    // input
    std::cout << "Today we will calculate the area and\n";
    std::cout << "perimeter of a rectangle\n";
    std::cout << "\n";
    std::cout << "Enter the length (mm): ";
    std::cin >> length;
    std::cout << "Enter the width (mm): ";
    std::cin >> width;

    // process
    area = length * width;
    perimeter = 2*(length + width);

    // output
    std::cout << std::endl;
    std::cout << "The Area is: " << area << " mm^2\n";
    std::cout << "The perimeter is: " << perimeter << "mm\n";
}
