#include<stdio.h> 
int alert(int m,int n)
{ while (m<n)
printf("\a");

return n;
}
int main (void)
{
	int i ,a;
	printf("请输入一个十以内的整数：");
scanf ("%d",&a);
	for(i=1;i<=a ;i++)
	{alert(a,i);
	printf("\a");}
	return 0;
}
