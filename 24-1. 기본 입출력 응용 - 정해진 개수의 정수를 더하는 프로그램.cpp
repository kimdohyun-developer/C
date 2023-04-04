#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	printf("정수의 개수를 입력하세요 : ");
	scanf("%d", &number); //입력 
	for(i = 0; i < number; i++) //i는  초기값이 0이고 number값만큼 반복한다.
	{
		printf("정수의 값을 입력하세요 : ");
		scanf("%d", &x);
		sum += x; // sum = sum + x //복합연산자 
	 } 
	 printf("전체 정수의 값은 %d입니다.", sum);
	 return 0;
 } 
