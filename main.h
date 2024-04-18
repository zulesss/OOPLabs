#include <string>

using namespace std;

class Logger {
private:
    std::string log; 

public:
    void addRecord(const std::string& record) {log += record + "\n";}
    void saveLog();
};

class Sphere {
    
private:
    static int instanceCount; 
    string objectName; 
    double radius;  
public:
    Sphere(double r, string name) : radius(r), objectName(name) {instanceCount++;}

    static int getInstanceCount() {return instanceCount;}
    void setRadius(double r) {radius = r;}
    double getRadius() const {return radius;}
    
    void log(Logger& logger);
};

