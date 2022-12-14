// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in December 2022
// A program that finds the largest number from a list of ten random numbers

#include <iostream>
#include <random>
#include <array>

template <size_t length>
int FindLargestNumberArray(std::array<int, length> numberArray) {
    // Finds the largest number from a list of random numbers

    int largestNumber = 0;

    for (int counter = 0; counter < numberArray.size(); counter++) {
        if (numberArray[counter] > largestNumber) {
            largestNumber = numberArray[counter];
        }
    }

    return largestNumber;
}

int main() {
    // Generates ten random numbers in an array and calls a function

    int largestNumberArray;
    std::array<int, 10> randomArray;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 100);
    for (int counter = 0; counter < randomArray.size(); counter++) {
        int randomNumber = idist(rgen);

        randomArray[counter] = randomNumber;
        std::cout << "Random #" << counter + 1 << " is " << randomNumber;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    largestNumberArray = FindLargestNumberArray(randomArray);
    std::cout << "The largest number in this array is ";
    std::cout << largestNumberArray << ".";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
