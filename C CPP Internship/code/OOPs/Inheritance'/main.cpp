#include <iostream>
using namespace std;

// class parent
// {
// public:
//     int id = 12;
//     int no = 12344;
//     string name = "Anurag";
//     int age = 39;

//     // parent(int id, int n, string na, int a)
//     // {

//     //     this->id = id;
//     //     this->age = a;
//     //     this->name = na;
//     //     this->no = n;
//     // }

//     void details()
//     {
//         cout << "Name is " << name << "  age is " << age << " id of " << name << " is " << id << " and number is " << no << endl;
//     }
// };

// class student : public parent
// {
// public:
// };



// multiple inheritance @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


//base class parent class 
// class animal
// {
// public:
//     string animalName;
//     string animalType;

//     void eat(string foodName)
//     {
//         cout << animalName << " eats  " << foodName << endl;
//     }
// };


// // derived class chaild class 
// class dog : public animal
// {
// public:
//     string oName;
//     void showOwner()
//     {
//         cout << oName << endl;
//     }
// };

// // derived or child class
// class cat : public animal
// {
// public:
//     string oName;
//     void showOwner()
//     {
//         cout << oName << endl;
//     }
// };


// multi level inheritance @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 


// parent or base class 
class  vehicle{
    public :
       string vType;
       string Vname;
       int year;
       string cName;
       string modalName;

       
};


// parent or base class child class of vehicle class but parent class of car 
class fourWheller : public vehicle{ 
    public :
      int noOfDoors;
      string type;

};


// child class or derived class 

class car : fourWheller{

};

int main()
{

    // parent p1;
    // // p1.details();

    // student s1;
    // s1.details();

    // animal a1;
    // a1.animalName = "Dog";
    // a1.animalType = "pet";

    // // a1.eat("Parle g");

    // dog d1;
    // d1.animalName = "Dog";
    // d1.animalType = "pet";
    // d1.eat("Biscuit");
    // d1.oName = "Anurag";
    // d1.showOwner();

    // cat c1;
    // c1.animalName  = "Cat";
    // c1.animalType = "Pet";
    // c1.eat("Milk");
    // c1.oName = "Rahul";
    // c1.showOwner();
   

 car c1;

    return 0;
}