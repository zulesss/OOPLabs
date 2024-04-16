#include "main.h"
#include <vector>

using namespace std;

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

int Doctor::getExperience()
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

void mainLogic(Doctor doctor)
{
    bool isWorking = true;
    while(isWorking)
    {
        cout << "\n Choose option:" 
            <<"\n 1.Add patient" 
            <<"\n 2.Show patients" 
            <<"\n 3.Heal patient"
            <<"\n 4.Exit \n";
        int choise;
        cin >> choise;
        const int addPatient = 1;
        const int showPatients = 2;
        const int healPatients = 3;
        const int exit = 4;
        string patient;

        switch (choise)
        {
        case addPatient:
            cout << "Write patient name: ";
            cin >> patient;
            doctor.addPatient(patient);
            cout << "Added successfully.";
            break;
        case showPatients:
            cout << "Patients:";
            doctor.showPatients();
            break;
        case healPatients:
            cout << "Write patient name to heal: ";
            cin >> patient;
            doctor.healPatient(patient);
            break;
        case exit:
            isWorking = false;
            break;
        }
    }
}

void doctorInfo(Doctor doctor)
{
    cout << "Doctor: " << doctor.getName()
        << "\n Age: " << doctor.getAge()
        << "\n Experience: " << doctor.getExperience()
        << "\n Hospital: " << doctor.getHospital()
        << "\n Specialty: " << doctor.getSpecialty()
        << "\n //////////////// ";
}

int main()
{
    Doctor doctor;
    doctor.setName("Aibolit");
    doctor.setAge(38);
    doctor.setExperience(10);
    doctor.setHospital("Main Kyiv Hospital");
    doctor.setSpecialty("Surgeon");
    doctorInfo(doctor);
    
    mainLogic(doctor);
}
