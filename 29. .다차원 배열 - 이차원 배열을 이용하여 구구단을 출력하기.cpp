#include <stdio.h>

int main(void)
{
	int i, j;
	int gugudan[10][10]; //gugudan�̶�� �̸��� �������迭�� ���� 
	for(i = 1; i <= 9; i++) //9�� ���� 
	{
		printf("\n[ %d�� ]\n\n", i); // �ٹٲٱ� �ѹ��ϰ� [ %d�� ] ����ϰ� �ٹٲٱ�  �ι�  
		for(j = 1; j <= 9; j++) //9�� ���� 
		{
			gugudan[i][j] = i * j;
			printf("%d X %d = %d\n", i, j, gugudan[i][j]);
		}
	}
	return 0;
}
