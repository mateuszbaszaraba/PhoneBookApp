//
// Created by Mateusz Baszaraba on 17/02/2021.
//
#include <iostream>
#include "record.h"

using namespace std;

void Trecord::addRecord()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter number: ";
    cin >> number;
}

void Trecord::showInfo()
{
    cout << "Name: " << name << " Number: " << number << endl;
}