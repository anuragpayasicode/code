#include <iostream>
using namespace std;

class Authentication
{
public:
    string userId;
    string Password;
    string key;
    Authentication(string userId, string Password, string key)
    {
        this->userId = userId;
        this->Password = Password;
        this->key = key;
    }

    void showDetails()
    {
        cout << "User id is :- " << this->userId << " and password is :- " << this->Password << endl;
    }

    void Login(string uid, string pass)
    {
        if (uid == this->userId && pass == this->Password)
        {
            cout << this->userId << " You are successfully logedin" << endl;
        }
        else
        {
            cout << this->userId << " Incorrect id or password please check and try again" << endl;
        }
    }

    void ForgotPassword(string key, string newPassword)
    {

        if (key == this->key)
        {
            this->Password = newPassword;
            cout << this->userId << " you successfully changed your password" << endl;
        }
        else
        {
            cout << "Please check your key or May be you are not registerd yet" << endl;
        }
    }
    };

    int main()
    {
        Authentication user1("Anurag", "Anurag@123", "A");
        Authentication user2("Soumy", "Soumy@123", "S");

        user1.showDetails();
        user2.showDetails();

        user1.Login("Anurag", "Anurag@123");
        user2.Login("Soumy", "Soumy123");

        user2.ForgotPassword("S" , "Soumy@456");
        user2.showDetails();
        user2.Login("Soumy" , "Soumy@456");
        return 0;
    }