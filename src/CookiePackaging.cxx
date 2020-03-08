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

/**
 * @brief Construct a new CookiePackaging::CookiePackaging object.
 *
 */
CookiePackaging::CookiePackaging() {
  verbose_print("Setting all non-constant values to 0 for CookiePackaging "
                "class instance.");

  totalCookies = 0;
  totalBoxes = 0;
  totalContainers = 0;
  leftoverCookies = 0;
  leftoverBoxes = 0;
}

/**
 * @brief Construct a new CookiePackaging::CookiePackaging object.
 *
 * @param userCookies Total number of cookies to be packaged.
 */
CookiePackaging::CookiePackaging(int userCookies) {
  verbose_print("Setting totalCookies based on user input.");

  totalCookies = userCookies;
}

/**
 * @brief Gets total number of cookies.
 *
 * @return int total number of cookies.
 */
int CookiePackaging::getTotalCookies() { return totalCookies; }

/**
 * @brief Gets total number of boxes needed.
 *
 * @return int total boxes needed.
 */
int CookiePackaging::getTotalBoxes() { return totalBoxes; }

/**
 * @brief Gets total containers needed
 *
 * @return int total containers needed.
 */
int CookiePackaging::getTotalContainers() { return totalContainers; }

/**
 * @brief Gets leftover cookies remaining.
 *
 * @return int leftover cookies remaining.
 */
int CookiePackaging::getLeftoverCookies() { return leftoverCookies; }

/**
 * @brief Gets leftover boxes remaining.
 *
 * @return int leftover boxes remaining.
 */
int CookiePackaging::getLeftoverBoxes() { return leftoverBoxes; }

/**
 * @brief Calculates the leftovers of boxes and cookies and the total number of
 * containers and boxes needed for the packaging scenario.
 *
 */
void CookiePackaging::calculate() {
  // Calculate the amount of boxes needed
  totalBoxes = totalCookies / boxMaxCapacity;

  // Check if there are leftovers
  if ((totalCookies % boxMaxCapacity) > 0) {
    leftoverCookies = totalCookies % boxMaxCapacity;
  }

  // Calculate the amount of containers needed
  totalContainers = totalBoxes / containerMaxCapacity;

  // Check if there are leftovers
  if ((totalBoxes % containerMaxCapacity) > 0) {
    leftoverBoxes = totalBoxes % containerMaxCapacity;
  }
}
