#include <stdio.h>

//Ư���� �ݾ��� �޾ �������� �Ž��� ȭ���� ������ ���ϴ� �Լ� 
int smallest(int number)
{
	int count = 0;
	while(number >= 50000) //5���� 
	{
		number -= 50000; // number = number -50000
		count++;
	}
	while(number >= 10000) //���� 
	{
		number -= 10000; // number = number -10000
		count++;
	}
	while(number >= 5000) //5õ�� 
	{
		number -= 5000; // number = number -5000
		count++;
		while(number >= 1000) // õ�� 
	{
		number -= 1000; // number = number -1000
		count++;
	}
	while(number >= 500) //5��� 
	{
		number -= 500; // number = number -500
		count++;
	}
	while(number >= 100) //��� 
	{
		number -= 100; // number = number -100
		count++;
	}
	while(number >= 50) //50�� 
	{
		number -= 50; // number = number -50
		count++;
	}
	while(number >= 10) //10�� 
	{
		number -= 10; // number = number -10
		count++;
	}
	return count; 
 } 

int main(void)
{
	int number;
	printf("�ݾ��� �Է��ϼ��� : ");
	scanf("%d", &number);
	printf("�ּҷ� �� �� �ִ� ȭ���� ������ %d�� �Դϴ�.\n", smallest(number)); 
	return 0;
 } 
