#include <iostream>
#include <vector>
#include <cstdlib>
#include "record.h"

void mainMenu(std::vector<Trecord> &phonebook);
void addRecord(std::vector<Trecord> &phonebook);
void showRecords(std::vector<Trecord> &phonebook);
void deleteRecord(std::vector<Trecord> &phonebook);

std::vector<Trecord> recordBook;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {

    do {
        mainMenu(recordBook);
    } while (true);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void mainMenu(std::vector<Trecord> & phonebook)
{
    std::cout << std::string(20, '=') << std::endl;
    std::cout << std::string(4, '*') << " PHONE BOOK " << std::string(4, '*') << std::endl;
    std::cout << std::string(20, '=') << std::endl;
    std::cout << "1. Add new record \n2. Search record \n3. Show all records \n4. Delete record \n5. Exit" << std::endl;
    int choice;
    std::cin >> choice;
    switch(choice)
    {
        case 1:
            addRecord(phonebook);
            break;
        case 3:
            showRecords(phonebook);
            break;
        case 4:
            deleteRecord(phonebook);
            break;
        case 5:
            exit(0);
        default:
            std::cout << "It is not an option!\n";
    }
}

void addRecord(std::vector<Trecord> &phonebook)
{
    Trecord tmp;
    tmp.addRecord();
    phonebook.push_back(tmp);
}

void showRecords(std::vector<Trecord> &phonebook)
{
    int i=0;
    for(auto &r : phonebook)
    {
        std::cout << "[" << i++ << "] ";
        r.showInfo();
    }

}

void deleteRecord(std::vector<Trecord> &phonebook)
{
    showRecords(phonebook);
    std::cout << "Which one? ";
    int n;
    std::cin >> n;
    phonebook.erase(phonebook.begin() + n);
}