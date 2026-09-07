#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    auto x = "tsf";

    if (typeid(x) == typeid(const char*)) {
        cout << "true";
    }

    return 0;
}
