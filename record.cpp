//
// Created by Mateusz Baszaraba on 17/02/2021.
//
#include <iostream>
#include "record.h"

void Trecord::addRecord()
{
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter number: ";
    std::cin >> number;
}

const void Trecord::showInfo()
{
    std::cout << "Name: " << name << " Number: " << number << std::endl;
}