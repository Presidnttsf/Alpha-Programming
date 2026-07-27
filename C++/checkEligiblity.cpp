// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool flag = false;

int user1Age = 25;
int user2Age = 17;
int user3Age = 57;


bool isEligible (int userAge) {
    
    if(userAge >= 54)  {
        cout << "He/she can vote and got senior citizenship.";
                
    } else  if(userAge >= 18) {
        cout << "He/she can vote.";
    } else {
        cout << "He/she cannot vote.";
        
    }
    return 0;
}




int main() {
    // Write C++ code here
    // if(flag){
    //     cout << "this is executable for true \n";
        
    // } else {
        
    //     cout << "this is excutable for false \n";
    // }
    
    //     cout << flag;
    
cout << "User 1 = "; 
isEligible(user1Age); 
cout << endl;
cout << "User 2 = ";
isEligible(user2Age);    
cout << endl;
    cout << "User 3 = ";
isEligible(user3Age);

    return 0;
}
