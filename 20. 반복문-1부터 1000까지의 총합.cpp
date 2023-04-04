#include <stdio.h>

int main(void)
{
	int i = 1, sum = 0; //i는 1이고 sum(총합)은 0이라는 뜻 
	while(i <= 1000) // 조건이 참일 때 반복  실행한다는 뜻. 조건이 거짓이 되면 반복이 멈춤 
	{
		sum = sum + i; //총합에 i를 더하는 것 
		i++ ; //증감연산자를 이용하여 i에 1을 더하는 것 
	}
	printf("1부터 1000까지의 합은 %d입니다.\n", sum);
	return 0; 
}
