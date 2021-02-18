//
// Created by Mateusz Baszaraba on 17/02/2021.
//

#include <iostream>

#ifndef PHONEBOOKAPP_RECORD_H
#define PHONEBOOKAPP_RECORD_H


class Trecord {
    std::string name;
    int number;
public:
    void addRecord();
    //void deleteRecord();
    const void showInfo();
};


#endif //PHONEBOOKAPP_RECORD_H
