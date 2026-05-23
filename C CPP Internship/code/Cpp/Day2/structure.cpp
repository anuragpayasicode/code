#include <iostream>
using namespace std;

// struct
// {
//     int id;
//     string name;
//     int age;
//     int marks;

// } rahul , mukesh;

int main()
{

    // rahul.age = 20;
    // rahul.id = 101;
    // rahul.name = "Rahul";
    // rahul.marks = 78;

    // mukesh.age = 22;
    // mukesh.id = 102;
    // mukesh.name = "mukesh";
    // mukesh.marks = 67;

    // cout<<"Id of mukesh is "<<mukesh.id<<endl;
    // cout<<"Id of rahul is "<<rahul.id<<endl;



    string name = "anurag";
    string &name2 = name;
    name2 = "rahul";

    cout<<name<<"   "<<name2<<endl;
    return 0;
}