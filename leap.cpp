/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong YiMike Zamansky
Assignment: Lab 1C

Given input year: 
Determines if the year is a leap year or a common year.
*/

#include <iostream>

int main()
    {
        int year;
        std::cout << "Enter year: ";
        std::cin >> year;

        if (year % 4 != 0)
        {
            std::cout << "Common year" << std::endl;
        }
        else if (year % 100 != 0)
        {
            std::cout << "Leap year" << std::endl;
        }
             else if (year % 400 != 0)
             {
                 std::out <<  "Common year" << std::endl;
             }
                  else 
                  {
                      std::cout << "Leap year" << std::endl;
                  }

        return 0;
    }