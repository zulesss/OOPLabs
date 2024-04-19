#include <string>

using namespace std;

class Sphere {

    static int instanceCount;

public:
    string objectName; 
    double radius;
    
    Sphere(double r, string name) : radius(r), objectName(name) {instanceCount++;}
    static int getInstanceCount() {return instanceCount;}
};

class Logger {
    
    std::string log; 

public:
    void addRecord(Sphere& sphere);
    void saveLog();
};
