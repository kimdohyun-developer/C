#include <stdio.h>

//�� ������ ���� ���� ��ȯ�ϴ� ������ �Լ� 
void swap(int *x, int *y) // ����� �����Լ� - ��ȯ���� �����Ƿ� void, �Լ� swap, �Ű����� (int *x, int *y) 
//�������� ǥ��  ����� ���ھտ� *�� ���̴� �� (��: int *x, int *y, *x, *y) 
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
	swap(&x, &y); //x�� y�� �ڸ��� �ٲ㼭 ������ �ּҿ� �Է� 
	printf("x = %d\ny = %d\n", x, y);
	return 0;
}
