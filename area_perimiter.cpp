// Copyright 2022 MTHS
// Author: Emmanuel
// This program calculates the area and perimeter of a rectangle
// with user input
#include <iostream>
int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;
    // input
    std::cout << "Enter length of the rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> width;
    // process
    area = length * width;
    perimeter = 2 * (length + width);
    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm." << std::endl;
    std::cout << "\nDone." << std::endl;
}
