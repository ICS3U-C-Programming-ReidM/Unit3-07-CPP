// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program checks if the user is allowed to date their grandchild
#include <iostream>

int main() {
  int user_age;

  try {
    // Prompt the user to enter their age and store it in the user_age variable
    std::cout << "Enter your age: ";
    std::cin >> user_age;

    // Check if input is not an integer by detecting failure of cin
    if (std::cin.fail()) {
      // If cin fails, throw an exception with a custom error message
      throw "Invalid input. Please enter a valid number for your age.";
    }

    // Check if the age is between 25 and 40 (exclusive)
    if (user_age > 25 && user_age < 40) {
      std::cout << "You can date their grandchild!" << std::endl;
    } else {
      std::cout << "Sorry, you cannot date their grandchild." << std::endl;
    }
  }
  // Catch any thrown string exception and print the error message
  catch (const char* msg) {
    std::cout << msg << std::endl;
  }

  return 0;
}
