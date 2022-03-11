// Copyright (c) 2022 Ethan Prieur All rights reserved
//
// Created by Ethan Prieur
// Created on March 2022
// This program adds two inputted numbers together

#include <iostream>

int main() {
    int Number1;
    int Number2;
    int sum;

    // input
    std::cout << "Enter your first number (Integer): ";
    std::cin >> Number1;
    std::cout << "Enter your second number (Integer): ";
    std::cin >> Number2;

    // processing
    sum = Number1 + Number2;

    // output
    std::cout << "" << std::endl;
    std::cout << Number1 << " + " << Number2 << " = " << sum << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done" << std::endl;
}
