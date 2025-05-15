#include <iostream>
#include <string>
#include <vector>

class Engine {
private:
    std::string engineType;
    int horsepower;
    std::string fuelType;
    bool isRunning;

public:
    // Constructor
    Engine(std::string type, int hp, std::string fuel)
        : engineType(type), horsepower(hp), fuelType(fuel), isRunning(false) {}
    
    // Method to start the engine
    void start() {}

    // Method to stop the engine
    void stop() {}

    // Method to display engine details
    void displayDetails() {
        std::cout << "Engine Type: " << engineType << std::endl;
        std::cout << "Horsepower: " << horsepower << "HP" << std::endl;
        std::cout << "Fuel Type: " << fuelType << std::endl;
        std::cout << "Engine State: " << (isRunning ? "Running" : "Stopped") << std::endl;
    }
};