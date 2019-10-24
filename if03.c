#include <stdio.h>

int main()
{

int score;

printf("성적을 입력하세요: ");
scanf("%d", &score);


if (score >= 95)
{
	printf("당신의 학점은 4.5입니다. A+\n");
}
else if(score >= 90)
{
	printf("당신의 학점은 4.0입니다. A\n");
}
else if(score >= 85)
{
	printf("당신의 학점은 3.5입니다. B+\n");
}
else if(score >= 80)
{
	printf("당신의 학점은 3.0입니다. B\n");
}
else if(score >= 75)
{
	printf("당신의 학점은 2.5입니다. C+\n");
}
else if(score >= 70)
{
	printf("당신의 학점은 2.0입니다. C\n");
}
else if(score >= 65)
{
	printf("당신의 학점은 1.5입니다. D+\n");
}
else if(score >= 60)
{
	printf("당신의 학점은 1.0입니다. D\n");
}
else
{
	printf("당신은 학사경고대상입니다. F");
}
return 0;	
} 
