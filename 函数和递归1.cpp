#include<stdio.h>
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;
// } 

//����һ�����������޷��ţ�������˳���ӡ����ÿһλ�����磺����1234�������1 2 3 4 
void print(int n)
{
	if(n>=10)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
int main()
{
	unsigned int num=0;
	scanf("%d",&num);
	print(num);
	return 0;
}
#include<string.h>

//������� �����е�strlen�������ַ������� 
int main() 
{
	char arr[]="bit";
	int len = strlen(arr);
	printf("%d\n",len);
	return 0;
}
