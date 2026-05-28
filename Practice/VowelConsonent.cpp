#include <iostream>
using namespace std;
int main()
{

    char c;
    cout << "Enter any character" << endl;
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << c << " is Vowel";
        break;

    case 'e':
        cout << c << " is Vowel";
        break;

    case 'i':
        cout << c << " is Vowel";
        break;

    case 'o':
        cout << c << " is Vowel";
        break;

    case 'u':
        cout << c << " is Vowel";
        break;
    case 'A':
        cout << c << " is Vowel";
        break;

    case 'E':
        cout << c << " is Vowel";
        break;

    case 'I':
        cout << c << " is Vowel";
        break;

    case 'O':
        cout << c << " is Vowel";
        break;

    case 'U':
        cout << c << " is Vowel";
        break;

    default:
        cout << c << " is consonent";
        break;
    }

    return 0;
}