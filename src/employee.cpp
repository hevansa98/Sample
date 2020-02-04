//Author: Harry Allen
//Name: employee.cpp
//Desc: Source for employee.h
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include "employee.h"

employee::employee(string f_name, string l_name, short _age) : human(f_name, l_name, _age, 1){
    cout << "First Name:\t\t" << first_name << endl;
    cout << "Last Name:\t\t" << last_name << endl;
    cout << "ID Number:\t\t" << id_number[0] << endl;
    cout << "User Classification:\t" << id_number[1] << endl;
    cout << "\n--------------------\n" << endl;
}
