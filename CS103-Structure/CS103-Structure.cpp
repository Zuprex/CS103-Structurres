// CS103-Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct iceCream {

    std::string name;
    std::string flavour;
    std::string color;
    int price;
    int size;

};

int main()
{

    iceCream iceCream[3] = {};

    for (int i = 0; i < 3; i++) {

        std::cout << "\nName of the Ice Cream: ";
        std::cin >> iceCream[i].name;

        std::cout << "\nFlavour of the Ice Cream: ";
        std::cin >> iceCream[i].flavour;

        std::cout << "\nColor of the Ice Cream: ";
        std::cin >> iceCream[i].color;

        std::cout << "\nPrice of the Ice Cream: ";
        std::cin >> iceCream[i].price;

        std::cout << "\nSize of the Ice Cream: ";
        std::cin >> iceCream[i].size;

        std::cout << "\n***************************************************************\n";
    }

    for (int i = 0; i < 3; i++) {

        std::cout << "\nName of the Ice Cream: " << iceCream[i].name;

        std::cout << "\nFlavour of the Ice Cream: " << iceCream[i].flavour;

        std::cout << "\nColor of the Ice Cream: " << iceCream[i].color;

        std::cout << "\nPrice of the Ice Cream: " << iceCream[i].price;

        std::cout << "\nSize of the Ice Cream: " << iceCream[i].size;

        std::cout << "\n***************************************************************\n";

    }



}