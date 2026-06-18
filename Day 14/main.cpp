#include <iostream>
using namespace std;

class Animal
{
    public :
         string AnimalType = "Pet-animal";
};

class Dog : public Animal
{ 

};

int main()
{  

    Dog d;
    cout<<d.AnimalType;

    return 0;
}




