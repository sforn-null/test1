#include<stdio.h>
#include<string.h>
//��ѭ���ķ�ʽ��n�Ľ׳�
int Fac1(int n)
{
	int i=0;
	int ret =1;
	for(i=1;i<=n;i++)
	{
		ret *=i; 
	}
	return ret;
}
int main()
{
	int n=0;
	int ret =0;
	scanf("%d",&n);
	ret=Fac1(n);
	printf("%d\n",ret);
	return 0;
 } 

//�õݹ�ķ�����n�Ľ׳� 
int Fac2(int n)
{
	if(n<=1)
	return 1;
	else
	return n*Fac2(n-1);
}
int main()
{
	int n=0;
	int ret =0;
	scanf("%d",&n);
	ret=Fac2(n);
	printf("%d\n",ret);
	return 0;
 } 