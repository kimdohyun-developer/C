
#include <stdio.h>
#define size 5

struct student {
	int number;
	char name[20]; //�ѱ��� ����� ������ ũ�Ⱑ 2�迩�� []�� ���ڵ� ����� 2�� ũ�� �˳��� �־��ش�.
	double grade;  
};


int main(void)
{
	struct student list[size]; //�迭�� ��� 
	int i;
	
	for(i = 0; i < size; i++) //5�� ���� 
	{
		printf("�й��� �Է��ϼ���. : ");
		scanf("%d", &list[i].number); 
		printf("�̸��� �Է��ϼ���. : ");
		scanf("%s", &list[i].name); 
		printf("������ �Է��ϼ���. : ");
		scanf("%lf", &list[i].grade); 
	}
	
	for(i = 0; i < size; i++) //5�� ���� 
	{
		printf("�й� : %d, �̸� : %s, ���� : %.1f\n",list[i].number, list[i].name, list[i].grade);
	}
	return 0;
 } 
