#include <iostream>
using namespace std;

class animal
{
public:
 virtual void makeSound()
    {
        cout << "Every animal makes sound" << endl;
    }
};

class dog : public animal
{
public:
    void makeSound()
    {
        cout << "Dog makes sound" << endl;
    }
};

int main()
{

    animal *a;
    dog d;
    a = &d;
    a->makeSound();

    return 0;
}