#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{

    int totalRooms;
    cout << "Enter Total No. of Rooms" << endl;
    cin >> totalRooms;

    vector<string> rooms(totalRooms, "empty");
    queue<string> waitingList;

    int choice;

    do
    {

        cout << "\n===== WELCOME IN OUR HOTEL =====\n";
        cout << "1. Book Room\n";
        cout << "2. Check Out\n";
        cout << "3. Show Room Status\n";
        cout << "4. Show Waiting List\n";
        cout << "5. Exit\n";

        cout << "Enter choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            cout << "Enter your name";
            cin >> name;

            bool booked = false;
            for (int i = 0; i < totalRooms; i++)
            {
                if (rooms[i] == "empty")
                {
                    rooms[i] == name;
                    cout << "Room " << i + 1 << " bookes Successfully" << endl;
                    break;
                }
            }

            if (!booked)
            {
                waitingList.push(name);
                cout << "No Room Available.\n";
                cout << name << " Added to Waiting List.\n";
            }
            break; 
        }



        case 2:
        {
            int roomNo;
            cout<<"Enter room no"<<endl;
            cin>>roomNo;
        
             if(roomNo < 1  || roomNo > totalRooms){
                cout << "Invalid Room Number.\n";
             }
             else if(rooms[roomNo - 1] == "empty"){
                   cout << "Room is Already Empty.\n";
             }
             else{
                 cout<<rooms[roomNo - 1]<<"  checked out"<<endl;
                  if(!waitingList.empty()){
                      rooms[roomNo - 1] = waitingList.front();
                         cout << waitingList.front() << " From Waiting List Got Room "
                         << roomNo << ".\n";
                         waitingList.pop();
                  }
                  else{
                    rooms[roomNo - 1] = "empty";
                  }
             }
             break;
    case 3 : {
         cout << "\n------ Room Status ------\n";

            for (int i = 0; i < totalRooms; i++)
            {
                cout << "Room " << i + 1 << " : " << rooms[i] << endl;
            }

            break;
    }
    case 4 : {
        if(waitingList.empty()){
            
                cout << "Waiting List is Empty.\n";
        }
        else{
            cout << "\nWaiting List:\n";
            
            queue<string> temp = waitingList ;

            while (!temp.empty())
            {
               cout<<temp.front()<<endl;
               temp.pop();
            }
            

        }
        break;
    }

    case 5 : 
    cout<<" Thank you ! Visit Again"<<endl;
    break;

       
   default:
            cout << "Invalid Choice.\n";
        

        }
        }

    } while (choice != 5);

    return 0;
}