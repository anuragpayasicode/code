
#include <stdio.h>

int main()
{

    //     int day = 1;

    //     printf("Enter your day in no. from 1 to 7 only\n");
    //     scanf("%d", &day);

    //  if statement
    //  if (age >= 18)
    // {
    //     printf("You are elegible foe voting\n");
    // }

    // if else

    // if (age >= 18)
    // {
    //     printf("You are elegible foe voting\n");
    // }
    // else
    // {
    //     printf("You are not eligible to do vote because your age is %d", age);
    // }

    // if( score > 0 && score < 40 ){
    //     printf("You are fail");
    // }
    // else if(score < 70 ){
    //     printf("You are passed");
    // }
    // else if(score < 100){
    //     printf("You are passed with first division");
    // }
    // else{
    //     printf("Enter valid marks only");
    //

    // int day;

    // printf("Enter day number: ");

    // if(scanf("%d", &day) == 0){
    //     printf("Invalid input");
    //     return 0;
    // }

    // if(day == 1){
    //     printf("Today is monday");
    // }
    // else if(day == 2){
    //     printf("Today is tuesday");
    // }
    // else if(day == 3){
    //     printf("Today is wednesday");
    // }
    // else if(day == 4){
    //     printf("Today is thursday");
    // }
    // else if(day == 5){
    //     printf("Today is friday");
    // }
    // else if(day == 6){
    //     printf("Today is saturday");
    // }
    // else if(day == 7){
    //     printf("Today is sunday");
    // }
    // else{
    //     printf("Please enter valid input only");
    // }

    //     int a;

    //     printf("Enter any number\n");
    //     int test =  scanf("%d" , &a);

    //    printf("Value of a is :- %d\n" , a);
    //    printf("Value of test is :- %d\n" , test);

    //   switch case

    //  switch( value ){

    //         case value :
    //         // code block
    //         break;
    //         case value :
    //         // code block
    //         break;
    //         default :
    //         // code

    //  }
    int day = 0;
    printf("Enter your day in no. from 1 to 7 only\n");

    scanf("%d", &day);

    // switch (day)
    // {

    // case 1:
    //     printf("Today is Monday");
    //     break;
    // case 2:
    //     printf("Today is Tuesday");
    //     break;
    // case 3:
    //     printf("Today is Wednesday");
    //     break;
    // case 4:
    //     printf("Today is Thursday");
    //     break;
    // case 5:
    //     printf("Today is Friday");
    //     break;
    // case 6:
    //     printf("Today is Saturday");
    //     break;
    // case 7:
    //     printf("Today is Sunday");
    //     break;
    // default:
    //     printf("Valid input only");
    // }



    // if(day > 17){

    // }else{

    // }

    // condition ? code if ture : code if false ; 

    // day > 17 ? printf("Elible") : printf("Not");/

    day == 1 ? printf("M") : day == 2 ? printf("T") : day == 3 ? printf("W") : day == 4 ? printf("Th") : printf("Not valid");

    return 0;
}
