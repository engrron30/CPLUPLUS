#include <iostream>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        float savings;
};

int main()
{
    Person p1;
    Person p2;

    p1.name = "Ron";
    p1.age = 26;
    p1.savings = 0.0f;

    p2.name = "Ron, Sr.";
    p2.age = 48;
    p2.savings = 1000000.0f;

    return 0;
}
