#include <stdio.h>

int main(void)
{
	int x = -150;
	if(x < 0)  //if조건문을 이용한다. - x가 0보다 작다면 
	{
		x = -x; //x에 -를 붙이도록 하는 것 
	
	}
	printf("x의 절댓값은 %d입니다.\n", x);
	return 0;
}
