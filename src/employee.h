//Author: Harry Allen
//Name: employee.h
//Desc: Header for employee.cpp
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "human.h"
#include <iostream>
#include <string>

using namespace std;

class employee : public human{  //employee inherits human attributes
private:
    int id_employee;
public:
    employee(string, string, short);                //Constructor for initializing employee object
    employee(string, string, short, int, int); //Constructor for existing employee
    int assignNewEmployeeId();
    int getEmployeeId();
    void dispInformation(string = "Employee");
};

#endif //EMPLOYEE_H
