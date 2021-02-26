#include<stdio.h>
#include<string.h>
//这个是自己创建个函数求字符串长度 
int my_strlen(char*str)
{
	int count=0;
	while(*str !='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[]="bit";
	int len=my_strlen(arr);
	printf("%d\n",len);
	return 0;
}
//这个是不创建临时变量而用函数递归的方法 
int my_strlen(char*str)
{
	if(*str !=0)
	
		return 1+my_strlen(str+1);
	  
	 else
	 
	 return 0;
}
int main()
{
	char arr[]="bit";
	int len=my_strlen(arr);
	printf("%d\n",len);
	return 0;
}