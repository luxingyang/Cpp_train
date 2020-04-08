#include <iostream>
using namespace std;

class Animal{
    public:
    string name;
    string size;
};

class Dog : public Animal{
    public:
    string color; 
};

int main(int argc, char *argv[])
{
    Dog dog1;
    dog1.name = "二哈";
    dog1.size = "middle";
    dog1.color = "grey and white";
    cout << dog1.name << "'s size is " << dog1.size << ", with the color of "
    << dog1.color << "." << endl;
    return 0;
}