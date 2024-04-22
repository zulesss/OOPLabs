#include "Doctor.h"

void Doctor::setName(string n)
{
    name = n;
}

string Doctor::getName()
{
    return name;
}

void Doctor::setAge(int a)
{
    age = a;
}

int Doctor::getAge()
{
    return age;
}

void Doctor::setExperience(int e)
{
    experience = e;
}

int Doctor::getExperience() const
{
    return experience;
}

void Doctor::setSpecialty(string s)
{
    specialty = s;
}

string Doctor::getSpecialty()
{
    return specialty;
}

void Doctor::setHospital(string h)
{
    hospital = h;
}

string Doctor::getHospital()
{
    return hospital;
}

void Doctor::addPatient(string p)
{
    patients.push_back(p);
}

void Doctor::showPatients()
{
    for (string p : patients)
        cout << "\n"<< p;
}

void Doctor::healPatient(string p)
{
    const auto it = find(patients.begin(), patients.end(), p);
    if (it != patients.end())
    {
        patients.erase(it);
        cout << "Patient healed successfully";
    }
    else
        cout << "Write correct patient name.";
}