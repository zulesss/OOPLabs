#pragma once

#include <iostream>
#include <vector>
  
using namespace std;

class Doctor
{
private:
    string name;
    int age;
    int experience;
    string specialty;
    string hospital;
    vector<string> patients;
public:
    void setName(string n);
    string getName();
    void setAge(int a);
    int getAge();
    void setExperience(int e);
    int getExperience();
    void setSpecialty(string s);
    string getSpecialty();
    void setHospital(string h);
    string getHospital();
    void addPatient(string p);
    void showPatients();
    void healPatient(string p);
};