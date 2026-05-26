#include <iostream>
using namespace std;

class employee
{
private:
    int salary;

public:
    employee(int s)
    {
        salary = s;
    }

    friend void showSalary(employee emp)
    {
        cout << emp.salary << endl;
    }
    
};

int main()
{

    employee emp1(100000);
    showSalary(emp1);

    return 0;
}