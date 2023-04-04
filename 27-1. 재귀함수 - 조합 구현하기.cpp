#include <stdio.h>

int nCr(int n, int r) //사용자 정의함수 -반환형 int, 함수 nCr, 매개변수(int n, int r) 
{
	if(r == 0|| r == n) // nC0 인경우와 nCn인 경우가 값이 1인것을 표현 
	{
		return 1;	
	}
	else
	{
		return nCr(n - 1, r - 1) + nCr(n - 1, r); //nCr공식을 이용해서 조합을 계산한다. 
	 } 
}

int main(void)
{
	int n, r;
	scanf("%d %d", &n, &r); //입력 
	printf("%d", nCr(n, r)); // 사용자 정의함수에 입력값을 대입한 값 출력 
	return 0;
}
