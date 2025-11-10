#include <stdio.h>
// if 조건 {} else {}

int main(void)
{
    /*for (int i = 1; i <=30; i++)
    {
        if (i >= 6)
        {
            printf("you dont need to do the presentation\n");
            break;
        }
        printf("number %d should prepare his/her presentation\n", i);
    }*/
   for (int i = 1; i <= 30; i++)
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
   }
    return 0;
}