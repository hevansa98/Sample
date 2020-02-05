//Author: Harry Allen
//Name: fileio.h
//Desc: Header for fileio.cpp
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#ifndef FILEIO_H
#define FILEIO_H

#include "employee.h"
#include <iostream>
#include <fstream>
#include <cstdint>
#include <filesystem>

using namespace std;

class fileio{
private:
    string f_name, l_name;
    int id_num, age, id_employee;
public:
    fileio();
    employee * getEmployee(int);
    //human getHuman(int);
    void writeHuman(human*);
    void writeEmployee(employee*);
    string getFName();
    string getLName();
    int getId();
    int getIdEmp();
};

#endif //FILEIO_H
