#include<stdio.h>

int main()
{
	char ch;
	
	//'A' = 65 ... 'Z' = 90
	printf("���ĺ� �Է�: ");
	scanf("%c",&ch);
	
	if (ch >= 97 && ch <= 122)
	{
		ch -= 32;
		
		printf("����� �Է��� ������ �빮�ڴ� %c �Դϴ�\n",ch);
	}
	return 0;
	
} 
