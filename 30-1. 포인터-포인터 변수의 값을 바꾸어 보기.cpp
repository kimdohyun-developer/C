#include <stdio.h>

int main(void)
{
	int i = 10;
	int *p;
	p = &i; //p를 i의 주소로 만들어줌. 
	printf("i = %d\n", i);
	*p = 20;  
	printf("i = %d\n", i); //p가 i의 주소이므로 *p는 i가 된다는 것을 알 수 있음.
	return 0;
}

//x = *y - x가 *y라면 
//&x = y - x의 주소는 y값임.  
