#include <stdio.h>
#include <math.h>

// void greeting(char name[] , int dob)
// {
//     printf("Happy Birthday %s your date of birth is %d \n" , name , dob);
//     dob = dob +1 ;
//     printf("Check %d\n"  ,dob);
// }

// int sum(){
//     int result = 10 + 20;
//     return result;
// }

int main()
{

    // int dob;
    // printf("Enter date of your birth\n");
    // scanf("%d" , &dob);

    // for (int i = 1; i <= 30; i++)
    // {
    //     printf("Today date is :- %d\n" , i);
    //     if(i == dob){
    //         greeting("Rahul" , dob);
    //         greeting("Mukesh" , dob);

    //     }
    // }
    // printf("TEst %d\n" , dob);
    // int arr[] = {1,0,0,2,3,0,3,0,0,5,6};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int largestNo = arr[0];
    // int oddNo =0 , evenNo =0;

    // for (int i = 0; i < size; i++)
    // {
    //     if(arr[i]%2 == 0){
    //         evenNo++;
    //     }else{
    //        oddNo++;

    //     }
    // }

//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i] > largestNo)
//         {
//             largestNo = arr[i];
//         }
//     }
//   printf(" largest no in this array is :- %d", largestNo);
    // printf("No of Even no is %d\nNo of Odd Number is %d" , evenNo , oddNo);
    // int arr[] = {1,2,3,4};

    // int bankbalance = 100;
    // int *ptr = &bankbalance;

    // for(int i =0 ; i<4 ; i++){
    //     printf("%p\n" , &arr[i]);
    // }
    // printf("%p" , ptr);



    int num = 121;
    double squareRoot = sqrt(num);
    printf("%lf" , squareRoot);
    return 0;
}