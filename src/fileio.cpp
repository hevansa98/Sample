//Author: Harry Allen
//Name: fileio.cpp
//Desc: Source for fileio.h
//Disclaimer: For sample purpose only. Not meant for any use other than object oriented "prowess" demonstration

#include "fileio.h"

fileio::fileio(){
    ofstream initFile;
    if(!std::filesystem::exists("../tmp/human.txt")){
        initFile.open("../tmp/human.txt", ios::out | ios::binary);
        initFile << "FNAM\tLNAM\tAGE\tID" << endl;
        initFile.close();
    }
    if(!std::filesystem::exists("../tmp/employee.txt")){
        initFile.open("../tmp/employee.txt", ios::out | ios::binary);
        initFile << "FNAM\tLNAM\tAGE\tID\t\tEMID" << endl;
        initFile.close();
    }
}

employee * fileio::getEmployee(int eId){
    employee *tmp;
    ifstream fileIn;
    
    fileIn.open("../tmp/employee.txt");
    
    fileIn >> f_name >> f_name >> f_name >> f_name >> f_name;
    
    while(fileIn >> f_name >> l_name >> age >> id_num >> id_employee){
        if(eId == id_employee){
            tmp = new employee(f_name, l_name, age, id_num, id_employee);
            return tmp;
        }        
    }
    return nullptr;
}

// human fileio::getHuman(int uId){
//     ifstream fileIn;
//     fileIn.open("../tmp/human.txt");
//     
//     fileIn.close();
// }

void fileio::writeEmployee(employee* user){
    ofstream fileOut;
    fileOut.open("../tmp/employee.txt", ios::out | ios::app);
    fileOut << user -> getFirstName(4) << "\t" << user -> getLastName(4) << "\t" << user -> getAge() << "\t" << user -> getId() << "\t" << user -> getEmployeeId() << endl;
    fileOut.close();
}

void fileio::writeHuman(human* user){
    ofstream fileOut;
    fileOut.open("../tmp/human.txt", ios::out | ios::app);
    fileOut << user -> getFirstName(4) << "\t" << user -> getLastName(4) << "\t" << user -> getAge() << "\t" << user -> getId() << endl;
    fileOut.close();
}

string fileio::getFName(){
    return f_name;
}

string fileio::getLName(){
    return l_name;
}

int fileio::getId(){
    return id_num;
}

int fileio::getIdEmp(){
    return id_employee;
}
