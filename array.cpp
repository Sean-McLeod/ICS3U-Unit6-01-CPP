// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program calculates the average of 10 random numbers

#include <iostream>
#include <random>


main() {
    // this function calculates the average of 10 random numbers

    int arrayRandomNumber[10];
    float average;
    int singleRandomNumber;

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        singleRandomNumber = idist(rgen);
        arrayRandomNumber[loop_counter] = singleRandomNumber;
        average = average + (arrayRandomNumber[loop_counter]);
        std::cout << "The random number is " << singleRandomNumber << std::endl;
    }
    std::cout << "" << std::endl;

    average = average/10;
    // output
    std::cout << "The average is: " << average << std::endl;
    std::cout << "" << std::endl;
}
