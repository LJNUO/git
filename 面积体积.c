#include <stdio.h>
int s1, s2, s3;  //面积//全局变量
int vs(int a, int b, int c)//数组全局变量
{
    int v;  //体积//局部变量
    v = a * b * c;
    s1 = a * b;
    s2 = b * c;
    s3 = a * c;
    return v;
}
int main()//全局变量
{
    int v, length, width, height;//局部变量
    printf("Input length, width and height: ");
    scanf("%d %d %d", &length, &width, &height);
    v = vs(length, width, height);
    printf("v=%d, s1=%d, s2=%d, s3=%d\n", v, s1, s2, s3);
    return 0;
}
