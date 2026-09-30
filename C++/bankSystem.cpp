#include <iostream>
using namespace std;

class User {
public:
    string name;
    int age;
    string city;

    User(string n, int a, string c) {
        name = n;
        age = a;
        city = c;
    }

    void displayUser() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
    }
};

class Account {
public:
    string aadhar;
    string pan;
    string accountType;
    double amount;

    User user;

    Account(User u, string ad, string p, string type, double amt)
        : user(u) {
        
        aadhar = ad;
        pan = p;
        accountType = type;
        amount = amt;
    }

    void depositAmt(double amt){
               

        amount += amt;
               cout << amt << " Rs is deposited and current balance is " << amount << " Rs." << endl;
    }

    void withDrawAmt(double amt){
        if(amt > amount){
            cout << "insufficient balance!" << endl;
            return;

        };
        amount -= amt;
        cout << amt << " Rs is withdrawal and current balance is " << amount << " Rs." << endl; 
    };

    void displayAccount() {
        user.displayUser();

        cout << "Aadhar: " << aadhar << endl;
        cout << "PAN: " << pan << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Initial Amount: " << amount << endl;
    }
};

int main() {

    User user1("Tauseef", 25, "Nagpur");

    Account account1(
        user1,
        "123456789012",
        "ABCDE1234F",
        "Savings",
        5000
    );

    account1.depositAmt(5000);

    account1.withDrawAmt(1000);
    account1.withDrawAmt(10);
    account1.withDrawAmt(22.50);
    account1.withDrawAmt(39.65);

    return 0;
}
