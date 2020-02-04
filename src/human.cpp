//Author: Harry Allen
//Name: human.cpp
//Desc: Source for human.h
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include "human.h"

human::human(string _first_name, string _last_name, short _age, int _id_type) : first_name(_first_name), last_name(_last_name), age(_age), id_type(_id_type){
    id_number = assignNewId();
    if(id_type == 0){
        cout << "First Name:\t\t" << first_name << endl;
        cout << "Last Name:\t\t" << last_name << endl;
        cout << "ID Number:\t\t" << id_number << endl;
        cout << "User Classification:\t" << id_type << endl;
        cout << "\n--------------------\n" << endl;
    }
}

human::human(string _first_name, string _last_name, short _age, int _id_number, int _id_type) : first_name(_first_name), last_name(_last_name), age(_age), id_number(_id_number), id_type(_id_type){
    
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

int human::getId(){
    return id_number;
}

int human::assignNewId(){
    return (rand()%9998)+1;
}

void human::dispInformation(string status){
    cout << "Status:\t" << status << endl;
    cout << "Name:\t" << getFullName() << endl;
    cout << "Age:\t" << getAge() << endl;
    cout << "ID:\t" << getId() << endl;
    if(!status.compare("Regular")){
        cout << "\n--------------------\n" << endl;
    }
}
