#include <stdio.h> 
#include <stdlib.h>

struct student {      //����ü�� ����� ����. - �������� �ڷḦ �ϳ��� ��� Ŭ������ ����� ��. 
	int number;
	char name[10];
	double grade;   //������ �Ҽ������� ��Ÿ�� �� �ֵ��� ��. 
};


int main(void)
{
	struct student s; //struct student�� int,char, doubleó�� �ϳ��� �ڷ����� �Ȱ���. - s�� ������.
	
	printf("�й��� �Է��ϼ���. : ");
	scanf("%d", &s.number);
	printf("�̸��� �Է��ϼ���. : ");
	scanf("%s", &s.name); //char�� %s�� �Է¹ް� ����Ѵ�. 
	printf("������ �Է��ϼ���. : ");
	scanf("%lf", &s.grade); //%lf�� - �� ���� //%1f�� �򰥸� ���� �־ ����. 
	
	printf("�й� : %d\n",  s.number);
	printf("�̸� : %s\n", s.name); //char�� %s�� �Է¹ް� ����Ѵ�.
	printf("���� : %.1f\n", s.grade); //�Ҽ��� ���ڸ� ���� ��Ÿ��. 
	return 0;
}
