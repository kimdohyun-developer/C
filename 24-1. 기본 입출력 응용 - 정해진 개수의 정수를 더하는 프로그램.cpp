#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	printf("������ ������ �Է��ϼ��� : ");
	scanf("%d", &number); //�Է� 
	for(i = 0; i < number; i++) //i��  �ʱⰪ�� 0�̰� number����ŭ �ݺ��Ѵ�.
	{
		printf("������ ���� �Է��ϼ��� : ");
		scanf("%d", &x);
		sum += x; // sum = sum + x //���տ����� 
	 } 
	 printf("��ü ������ ���� %d�Դϴ�.", sum);
	 return 0;
 } 
