#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("현재의 x는 %d입니다.\n", x);
	x++;  // ++는  x에 1을 더하는 것 
	printf("현재의 x는 %d입니다.\n", x); //출력 
	printf("현재의 x는 %d입니다.\n", x--); // 출력한다음  1을 빼는 것 // --는 1을 빼는 것 
	printf("현재의 x는 %d입니다.\n", x); //출력 
	printf("현재의 x는 %d입니다.\n", --x); //1을 뺴고 출력하는 것(--나++의 위치에 따라 출력되는 값이 달라짐. 
	return 0;
 } 
