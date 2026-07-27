#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
    string chasisNo; 

    // 1. Default Constructor (0 parameters)
    Car() {
      brand = "Unknown Brand";
      model = "Unknown Model";
      year = 0;
    }

    // 2. Overloaded Constructor (2 parameters)
    Car(string b, string m) {
      brand = b;
      model = m;
      year = 2026; // Set a default fallback year if none is provided
    }

    // 3. Overloaded Constructor (3 parameters)
    Car(string b, string m, int y, string c) {
      brand = b;
      model = m;
      year = y;
      chasisNo = c;
    }

Car(string b, string m, int y) {
      brand = b;
      model = m;
      year = y;
    }



    void printChasisNo () {

      cout << chasisNo;
    }

};

int main() {
  // Uses Constructor 1 (0 arguments)
  Car car1; 
  
  // Uses Constructor 2 (2 arguments)
  Car car2("BMW", "X5"); 
  
  // Uses Constructor 3 (3 arguments)
  Car car3("Ford", "Mustang", 1969); 

  Car car4("mahindra", "Thar", 2025, "mahindra12345");

  // Print results
  cout << "Car1: " << car1.brand << " " << car1.model << " (" << car1.year << ")\n";
  cout << "Car2: " << car2.brand << " " << car2.model << " (" << car2.year << ")\n";
  cout << "Car3: " << car3.brand << " " << car3.model << " (" << car3.year << ")\n";
  car4.printChasisNo();
  return 0;
}
