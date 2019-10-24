
//19세 미만과 60세 이상은 10000원에서 5000원 할 
#include<stdio.h>

int main()
{
	int age, money=10000;
	
	printf("나이를 입력하세요: ");
	scanf("%d",&age);
	
	if (age < 19 || age >= 60)
	{
		money -= 5000;
	}
	
	printf("당신의 입장료는 %d입니다.\n", money);
	return 0; 
}
