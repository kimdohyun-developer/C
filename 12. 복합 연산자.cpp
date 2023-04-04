#include <stdio.h>

int main(void)
{
	int x = 100;
	printf("현재 x의 값은 %d입니다.\n", x);
	x += 50; // x= x + 50;을 표현한 것 
	printf("현재의 x값은 %d입니다.\n", x);
	x -= 50; // x= x- 50;을 표현한 것  
	printf("현재의 x값은 %d입니다.\n", x);
	x *= 50; // x = x * 50;을 표현한 것 - 곱하기 
	printf("현재의 x값은 %d입니다.\n", x);
	x /= 50; // x = x / 50;을 표현한 것 - 몫 계산 
	printf("현재의 x값은 %d입니다.\n", x);
	x %= 3; // x = x % 50;을 표현한 것 - 나머지 계산 
	printf("현재의 x값은 %d입니다.\n", x);
	return 0; 
 } 
 
 
 
 
 // 복합 연산자를 쓰면 코딩의 길이를 줄일 수 있다. 
