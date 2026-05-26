#include <iostream>
using namespace std;

// class students
// {
// public:
//     int age;
//     int marks;
//     int id;
//     string name;

//     students(int age, int id, int marks, string name)
//     {

//         this->age  = age;
//         this->id = id;
//         this->marks = marks;
//         this->name = name;
//     }

//     void greeting()
//     {
//         cout << "Hello " << this->name << endl;
//     }
// };

class vehicle
{
public:
    int year;
    string companyName;
    string brand;
    string oN;
    vehicle(int z, string n, string t , string o)
    {
        this->year = z;
        this->companyName = n;
        this->brand = t;
        this->oN = o;
    }

    vehicle(int y, string c, string b)
    {
        this->year = y;
        this->companyName = c;
        this->brand = b;
    }

    void vehicleDetails()
    {
        cout << this->companyName << " " << this->brand << " " << year << this->oN << endl;
    }
};

int main()
{
    // students std1;
    // students std2;
    // students std3;
    // students std4;

    // std1.age = 20;
    // std1.id = 101;
    // std1.marks = 67;
    // std1.name = "Satyam";

    // cout << "Details of student 1 :- " << std1.age << " " << std1.id << " " << std1.marks << " " << std1.name << endl;
    // std1.greeting();

    // std2.age = 22;
    // std2.id = 102;
    // std2.marks = 87;
    // std2.name = "Kunal";

    // cout << "Details of student 2 :-  " << std2.age << " " << std2.id << " " << std2.marks << " " << std2.name << endl;
    // std2.greeting();

    // students std3(20, 101, 67, "Rahul");
    // students std4(28, 102, 97, "Mukesh");

    // std4.greeting();
    // std3.greeting();

    vehicle car1(2015, "Mahindra", "XUV 700");
    vehicle car2(2016, "Toyota", "Enova Crysta");
    car1.vehicleDetails();
    car2.vehicleDetails();

    vehicle car3(2021, "Suzuki", "celerio" , "anurag");
    car3.vehicleDetails();

    return 0;
}