#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// class Stack
// {
//     vector<int> v;

// public:
//     void push(int val)
//     {
//         v.push_back(val);
//     }

//     void pop()
//     {
//         v.pop_back();
//     }

//     void top(){
//        int top = v[v.size() -1];
//     }

//     bool isEmpty()
//     {
//        return v.size() == 0;
//     }
// };

class Stack
{
    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v[v.size() - 1];
    }

    bool empty()
    {
        return v.size() == 0;
    }
};
main()
{

    // stack<int> s;

    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);

    // while(!s.empty() ){
    //       cout<<s.top()<<" ";
    //       s.pop();
    // }

    // Stack s;
    // s.push(10);
    // s.push(20);

    // while(!s.isEmpty()){
    //      cout<<"Element removed";
    //      s.pop();
    // }

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}