#include<stdio.h> 
int alert(int m,int n)
{ while (m<n)
printf("\a");

return n;
}
int main (void)
{
	int i ,a;
	printf("������һ��ʮ���ڵ�������");
scanf ("%d",&a);
	for(i=1;i<=a ;i++)
	{alert(a,i);
	printf("\a");}
	return 0;
}
