//Author: Harry Allen
//Name: human.cpp
//Desc: Source for human.h
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include "human.h"

human::human(string f_name, string l_name, short _age, short id_type) : first_name(f_name), last_name(l_name), age(_age){
    id_number[0] = assignNewID();
    id_number[1] = id_type;
    if(id_type == 0){
        cout << "First Name:\t\t" << first_name << endl;
        cout << "Last Name:\t\t" << last_name << endl;
        cout << "ID Number:\t\t" << id_number[0] << endl;
        cout << "User Classification:\t" << id_number[1] << endl;
        cout << "\n--------------------\n" << endl;
    }
}

string human::getFirstName(){
    return first_name;
}

string human::getLastName(){
    return last_name;
}

string human::getFullName(){
    return first_name+" "+last_name;
}

short human::getAge(){
    return age;
}

int * human::getId(){
    return id_number;
}

int human::assignNewID(){
    return (rand()%10000)+1;
}

void human::dispInformation(){
    cout << "Status:\tReg User" << endl;
    cout << "Name:\t" << getFullName() << endl;
    cout << "Age:\t" << getAge() << endl;
    cout << "ID:\t" << *getId() << endl;
    cout << "\n--------------------\n" << endl;
}
