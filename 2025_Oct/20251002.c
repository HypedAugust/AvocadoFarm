#include <stdio.h>

// for문 
int main(void)
{
    //printf("Hello\n");  // \n 추가 (줄바꿈)
    // 뿔뿔 
    /*int a = 10;
    printf("a is %d\n", a);
    a++;
    printf("a is %d\n", a);
    a++;
    printf("a is %d\n", a);*/

    //int b = 20;
    // ++ 의 뜻은 b = b + 1 
    //printf("b is %d\n", ++b);
    //printf("b is %d\n", b++);
    //printf("b is %d\n", b);

    // 반복문은 for, while, do while 이렇게 있다. 
    // for (선언; 조건; 증감)
    /*for (int i = 1; i <= 10; i++)
    {
        printf("Hello World %d\n", i);
    }*/
    
    // while (조건) {}
    /*int i = 1;
    while (i <=10)
    {
        printf("Hello World %d\n", i++);
        // i++
    }*/
    
    // do while 
    // do {} while (조건);
    int i = 1;
    do {
        printf("Hello World %d\n",i++);
    } while (i<11);
    return 0;
}