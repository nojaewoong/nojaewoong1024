#include <stdio.h>

int main()
{

int score;

printf("������ �Է��ϼ���: ");
scanf("%d", &score);


if (score >= 95)
{
	printf("����� ������ 4.5�Դϴ�. A+\n");
}
else if(score >= 90)
{
	printf("����� ������ 4.0�Դϴ�. A\n");
}
else if(score >= 85)
{
	printf("����� ������ 3.5�Դϴ�. B+\n");
}
else if(score >= 80)
{
	printf("����� ������ 3.0�Դϴ�. B\n");
}
else if(score >= 75)
{
	printf("����� ������ 2.5�Դϴ�. C+\n");
}
else if(score >= 70)
{
	printf("����� ������ 2.0�Դϴ�. C\n");
}
else if(score >= 65)
{
	printf("����� ������ 1.5�Դϴ�. D+\n");
}
else if(score >= 60)
{
	printf("����� ������ 1.0�Դϴ�. D\n");
}
else
{
	printf("����� �л������Դϴ�. F");
}
return 0;	
} 
