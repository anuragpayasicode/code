#include <stdio.h>
int main()
{
    //  sqaure
    // LOOOP FOR ROW
    // for (int i = 1; i <= 10; i++)
    // {

    //     // loop for column
    //     for(int j = 1 ; j<=10 ; j++){
    //            printf("*");
    //     }
    //     printf("\n");
    // }

    // triangel
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // hollow square

    // int row = 0, column = 0;
    // printf("Enter how many row and column  you want in your pattern\n");
    // scanf("%d %d" , &row , &column);

    // printf("You entered No. of row is %d and No. of column is %d \n" , row  , column);
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= column; j++)
    //     {
    //         if (i == 1 || i == row || j == 1 || j == column)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

       
      for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    for (int i = 8; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}