#include <stdio.h>

int main(void)
{
	int i, j;
	int gugudan[10][10]; //gugudan이라는 이름의 이차원배열을 생성 
	for(i = 1; i <= 9; i++) //9번 실행 
	{
		printf("\n[ %d단 ]\n\n", i); // 줄바꾸기 한번하고 [ %d단 ] 출력하고 줄바꾸기  두번  
		for(j = 1; j <= 9; j++) //9번 실행 
		{
			gugudan[i][j] = i * j;
			printf("%d X %d = %d\n", i, j, gugudan[i][j]);
		}
	}
	return 0;
}
