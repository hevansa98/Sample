//Author: Harry Allen
//Name: fileio.h
//Desc: Header for fileio.cpp
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include <iostream>
#include <fstream>

using namespace std;

class fileio{
private:
    string f_name, l_name;
    int id_num, id_type, id_employee;
public:
    void getInformation();
    string getFName();
    string getLName();
    int getId();
    int getIdType();
    int getIdEmp();
};
