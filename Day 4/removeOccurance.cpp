// #include <iostream>
// using namespace std;

// // bool checkAlphaNumeric(char ch)
// // {
// //     if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
// //     {
// //         return true;
// //     }
// //     return false;
// // }

// // bool isPalindrome(string s) {
// //     int start = 0 , end = s.length() - 1;

// //     while (start < end){
// //         if(!checkAlphaNumeric(tolower(s[start]))){
// //             start++; continue;
// //         }
// //         if(!checkAlphaNumeric(tolower(s[end]))){
// //             end--; continue;
// //         }
// //         if(tolower(s[start]) != tolower(s[end]) ){
// //             return false;
// //         }
// //         start++ ; end--;
// //     }
// //     return true;
// // }

// bool checkAplhaNumeric(char ch)
// {
//     if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
//     {
//         return true;
//     }
//     return false;
// }

// bool isPalindrome(string s)
// {

//     int start = 0, end = s.length() - 1;

//     while (start < end)
//     {
//         if (!checkAplhaNumeric(s[start]))
//         {
//             start++;
//             continue;
//         }
//         // if (!checkAplhaNumeric(s[end]))
//         {
//             end--;
//             continue;
//         }
//         if (tolower(s[start]) != tolower(s[end]))
//         {
//             return false;
//         }
//         start++;
//         end--;
//     }
// }

// int main()
// {

    // string s = "daabcbaabcbc";
    // string part = "abc";

//     string text = "Ab?c$ecba";
//     // alphanumeric character
//     // 0 - 9
//     // a - z
//     // A - Z

//     bool result = isPalindrome(text);

//     if (result)
//     {
//         cout << "String is palindrome" << endl;
//     }
//     else
//     {
//         cout << "String is not a palindrome" << endl;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;



bool isAplhpaNumeric(char c)
{
    if ((c >= '0' && c <= '9') || (tolower(c) >= 'a' && tolower(c) <= 'z'))
    {
        return true;
    }
    return false;
}

bool check(string s)
{
    int st = 0, end = s.length() - 1;

    while (st < end)
    {

        if (!isAplhpaNumeric(s[st]))
        {
            st++;
            continue;
        }
        if (!isAplhpaNumeric(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }

        st++;
        end--;
    }

    return true;
}


int main()
{

    string text = "Ab?c$ecba";

    cout<<check(text);

    return 0;
}