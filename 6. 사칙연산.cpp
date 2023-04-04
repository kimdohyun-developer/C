#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	printf("x = %d입니다.\n", x);
	printf("y = %d입니다.\n", y);
	printf("x + y = %d입니다.\n", x + y); //더하기 
	printf("x - y = %d입니다.\n", x - y); //빼기 
	printf("x * y = %d입니다.\n", x * y); //곱하기 
	printf("x / y = %d입니다.\n", x / y); //나누기 - 몫만 출력됨. -int(정수)체계에서만 
	return 0;
}
