//Author: Harry Allen
//Name: main.cpp
//Desc: Main file
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include <iostream>
#include "employee.h"
#include "fileio.h"

int main(void){
    srand(time(NULL));
    human *user1;
    employee *user2;
    fileio writeOut;
    
    user1 = new human("John", "Smith", 21);
    user2 = new employee("Flight", "McGrinch", 59);
    /*
    user1 -> dispInformation();
    user2 -> dispInformation();
    */
    writeOut.writeEmployee(user2);
    writeOut.writeHuman(user1);
    
    employee * newEmployee;
    newEmployee = writeOut.getEmployee(user2 -> getEmployeeId());
    
    human * newHuman;
    newHuman = writeOut.getHuman(user1 -> getId());
    
    if(!newEmployee){
        std::cout << "User is null!" << std::endl;
        delete newEmployee;
    }
    
    if(!newHuman){
        std::cout << "User is null!" << std::endl;
        delete newHuman;
    }
    
    delete user1, user2, newHuman, newEmployee;
    
    return 0;
}
