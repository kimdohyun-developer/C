#include <stdio.h>

int main(void)
{
	int i = 10;
	int *p;
	p = &i; //p�� i�� �ּҷ� �������. 
	printf("i = %d\n", i);
	*p = 20;  
	printf("i = %d\n", i); //p�� i�� �ּ��̹Ƿ� *p�� i�� �ȴٴ� ���� �� �� ����.
	return 0;
}

//x = *y - x�� *y��� 
//&x = y - x�� �ּҴ� y����.  
