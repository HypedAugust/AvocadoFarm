#include <stdio.h>
#include <time.h>

// 선언
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); 

int main(void)
{
    int ret = apple(5,2);
    printf("%d\n");

    printf("out of total %d apples, I ate %d apples\n Now %d apples are left\n", 10,4,apple(10,4));
    return 0;
}

// 정의 
void function_without_return()
{
    printf("doesnt return anything\n");
}

int function_with_return()
{
    printf("has a return value\n");
    return 10;
}

void function_without_params()
{
    printf("doesnt have a return value\n");
}

void function_with_params(int num1, int num2, int num3)  // ← 세미콜론 제거!
{
    printf("This function has a return value which is %d, %d, %d \n", num1, num2, num3);
}

int apple(int total, int ate)
{
    printf("This function has params and return values\n");
    return total - ate;
}