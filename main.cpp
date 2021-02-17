#include <iostream>
#include <vector>
#include "record.h"

using namespace std;

void mainMenu(vector<Trecord> &phonebook);
void addRecord(vector<Trecord> &phonebook);

vector<Trecord> recordBook;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {

    mainMenu(recordBook);

    for(auto &x : recordBook)
    {
        x.showInfo();
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void mainMenu(vector<Trecord> & phonebook)
{
    cout << string(4, '*') << "PHONE BOOK" << string(4, '*') << endl;
    cout << "1. Add new record \n2. Search record \n3. Show all records \n4. Delete record" << endl;
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:
            addRecord(phonebook);
            break;
    }
}

void addRecord(vector<Trecord> &phonebook)
{
    Trecord tmp;
    tmp.addRecord();
    phonebook.push_back(tmp);
}