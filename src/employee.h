//Author: Harry Allen
//Name: employee.h
//Desc: Header for employee.cpp
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include "human.h"
#include <iostream>
#include <string>

using namespace std;

class employee : public human{  //employee inherits human attributes
private:
    int employee_id;
public:
    employee(string, string, short);    //Constructor for initializing employee object
    int assignNewEmployeeId();
    void dispInformation(string = "Employee");
};
