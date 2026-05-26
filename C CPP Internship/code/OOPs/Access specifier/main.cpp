#include <iostream>
using namespace std;

// public
// private 
// protected 

class teacher {
    public :
        string tName = "rahul";
        string subjectName  = "Maths";

    private :
        int No;

    protected :
        int id = 101;
}; 

class student : teacher {
    public :
      void show(){
        cout<<tName <<" "<<subjectName<<" "<<id<<endl;
      }
};

int main()
{
    
    teacher t1;
    t1.tName = "Rahul";
    t1.subjectName = "Maths";

    // t1.No = 1234567890;
  student std1;
  std1.show();
    return 0;
}