#include <stdio.h>

int main(void)
{
	int x, i;
	printf("정수를 입력하세요 : ");
	scanf("%d", &x); //입력 
	for(i = 1; i <= 9; i++) //i의 초기값을 1로 설정하고 총 9번 반복하는 데 반복할때 마다 i값이 1씩증가한다. 
	{
		printf("%d X %d = %d\n", x, i, x * i);
	 } 
	 return 0;
}
