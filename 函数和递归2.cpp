#include<stdio.h>
#include<string.h>
//������Լ��������������ַ������� 
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
//����ǲ�������ʱ�������ú����ݹ�ķ��� 
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