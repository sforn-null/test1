#include<stdio.h>
//�õݹ���쳲���������,���ռ临�Ӷ�̫�� 
int fib(int n)
{
	if(n<=2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret = fib(n);
	printf("%d\n",ret);
	return 0;
}

//�õ����ķ�����쳲���������

 int fib(int n)
 {
 	int a=1;
 	int b=1;
 	int c=1;
 	while(n>2)
 	{
 		c=a+b;
 		a=b;
 		b=c;
 		n--;
	 }
	 return c;
 }
 int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret = fib(n);
	printf("%d\n",ret);
	return 0;
}
