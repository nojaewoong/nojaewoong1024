#include<stdio.h>

int main()
{
	char ch;
	
	printf("�빮�� �Է� : ");
	scanf("%c", &ch);
	
	//�빮�� 'A' ASCII CODE �� 65 'B'�� 66...
	//�ҹ��� 'a' ASCII CODE �� 97 �� ������ GAP�� 32 
	
	printf("%c�� �ҹ��ڴ� %c�Դϴ�.",ch,ch+32);
	
	return 0;
}
