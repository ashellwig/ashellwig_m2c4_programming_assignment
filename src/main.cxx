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

  // Output number of cookie boxes needed
  std::cout << "The number of leftover cookie boxes needed to hold the "
            << "cookies: " << obj.getTotalBoxes() << std::endl;

  general_functions::pauseprompt();
  return 0;
}

// vim: set et ts=2 sw=2 ft=cpp:
