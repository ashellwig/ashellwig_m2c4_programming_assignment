/**
 * @file main.cxx
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains the main function to run the program.
 * @date 2020-03-07
 *
 * Assignment: Module 2 Chapter 4 Programming Assignment
 * Description: This file contains the main function to run the program.
 * Instructor: Jeffrey Hemmes
 * Course:
 *   [CSC 160] Introduction to Programming (C++)
 * Date: 07 March 2020
 */

#include "../include/CookiePackaging.hh"   // CookiePackaging
#include "../include/debug.hh"             // verbose_print
#include "../include/general_functions.hh" // pauseprompt
#include <iostream>                        // cout, cin

/**
 * \brief Performs the steps to execute the main application.
 */
int main() {
  int userInput = 0; /**< User-provided total number of cookies */

  // Prompt user for total number of cookies.
  std::cout << "Enter the total number of cookies: ";
  std::cin >> userInput;

  // Initialize our CookiePackaging object
  CookiePackaging obj(userInput);

  // Run the calculate method on our object
  obj.calculate();

  // Output number of cookie boxes needed
  std::cout << "The number of leftover cookie boxes needed to hold the "
            << "cookies: " << obj.getTotalBoxes() << std::endl;

  // Output leftover cookies, only if there are leftovers!
  if (obj.getLeftoverCookies() >= 1) {
    std::cout << "Leftover cookies: " << obj.getLeftoverCookies() << std::endl;
  }

  // Output number of containers needed
  std::cout << "The number of containers needed to store the cookie boxes: "
            << obj.getTotalContainers() << std::endl;

  // Output leftover boxes, only if there are leftovers!
  if (obj.getLeftoverBoxes() >= 1) {
    std::cout << "Leftover boxes: " << obj.getLeftoverBoxes() << std::endl;
  }

  // "Press enter to continue..."
  general_functions::pauseprompt();

  // Return with exit code 0 if all goes well
  return 0;
}

// vim: set et ts=2 sw=2 ft=cpp:
