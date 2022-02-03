/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi/Mike Zamansky
Assignment: Lab 1B

Takes in three integers
Prints out the smallest of three integers
*/


#include <iostream>

int smaller(int x, int y, int z)
    {
        if ((x < y) && (x < z))
        {
            return x;
        }
        else 
            if ((y < x) && (y < z))
            {
                return y;
            }
            else 
                if ((z < x) && (z < y))
                {
                    return z;
                }

    }


int main()
    {
    int x, y, z;
    std::cout << "Enter the first number: ";
    std::cin >> x; 
    std::cout << "Enter the second number: ";
    std::cin >> y;
    std::cout << "Enter the third number: ";
    std::cin >> z; 

    std::cout << smaller(x,y,z) << "\n";

    return 0;
    }