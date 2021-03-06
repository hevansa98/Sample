//Author: Harry Allen
//Name: fileio.h
//Desc: Header for fileio.cpp

#ifndef FILEIO_H
#define FILEIO_H

#include "../lib/employee.h"
#include <iostream>
#include <fstream>
#include <cstdint>
#include <filesystem>

using namespace std;

class fileio{
private:                            //short term storage for data transitioning from file to object
    string f_name, l_name;          //First Name, Last Name
    int id_num, age, id_employee;   //User ID, Age, Employee ID
public:
    fileio();                       //When called checks for existence of 'database' files. If they do not exists, creates them
    employee * getEmployee(int);    //Returns employee object given employee ID. If does not exist, return nullptr
    human * getHuman(int);          //Returns human object given human ID. If does not exist, return nullptr
    void writeHuman(human*);        //Writes human object to file
    void writeEmployee(employee*);  //Writes employee object to file
};

#endif //FILEIO_H
