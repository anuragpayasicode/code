#include <iostream>
using namespace std;

int main(){

    string text = "helloworld";  
    string text = "worldhello";  
    int frequency[26]={0};
    for(int i = 0; i<text.length() ; i++){
          
         frequency[text[i] - 'a']++;
         
    }
    for(int i = 0 ; i < 26; i++){
        if(frequency[i] != 0){
            cout<<char(i+'a')<<" : "<<frequency[i]<<endl;
        }
    }

    // anagram 
    
    // int number[] = {1 , 2 , 3, 2, 1 , 2 , 3 , 4 , 1};
    // int newArray[10] ={0 , 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // for(int i = 0 ; i < 9 ; i++){

    //     newArray[number[i]]++;
        
    // }
    //    for(int i = 0 ; i < 10 ; i++){

    //     if(newArray[i] != 0){
    //           cout <<number[i-1]<<" : " <<newArray[i]<<endl;
    //     }
    // }

    // int freq=[26];

    //  a = 97 - a
    //  b = b - a
    //  c = c - a
    
     
    return 0;
}