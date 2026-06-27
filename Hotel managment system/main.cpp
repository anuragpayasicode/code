#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int totalRooms;

    cout << "Enter Total Rooms: ";
    cin >> totalRooms;

    vector<string> rooms(totalRooms, "Empty");
    queue<string> waiting;

    int choice;

    do
    {
        cout << "\n===== HOTEL MANAGEMENT SYSTEM =====\n";
        cout << "1. Book Room\n";
        cout << "2. Check Out\n";
        cout << "3. Show Room Status\n";
        cout << "4. Show Waiting List\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            cout << "Enter Customer Name: ";
            cin >> name;

            bool booked = false;

            for (int i = 0; i < totalRooms; i++)
            {
                if (rooms[i] == "Empty")
                {
                    rooms[i] = name;
                    cout << "Room " << i + 1 << " Booked Successfully.\n";
                    booked = true;
                    break;
                }
            }

            if (!booked)
            {
                waiting.push(name);
                cout << "No Room Available.\n";
                cout << name << " Added to Waiting List.\n";
            }

            break;
        }

        case 2:
        {
            int roomNo;
            cout << "Enter Room Number to Check Out: ";
            cin >> roomNo;

            if (roomNo < 1 || roomNo > totalRooms)
            {
                cout << "Invalid Room Number.\n";
            }
            else if (rooms[roomNo - 1] == "Empty")
            {
                cout << "Room is Already Empty.\n";
            }
            else
            {
                cout << rooms[roomNo - 1] << " Checked Out.\n";

                if (!waiting.empty())
                {
                    rooms[roomNo - 1] = waiting.front();
                    cout << waiting.front() << " From Waiting List Got Room "
                         << roomNo << ".\n";
                    waiting.pop();
                }
                else
                {
                    rooms[roomNo - 1] = "Empty";
                }
            }

            break;
        }

        case 3:
        {
            cout << "\n------ Room Status ------\n";

            for (int i = 0; i < totalRooms; i++)
            {
                cout << "Room " << i + 1 << " : " << rooms[i] << endl;
            }

            break;
        }

        case 4:
        {
            if (waiting.empty())
            {
                cout << "Waiting List is Empty.\n";
            }
            else
            {
                cout << "\nWaiting List:\n";

                queue<string> temp = waiting;

                while (!temp.empty())
                {
                    cout << temp.front() << endl;
                    temp.pop();
                }
            }

            break;
        }

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 5);

    return 0;
}