#include <stdio.h>

int main()
{
//    int age ;
//    printf("Enter your age \n");
//    scanf("%d" , &age);

//    if(age > 17){
//     printf("You are eligible to do vote");
//    }
//    else{
//     printf("You are not eligible to do vote");

//    }



// calculator 

// int fisrtNumber , seconddNumber , operator , result;

// printf("Enter 1 if you want Addition\nEnter 2 if you want Substraction\nEnter 3 if you want Multiplication\nEnter 4 if you want Division\nEnter 5 if you want Remander of Two Number\n   ");

// scanf("%d" , &operator);

// printf("Enter first number\n");
// scanf("%d" , &fisrtNumber);
// printf("Enter second Number\n");
// scanf("%d" , &seconddNumber);

// if(operator == 1){
//     result = fisrtNumber + seconddNumber;
//     printf("Sum of Two Numer is :- %d" ,result);
// }
// else if(operator == 2){
 
//     result = fisrtNumber - seconddNumber;
//     printf("Substraction of Two Numer is :- %d" ,result);

// }
// else if(operator == 3){
 
//     result = fisrtNumber * seconddNumber;
//     printf("Multiplication of Two Numer is :- %d" ,result);

// }
// else if(operator == 4){
 
//     result = fisrtNumber * seconddNumber;
//     printf("Division of Two Numer is :- %d" ,result);

// }
// else if(operator == 5){
 
//     result = fisrtNumber * seconddNumber;
//     printf("Remander of Two Numer is :- %d" ,result);

// }
// else{
//     printf("Enter valid number only");
// }


// for(int i =1 ; i <= 10 ; i++){

//     printf("%d\n" , 3*i);
// }

// int std1 = 20;
// int std2 = 25;
// int std3 = 18;
// int std4 = 17;

// array

// declaration of Array

int stdMarks[] = {10 , 20 , 18 , 27 , 49 , 57 , 87 , 90 , 12 , 12}; 

int index = 0;
while(index <= 9){
    printf("%d\n" , stdMarks[index]);
    index++;
}





    return 0;
}