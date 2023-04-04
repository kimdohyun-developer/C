#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	printf("x가 y와 같은가 ? %d\n", x == y); // 같은지 판단 
	printf("x가 y와 다른가 ? %d\n", x != y); // 다른지 판단 
	printf("x가 y보다 큰가 ? %d\n", x > y); // x가 y보다 더 큰지 판단 
	printf("x가 y보다 작은가 ? %d\n", x < y); // x가 y보다 더 작은지 판단 
	printf("x에 y값을 넣으면 ? %d\n", (x = y)); // 기존의 x값에 y를 대입 
	return 0;
 } 
 
 
 //c언어에서는 참과 거짓이 0과 1로 표현된다. (참- 1 거짓- 0)
