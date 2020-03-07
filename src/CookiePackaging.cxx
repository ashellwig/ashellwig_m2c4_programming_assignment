/**
 * @file CookiePackaging.cxx
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains the class definition of `CookiePackaging` objects,
 *   allowing us easier implementation and testing utilization.
 * @date 2020-03-07
 *
 * Assignment: Module 2 Chapter 4 Programming Assignment
 * Description: This file contains the class definition of `CookiePackaging`
 *   objects, allowing us easier implementation and testing utilization.
 * Instructor: Jeffrey Hemmes
 * Course:
 *   [CSC 160] Introduction to Programming (C++)
 * Date: 07 March 2020
 */

#include "../include/CookiePackaging.hh"
#include "../include/debug.hh"
#include <iostream>
#include <string>

inline CookiePackaging::CookiePackaging() {
  verbose_print("Setting all non-constant values to 0 for CookiePackaging "
                "class instance.");

  totalCookies = 0;
  totalBoxes = 0;
  totalContainers = 0;
  leftoverCookies = 0;
  leftoverBoxes = 0;
}

inline CookiePackaging::CookiePackaging(int userCookies) {
  verbose_print("Setting totalCookies based on user input.");

  totalCookies = userCookies;
}

inline CookiePackaging::~CookiePackaging() {
  verbose_print("Deconstructor called for CookiePackaging.");
}

inline int CookiePackaging::getTotalCookies() { return totalCookies; }
inline int CookiePackaging::getTotalBoxes() { return totalBoxes; }
