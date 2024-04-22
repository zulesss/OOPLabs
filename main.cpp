#include "Doctor.h"
#include <vector>

using namespace std;

const int addPatient = 1;
const int showPatients = 2;
const int healPatients = 3;
const int exitNum = 4;


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
        case exitNum:
            isWorking = false;
            break;
        default:
            ;
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
