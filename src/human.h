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
    int id_number;
    int id_type;
public:
    human(string, string, short, int = 0);      //FirstName, LastName, Age, UserType
    human(string, string, short, int, int);
    string getFullName();                       //returns "first_name last_name"
    string getFirstName();                      //returns "first_name"
    string getLastName();                       //returns "last_name"
    short getAge();                             //returns age
    int getId();                                //returns pointer to id_number
    int assignNewId();                          //returns random number from 1 to 10000
    void dispInformation(string = "Regular");   //prints object attribute data to console (first_name, last_name, age, id_number[0])
};
