#include <stdio.h>

//두 변수의 값을 서로 교환하는 포인터 함수 
void swap(int *x, int *y) // 사용자 정의함수 - 반환값이 없으므로 void, 함수 swap, 매개변수 (int *x, int *y) 
//포인터의 표기  방법은 문자앞에 *을 붙이는 것 (예: int *x, int *y, *x, *y) 
{
	int temp; 
	temp = *x; 
	*x =*y;
	*y = temp;
}

int main(void)
{
	int x = 1;
	int y = 2;
	swap(&x, &y); //x와 y의 자리를 바꿔서 각각의 주소에 입력 
	printf("x = %d\ny = %d\n", x, y);
	return 0;
}
