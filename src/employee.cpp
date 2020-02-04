//Author: Harry Allen
//Name: employee.cpp
//Desc: Source for employee.h
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include "employee.h"

employee::employee(string f_name, string l_name, short _age) : human(f_name, l_name, _age, 1){
    employee_id = assignNewEmployeeId();
    cout << "First Name:\t\t" << first_name << endl;
    cout << "Last Name:\t\t" << last_name << endl;
    cout << "ID Number:\t\t" << id_number[0] << endl;
    cout << "User Classification:\t" << id_number[1] << endl;
    cout << "Employee ID Number:\t" << employee_id << endl;
    cout << "\n--------------------\n" << endl;
}

int employee::assignNewEmployeeId(){
    return (rand()%90000)+10000;
}

void employee::dispInformation(string status){
    human::dispInformation(status);
    cout << "Employee ID Number:\t" << employee_id << endl;
    cout << "\n--------------------\n" << endl;
}
