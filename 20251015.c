#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    srand(time(NULL));
    int num = rand() % 100+1;
    printf("num: %d\n", num); 
    int answer = 0;
    int chance = 5; 
    while (chance>0)
    {
        printf("left chance %d \n",chance--);
        printf("guess the number (1~100):");
        scanf_s("%d",&answer);
        if (answer>num)
        {
            printf("DOWN\n");
        }
        else if (answer<num)
        {
            printf("up\n");
        }
        else if(answer == num)
        {
            printf("final answer!");
            break;
        }
        else
        {
            printf("something went wrong");
        }
    }
    return 0;
}
//     srand(time(NULL));
//     int i = rand() % 3;
//     switch(i)
//     {
//         case 0: printf("scissor\n"); break;
//         case 1: printf("rock\n"); break;
//         case 2: printf("paper\n");break;
//         default: printf("dont know\n");
//     }
//     //srand(time(NULL)); // 난수 초기화 
//     //int num = rand() % 3 + 1; // 1~3
    
//     /*printf("before rand initialization \n");
//     for (int i = 0; i <10; i++)
//     printf("%d", rand() % 10);
    
//     srand(time(NULL)); // 난수 초기화 
//     printf("\n\nafter rand initialization \n");
//     for (int i = 0; i <10; i++)
//     printf("%d", rand() % 10);
//     */
//    // 가위 바위 보 
// //    srand(time(NULL));
// //    int i = rand() % 3; //0~2 
// //    if(i==0)
// //    {
// //     printf("scissor\n");
// //    }
// //    else if (i == 1)
// //    {
// //     printf("rock\n");
// //    }
// //    else if (i == 2)
// //    {
// //     printf("paper\n");
// //    }
// //    else
// //    {
// //     printf("dont know\n");
// //    }

//     return 0;
// }
//#include <stdio.h>
// if 조건 {} else {}

//int main(void)
//{
    /*for (int i = 1; i <=30; i++)
    {
        if (i >= 6)
        {
            printf("you dont need to do the presentation\n");
            break;
        }
        printf("number %d should prepare his/her presentation\n", i);
    }*/
   /*for (int i = 1; i <= 30; i++)
   {
    if (i>=6 && i<=10)
    {
        if (i == 7)
        {
            printf("number %d is out of office\n", i);
            continue;
        }
        printf("number %d should prepare presentation\n",i);
    }
   }*/
  //int a = 10;
  //int b = 10;
  //int c = 12;
  //int d = 13;
  //if (a == b || c == d)
 // {
   // printf("a and b or c and d have same values\n");
  //}
  //else
 // {
  //  printf("they have different values\n");
  //}
    //return 0;
//}