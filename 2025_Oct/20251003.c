#include <stdio.h>

// 이중 for문 
int main(void)
{
    /*for (int i = 1; i <= 3; i++)
    {
        printf("first for loop : %d\n", i);

        for (int j = 1; j <= 5; j++)
        {
            printf("second for loop : %d\n", j);
        }
    }*/

    //구구단 
    /*for(int i=2; i <=9; i++)
    {
        printf("%d caculation\n", i);
        for(int j = 1; j <=9; j++)
        {
            printf("%d X %d = %d\n", i, j, i*j);
        }
    }*/

    // 별커지기 만들기 
    /*for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");

    }*/

    /*for (int i = 0; i < 5; i++)
    {
        for (int j = i; j<5-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    // 피라미드 쌓기 
    int floor;
    printf("how many levels(floors) do you want for the pyramid?");
    scanf_s("%d", &floor);

    for (int i =0; i <floor; i++)
    {
        for (int j = i; j < floor-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i*2+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
