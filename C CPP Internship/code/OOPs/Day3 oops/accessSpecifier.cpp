#include <iostream>
using namespace std;

class manager
{
protected:
    int salary;

public:
};

class employee : public manager
{
public:
    void showSalary()
    {
        cout << "Your salary is " << salary << endl;
    }
};

int main()
{

    employee emp1;
    emp1.showSalary();
    return 0;
}