//Author: Harry Allen
//Name: main.cpp
//Desc: Main file
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include <iostream>
#include "employee.h"

int main(void){
    srand(time(NULL));
    human *user1;
    employee *user2;

    user1 = new human("John", "Smith", 21);
    user2 = new employee("Dave", "Dimadome", 59);
    
    user1 -> dispInformation();
    user2 -> dispInformation();
    return 0;
}
