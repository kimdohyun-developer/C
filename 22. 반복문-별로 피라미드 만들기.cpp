#include <stdio.h>
#define N 20 //N�� 20���� ���� 

int main(void)
{
	int i, j;
	for(i = 0; i < N; i++) //for ���ǹ� �ȿ��� int�� ���� �ȵ� 
	{
		for(j = N - i - 1; j > 0; j--)
		{
			printf("  "); //���� ���� ��ĭ��ŭ�� �ڸ��� �����ϱ� ������ ���� �ΰ��� �Ƕ�̵��� ������ �����. 
		}
		for(j = 0; j < i; j++)
		{
			printf("��");
		}
		for(j = 0; j < i - 1; j++)
		{
			printf("��");
        }
        printf("\n"); // �ٹٲ� 
	}
	return 0;
}
  
