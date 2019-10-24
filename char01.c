#include<stdio.h>

int main()
{
	char ch;
	
	printf("대문자 입력 : ");
	scanf("%c", &ch);
	
	//대문자 'A' ASCII CODE 값 65 'B'는 66...
	//소문자 'a' ASCII CODE 값 97 두 문자의 GAP은 32 
	
	printf("%c의 소문자는 %c입니다.",ch,ch+32);
	
	return 0;
}
