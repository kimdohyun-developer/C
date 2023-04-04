#include <stdio.h>

//특정한 금액을 받어서 가장적은 거스름 화폐의 개수를 구하는 함수 
int smallest(int number)
{
	int count = 0;
	while(number >= 50000) //5만원 
	{
		number -= 50000; // number = number -50000
		count++;
	}
	while(number >= 10000) //만원 
	{
		number -= 10000; // number = number -10000
		count++;
	}
	while(number >= 5000) //5천원 
	{
		number -= 5000; // number = number -5000
		count++;
		while(number >= 1000) // 천원 
	{
		number -= 1000; // number = number -1000
		count++;
	}
	while(number >= 500) //5백원 
	{
		number -= 500; // number = number -500
		count++;
	}
	while(number >= 100) //백원 
	{
		number -= 100; // number = number -100
		count++;
	}
	while(number >= 50) //50원 
	{
		number -= 50; // number = number -50
		count++;
	}
	while(number >= 10) //10원 
	{
		number -= 10; // number = number -10
		count++;
	}
	return count; 
 } 

int main(void)
{
	int number;
	printf("금액을 입력하세요 : ");
	scanf("%d", &number);
	printf("최소로 줄 수 있는 화폐의 개수는 %d개 입니다.\n", smallest(number)); 
	return 0;
 } 
