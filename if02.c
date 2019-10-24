//성년인 경우에는 "당신은 성입입니다.""입장료 15000원 출력" 
//미성년 경우에는"당신은 미성년입니다.""입장료 9000원 출력"

#include <stdio.h> 
int main()
{
    int age, money=9000;
	
	printf("나이를 입력하세요: ");
	scanf("%d",&age);
	
	if (age >= 19)
	{
		money = 15000;
		printf("당신은 성인입니다.\n");
		printf("입장료=%d원 입니다\n", money);
	}
	else
	{
		printf("당신은 미성년입니다.\n");
		printf("입장료=%d원 입니다\n", money);
	}
	
	
	
	return 0; 
 } 
