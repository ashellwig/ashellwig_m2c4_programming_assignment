/**
 * @file CookiePackaging.hh
 * @author Ashton Scott Hellwig (ahellwig@student.cccs.edu)
 * @brief This file contains the class prototype of `CookiePackaging` objects,
 *   allowing us easier implementation and testing utilization.
 * @date 2020-03-07
 *
 * Assignment: Module 2 Chapter 4 Programming Assignment
 * Description: This file contains the class prototype of `CookiePackaging`
 *   objects, allowing us easier implementation and testing utilization.
 * Instructor: Jeffrey Hemmes
 * Course:
 *   [CSC 160] Introduction to Programming (C++)
 * Date: 07 March 2020
 */

#ifndef COOKIE_PACKAGING_HH_INCLUDED
#define COOKIE_PACKAGING_HH_INCLUDED

class CookiePackaging {
private:
  int containerMaxCapacity =
      75;                  /**< Maximum totalBoxes one container can hold.*/
  int boxMaxCapacity = 24; /**< Maximum totalCookies one box can hold. */
  int totalCookies;    /**< User-provided total number of cookies to package. */
  int totalBoxes;      /**< Calculated number of boxes needed. */
  int totalContainers; /**< Calculated number of containers needed. */
  int leftoverCookies; /**< Calculated number of leftover cookies. */
  int leftoverBoxes;   /**< Calculated number of leftover boxes. */

public:
  // Constructors and Destructors
  CookiePackaging();
  CookiePackaging(int);
  ~CookiePackaging();

  // Computation Functions
  void calculate();

  // GET functions
  int getTotalCookies();
  int getTotalBoxes();
  int getTotalContainers();
  int getLeftoverCookies();
  int getLeftoverBoxes();
};

#endif // !COOKIE_PACKAGING_HH_INCLUDED