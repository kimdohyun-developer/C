#include <stdio.h>

//반복함수를 이용해서 숫자피라미드를 출력합니다.
//반복함수 같은 경우는 for문과 while문으로 구성이 됩니다. 

int print(int a) //사용자 정의함수 - 반환형 int , 함수 print, 매개변수(int a) 
{
	int i, j;
	for(i = 0; i < a; i++) // a번 반복 
	{
		for(j =0; j<= i; j++) // i번 반복하는 데 반복할때마다 j가 1씩 늘어남. 
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}
 } 





int main(void)
{
	int a;
	scanf("%d", &a);
	print(a);
	return 0;
}
