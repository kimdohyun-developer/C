#include <stdio.h>
#define MONTHS 12  //���� ������� ���� 

int main(void)
{
	double monthSalary = 1000.5;  //������ ������ ǥ��- �Ҽ������� ��Ÿ�� �� �ְ� �� 
	printf("$ %.2f", monthSalary * MONTHS); //���ǵ� �� �ΰ��� ���ϴ� �� 
	return 0;
}
