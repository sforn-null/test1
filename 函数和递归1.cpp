#include<stdio.h>
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;
// } 

//接受一个整型数（无符号），按照顺序打印它的每一位。例如：输入1234，输出：1 2 3 4 
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

//这个是用 库里有的strlen函数求字符串长度 
int main() 
{
	char arr[]="bit";
	int len = strlen(arr);
	printf("%d\n",len);
	return 0;
}
