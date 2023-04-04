#include <stdio.h> 
#include <limits.h> //변수의 한계값을 포함하고 있는 라이브러리 

int main(void)
{
	int x = INT_MAX; //정수값의 최댓값 
	printf("int형의 최댓값 x는 %d입니다.\n", x);
	printf("x + 1은 %d입니다.\n", x + 1); // int의 최댓값을 초과하면 어떻게 되는 가를 나타내는 것임-overflow 
	return 0;
}
