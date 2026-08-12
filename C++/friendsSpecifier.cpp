#include <iostream>
#include <string>
using namespace std;

class Employee {
  private:
    int salary;
    string position;

  public:
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
    void setPosition(string s) {
      position = s;
    }
    string getPosition() {
      return position;
    }


    friend void displaySalary(Employee emp);
};

void displaySalary (Employee emp) {
    cout << emp.salary << endl;
}


int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary() << endl;
  myObj.setPosition("Senior engineer");
  cout << myObj.getPosition() << endl;
  displaySalary(myObj);
  return 0;
}
