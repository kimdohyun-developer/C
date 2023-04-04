#include <stdio.h>

int main(void)
{
	int x = -50, y = 30;
	int absoluteX = (x > 0) ? x : -x; //조건이 참이면 그대로 나오고 거짓이면 -를 붙인 값이 나온다.-절댓값계산 
	int max = (x > y) ? x : y; // x가 더 크면 x를 출력 아니먄 y를 출력하도록 함 
	int min = (x < y) ? x : y; // x가 더 작으면 x를 출력하고 아니면 y를 출력함 
	printf("x의 절댓값은 %d입니다.\n",absoluteX);
	printf("x와 y중에서 최댓값은 %d입니다.\n", max);
	printf("x와 y중에서 최소값은 %d입니다.\n", min);
	return 0;
 } 
 
 
 // 조건 연산자를 이용하면 굉장히 코드를 짧고 간결하게 만들어 줄 수 있음.
 // ~?~:~;가 조건 연산자임. 
