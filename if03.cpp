//������ ��쿡�� "����� �����Դϴ�.""����� 15000�� ���" 
//�̼��� ��쿡��"����� �̼����Դϴ�.""����� 9000�� ���"

#include <stdio.h> 
int main()
{
    int age, money=9000;
	
	printf("���̸� �Է��ϼ���: ");
	scanf("%d",&age);
	
	if (age >= 19)
	{
		money = 15000;
		printf("����� �����Դϴ�.\n");
		printf("�����=%d�� �Դϴ�\n", money);
	}
	else
	{
		printf("����� �̼����Դϴ�.\n");
		printf("�����=%d�� �Դϴ�\n", money);
	}
	
	
	
	return 0; 
 } 
