//Author: Harry Allen
//Name: human.h
//Desc: Header for human.cpp
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>

using namespace std;

class human{
protected:
    string first_name, last_name;   //First and Last names of user
    short age;                      //Age of user
    int * id_number = new int[2];   //0: Unique identification number of user | 1: Type of user (human, employee)
public:
    human(string, string, short, short = 0);    //FirstName, LastName, Age, UserType
    string getFullName();                       //returns "first_name last_name"
    string getFirstName();                      //returns "first_name"
    string getLastName();                       //returns "last_name"
    short getAge();                             //returns age
    int * getId();                              //returns pointer to id_number
    int assignNewID();                          //returns random number from 1 to 10000
    void dispInformation();                     //prints object attribute data to console (first_name, last_name, age, id_number[0])
};
