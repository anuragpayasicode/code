#include <iostream>
using namespace std;

void chinessMenu()
{
    int no;
    cout << "Welcome in our Chiness part" << endl;
    cout << "1. Noodles\n2. Manchuriyan\n3. Momos\n4. Fried Rice" << endl;
    cout << "Enter number according to Menu" << endl;
    cin >> no;

    switch (no)
    {
    case 1:
        cout << "Your order of Noodless is succesfully done wait for Few minutes" << endl;
        break;
    case 2:
        cout << "Your order of Manchuriyan is succesfully done wait for Few minutes" << endl;
        break;
    case 3:
        cout << "Your order of Momos is succesfully done wait for Few minutes" << endl;
        break;
    case 4:
        cout << "Your order of Fried Rice is succesfully done wait for Few minutes" << endl;
        break;
    default:
        cout << "Enter valid input only" << endl;
    }

    cout << "Thank you !! Visit Again 😊" << endl;
}

void SouthIndianMenu()
{
    int no;
    cout << "Welcome in our South Indian  part" << endl;
    cout << "1. Dosa\n2. Idli\n3. Masala Dosa\n4. Appee" << endl;
    cout << "Enter number according to Menu" << endl;
    cin >> no;

    switch (no)
    {
    case 1:
        cout << "Your order of Dosa is succesfully done wait for Few minutes" << endl;
        break;
    case 2:
        cout << "Your order of Idli is succesfully done wait for Few minutes" << endl;
        break;
    case 3:
        cout << "Your order of Masala Dosa is succesfully done wait for Few minutes" << endl;
        break;
    case 4:
        cout << "Your order of Appee is succesfully done wait for Few minutes" << endl;
        break;
    default:
        cout << "Enter valid input only" << endl;
    }
    cout << "Thank you !! Visit Again 😊" << endl;
}

void punjabiMenu()
{
    int no;
    cout << "Welcome in our Punjabi part" << endl;
    cout << "1. Aalu Parathe\n2. Lassi\n3. Dal Makhni\n4. Sarso ka Sag + Makke ki roti" << endl;
    cout << "Enter number according to Menu" << endl;
    cin >> no;

    switch (no)
    {
    case 1:
        cout << "Your order of Aalu parathe is succesfully done wait for Few minutes" << endl;
        break;
    case 2:
        cout << "Your order of Lassi is succesfully done wait for Few minutes" << endl;
        break;
    case 3:
        cout << "Your order of Dal Makhni is succesfully done wait for Few minutes" << endl;
        break;
    case 4:
        cout << "Your order of Sarso ka sag and Makke ki roti is succesfully done wait for Few minutes" << endl;
        break;
    default:
        cout << "Enter valid input only" << endl;
    }
    cout << "Thank you !! Visit Again 😊" << endl;
}

void gujratiMenu()
{
    int no;
    cout << "Welcome in our Gujrati  part" << endl;
    cout << "1. Khamand\n2. Thepla\n3. Jalebi Phapda\n4. Gujrati Mix Paratha" << endl;
    cout << "Enter number according to Menu" << endl;
    cin >> no;

    switch (no)
    {
    case 1:
        cout << "Your order of Khamand is succesfully done wait for Few minutes" << endl;
        break;
    case 2:
        cout << "Your order of Thepla is succesfully done wait for Few minutes" << endl;
        break;
    case 3:
        cout << "Your order of Jalebi Phapda is succesfully done wait for Few minutes" << endl;
        break;
    case 4:
        cout << "Your order of Gujrati Mix Paratha is succesfully done wait for Few minutes" << endl;
        break;
    default:
        cout << "Enter valid input only" << endl;
    }
    cout << "Thank you !! Visit Again 😊" << endl;
}
int main()
{

    int srNo;

    cout << "Welcome In our Hotel" << endl;
    cout << "1. Chiness\n2. South Indian\n3. Punjabi\n4. Gujrati" << endl;
    cout << "Enter serial Number according to Menu" << endl;
    cin >> srNo;

    switch (srNo)
    {
    case 1:
        chinessMenu();
        break;

    case 2:
        SouthIndianMenu();
        break;

    case 3:
        punjabiMenu();
        break;

    case 4:
        gujratiMenu();
        break;
    default:
        cout << "Enter valid input only or Visit menu again" << endl;
    }

    return 0;
}


// library management system 

// user enter year 

// year  - branch name - subject details - select -confirmation message 
