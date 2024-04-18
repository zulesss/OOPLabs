#include "main.h"
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

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

void Sphere::log(Logger& logger)
{
    string record = "Object name: " + objectName + "\nRadius: " + to_string(radius) ;
    logger.addRecord(record);
}

int Sphere::instanceCount = 0;

int main() {
    Logger logger;
    
    Sphere sphere1(5.0, "sphere1");
    sphere1.log(logger);
    Sphere sphere2(7.0, "sphere2");
    sphere2.log(logger);
    
    cout << "Number of Sphere instances: " << Sphere::getInstanceCount() << endl;
    logger.saveLog();
}