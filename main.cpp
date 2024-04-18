#include "main.h"
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

void Logger::addRecord(Sphere& sphere)
{
    string record = "Object name: " + sphere.objectName + "\nRadius: " + to_string(sphere.radius) ;
    log += record + "\n";
}

void Logger::saveLog()
{
    std::ofstream file("log.txt");
    if (file.is_open())
    {
        time_t now = time(0);
        tm timeInfo;
        localtime_s(&timeInfo, &now);
        char dateTime[80];
        strftime(dateTime, 80, "%Y.%m.%d %H:%M:%S", &timeInfo);
            
        file << "ClassName: Sphere\n" ;
        file << "time: " << dateTime << endl;
        file << log;
        file.close();
    }
    else 
        cout << "Unable to open log file!" << endl;
}

int Sphere::instanceCount = 0;

int main() {
    Logger logger;
    
    Sphere sphere1(5.0, "sphere1");
    logger.addRecord(sphere1);
    Sphere sphere2(7.0, "sphere2");
    logger.addRecord(sphere2);
    
    cout << "Number of Sphere instances: " << Sphere::getInstanceCount() << endl;
    logger.saveLog();
}