#include <iostream>
using namespace std;

class employee
{
private:
    int salary= 200000;

public:
    string empName = "Anurag";
    
 void setSalary(int s){
     this->salary = s;  
 }
 void getsalary(){
      cout<<"Salary of "<<empName<<" is :- "<<salary<<endl;
 }

};

int main()
{


    employee emp1;

   emp1.getsalary();
   emp1.setSalary(500000);
   emp1.getsalary();
    
    return 0;
}