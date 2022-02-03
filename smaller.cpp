/*
Author: Vicki Wu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1A
Prints out the smaller of two integers
*/

//second comment

#include <iostream>

int smaller(int x, int y)
    {
        if (x < y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }


int main()
    {
    int x, y;
    std::cout << "Enter the first number: ";
    std::cin >> x; 
    std::cout << "Enter the second number: ";
    std::cin >> y;

    std::cout << smaller(x,y) << "\n";

    return 0;
    }