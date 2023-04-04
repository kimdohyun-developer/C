#include <stdio.h>
#define N 20 //N을 20으로 정의 

int main(void)
{
	int i, j;
	for(i = 0; i < N; i++) //for 조건문 안에서 int를 쓰면 안됨 
	{
		for(j = N - i - 1; j > 0; j--)
		{
			printf("  "); //별은 띄어쓰기 두칸만큼의 자리를 차지하기 때문에 띄어스기 두개로 피라미드의 균형을 맞춘다. 
		}
		for(j = 0; j < i; j++)
		{
			printf("★");
		}
		for(j = 0; j < i - 1; j++)
		{
			printf("★");
        }
        printf("\n"); // 줄바꿈 
	}
	return 0;
}
  
