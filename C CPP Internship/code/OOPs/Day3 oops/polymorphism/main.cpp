#include <iostream>
using namespace std;

class animal
{
public:
    string name;
    void makeSound()
    {
        cout << "Every animal makes sound" << endl;
    }
};

class dog : public animal
{
public:
    void makeSound()
    {
        cout << name << " Makes sound Bhooooo bhoooooo " << endl;
    }
};

class cat : public animal
{
public:
    void makeSound()
    {
        cout << name << " Makes sound Mewoooo Mewoooooo " << endl;
    }
};

int main()
{

    dog d1;
    d1.name = "Tommy";
    d1.makeSound();

    cat c1;
    c1.name = "catii";
    c1.makeSound();

    return 0;
}