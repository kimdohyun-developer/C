#include <stdio.h>
#include <math.h> // pow(), abs() //라이브러리로 연산함수를 제공하면 더 편하게 쓸 수 있음. 

int main(void)
{
	double x = pow(2.0, 20.0); // pow는 거듭제곱을 나타낸다.  
	printf("2의 20제곱은 %.0f입니다.\n", x);
	return 0; 
}
