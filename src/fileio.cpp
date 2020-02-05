//Author: Harry Allen
//Name: fileio.cpp
//Desc: Source for fileio.h
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include "fileio.h"

void fileio::getInformation(int id){
    fstream fs;
    fs.open("../files/employee.txt", std::fstream::in)
}

string fileio::getFName(){
    return f_name;
}

string fileio::getLName(){
    return l_name;
}

int fileio::getId(){
    return id_num;
}

int fileio::getIdType(){
    return id_type;
}

int fileio::getIdEmp(){
    return id_employee;
}
