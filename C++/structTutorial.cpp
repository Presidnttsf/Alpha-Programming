#include <iostream>
#include <string>
using namespace std;

   struct info {
        string name;
        int age;
        string phone;
        int adharNo;
        string address;
        string email;
     

    };  




int main() 
{

info student;
student.name = "Akshita Gupta";
student.age = 19;
student.phone = "9021654789";
student.adharNo = 12345679;
student.address = "Hansapuri";
student.email = "xyz@gmail.com"; 


info student2;
student2.name = "Akash Gupta";
student2.age = 21;
student2.phone = "9021654789";
student2.adharNo = 12345679;
student2.address = "Timki";
student2.email = "abc@gmail.com"; 




cout << student.name << endl;
cout << student.age << endl;
cout << student.phone << endl;
cout << student.adharNo << endl;
cout << student.email << endl;

cout << student2.name << endl;
cout << student2.age << endl;
cout << student2.phone << endl;
cout << student2.adharNo << endl;
cout << student2.email << endl;

info studentList [] = {student, student2};

cout << studentList[0].name << endl;
cout << studentList[1].name;


    return 0;
}
