#include <stdio.h>

int main(void)
{
	int x = -150;
	if(x < 0)  //if���ǹ��� �̿��Ѵ�. - x�� 0���� �۴ٸ� 
	{
		x = -x; //x�� -�� ���̵��� �ϴ� �� 
	
	}
	printf("x�� ������ %d�Դϴ�.\n", x);
	return 0;
}
