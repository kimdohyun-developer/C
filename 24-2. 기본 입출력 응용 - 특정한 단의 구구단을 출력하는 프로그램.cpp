#include <stdio.h>

int main(void)
{
	int x, i;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &x); //�Է� 
	for(i = 1; i <= 9; i++) //i�� �ʱⰪ�� 1�� �����ϰ� �� 9�� �ݺ��ϴ� �� �ݺ��Ҷ� ���� i���� 1�������Ѵ�. 
	{
		printf("%d X %d = %d\n", x, i, x * i);
	 } 
	 return 0;
}
