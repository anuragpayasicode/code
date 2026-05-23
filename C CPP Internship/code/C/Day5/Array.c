#include <stdio.h>
int main()
{

    int std1 = 100;
    int std2 = 90;
    int std3 = 78;
    int std4 = 98;

    int score[10];

    int myArray[] = {10, 20, 30, 40, 50, 60, 60, 40, 50, 60, 60, 70, 60, 80};

    int studentMarks[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // studentMarks[0];
    // studentMarks[1];
    // studentMarks[2];
    // studentMarks[3];
    // studentMarks[4];
    // studentMarks[5];
    // studentMarks[6];
    // studentMarks[7];
    // studentMarks[8];
    // studentMarks[9];

    // studentMarks[2] = 500;

    // printf("%d\n", studentMarks[0]);
    // printf("%d\n", studentMarks[1]);
    // printf("%d\n", studentMarks[2]);
    // printf("%d\n", studentMarks[2]);
    // printf("%d\n", studentMarks[3]);
    // printf("%d\n", studentMarks[4]);
    // printf("%d\n", studentMarks[5]);
    // printf("%d\n", studentMarks[6]);
    // printf("%d\n", studentMarks[7]);
    // printf("%d\n", studentMarks[8]);
    // printf("%d\n", studentMarks[9]);

    // for (int i = 0; i <= 10 - 1; i++)
    // {
    //     printf("%d\n", studentMarks[i]);
    // }

    // take input from user 

    for(int i = 0 ; i < 10 ; i++){
        printf("Enter %d position  number\n" , i);
        scanf("%d" , &score[i]);
    }
    for(int i = 0 ; i < 10 ; i++){
  
        printf("%d" , score[i]);
    }

    

    return 0;
}