#include <stdio.h>
#include <string.h> //strcpy()�� �����ϴ� ���̺귯�� 

struct student {      //����ü�� ����� ����. - �������� �ڷḦ �ϳ��� ��� Ŭ������ ����� ��. 
	int number;
	char name[10];
	double grade;   //������ �Ҽ������� ��Ÿ�� �� �ֵ��� ��. 
};


int main(void)
{
	struct student s; //struct student�� int,char, doubleó�� �ϳ��� �ڷ����� �Ȱ���. - s�� ������. 
	s.number = 20150001; //s(struct student ����ü) �ȿ� �ִ� number�� 20150001�� �ִ� ��. 
	strcpy(s.name, "ȫ�浿");  //s(struct student ����ü) �ȿ� �ִ� name[�迭]��  "ȫ�浿"�� ����.  
	s.grade = 4.5; //s(struct student ����ü) �ȿ� �ִ� grade�� 4.5�� �ִ� ��. 
	printf("�й� : %d\n",  s.number);
	printf("�̸� : %d\n", s.name);
	printf("���� : %.1f\n", s.grade);
	return 0;
}
