#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 선언 
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success(); 
void fail();

// main
int main(void)
{
    // 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 렌덤을 출제. 
    // 맞히면 통과, 틀리면 실패 

    srand(time(NULL));
    int count = 0;
    for (int i = 1; i<=5; i++)
    {
        // x*y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        showQuestion(i, num1,num2);

        int answer = -1;
        scanf_s("%d", &answer);
        if (answer == -1)
        {
            printf("end the program\n");
            exit(0);
        }
        else if (answer == num1*num2)
        {
            success();
            count++;
        }
        else{
            fail();
        }
    }
    printf("\n\n you figured %d out of 5 password numbers", count);
    return 0; 
}

// 구현
int getRandomNumber(int level)
{
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2)
{
    printf("\n\n\n#########%d th passwords #########\n", level);
    printf("\n\t%d X %d is?\n\n", num1, num2);
    printf("############################\n");
    printf("\ntype passwords (end: -1)>>");
}

void success()
{
    printf("\n >> good!");
}

void fail()
{
    printf("\n >> fail!");
}