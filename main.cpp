#include "Logger.h"
#include <iostream>

using namespace std;

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
