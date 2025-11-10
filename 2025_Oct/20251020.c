// 배열 array

#include <stdio.h>

int main(void)
{
    // int subway_array[3];
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for (int i = 0; i <3; i++)
    // {
    //     printf("%d number of people are in subway number %d\n", subway_array[i], i+1);
    // }

    // 값은 초기화를 반드시 해야 함 
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // for (int i = 0; i<10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    
    // float arr_f[5] = {1.0f, 2.0f, 3.0f};
    // for (int i = 0; i <5; i++)
    // {
    //     printf("%.2f\n", arr_f[i]);
    // }
    
    // // 문자, 문자는 1개 
    // char c = 'A';
    // printf("%c\n", c); 

    // // 문자열, 여러개의 문자 
    // // 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 있어야 한다. 
    // char str[7]= "coding"; // []가 6개 공간이 생겨서 그 안에 char를 넣는 거다. 
    // // NULL을 포함하기 위해 공간을 7개로 만들었다. 
    // printf("%s\n", str);

    // char str[] = "coding";
    // // printf("%s\n", str);
    // // printf("%d\n", sizeof(str));

    // for (int i = 0; i <sizeof(str); i++)
    // {
    //     printf("%c\n", str[i]);
    // }

    // char c_array[7] = {'c', 'o','d','i','n','g','\0'};
    // printf("%s\n", c_array);

    // char c_array[7] = {'c', 'o','d','i','n','g','\0'};
    // // printf("%s\n", c_array);

    // for (int i = 0; i <sizeof(c_array); i++)
    // {
    //     printf("%c\n", c_array[i]);
    // }

    // 문자열 입력 받기 
    char name[256];
    printf("type your name:");
    scanf_s("%s", name, sizeof(name));
    printf("%s\n", name); 
    return 0;
}
