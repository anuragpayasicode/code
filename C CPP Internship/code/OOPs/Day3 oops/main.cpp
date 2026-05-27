#include <iostream>
using namespace std;
// parent class
// class employee
// {
// public:
//     string name;
//     int empId;
//     int salary;

//     void showDetails(){
//         cout<<name<<" "<<empId<<" "<<salary<<endl;
//     }
// };

// // derived class or child class
// class manager : public employee
// {
// public:
//     string adminPassword;
// };

// class animal
// {
// public:
//     string name;
//     string type;

//     void eat(string food)
//     {
//         cout << name << " eat " << food << endl;
//     }
// };

// class wildAnimal : public animal{
//      public :
//         string isKing;
//         string isCarnivoras;
// };

// class petAnimal : public animal{
//     public :
//        string OWName;
// };
// parent class 
class grandFather
{
public:
    string lastName;
};
// child class of grandFather class but parent class for chilClass
class father : public grandFather
{
public:
};
// child class 
class childClass : public father {};

int main()
{

    // manager m1;
    // m1.adminPassword = "A@1234";
    // m1.name = "Anurag";
    // m1.empId = 101;
    // m1.salary = 100000;

    // m1.showDetails();

    // employee emp1;

    // petAnimal p1;
    // p1.name = "Dog";
    // p1.eat("Biscuit");

    

    return 0;
}