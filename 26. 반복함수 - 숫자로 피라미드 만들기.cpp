#include <stdio.h>

//�ݺ��Լ��� �̿��ؼ� �����Ƕ�̵带 ����մϴ�.
//�ݺ��Լ� ���� ���� for���� while������ ������ �˴ϴ�. 

int print(int a) //����� �����Լ� - ��ȯ�� int , �Լ� print, �Ű�����(int a) 
{
	int i, j;
	for(i = 0; i < a; i++) // a�� �ݺ� 
	{
		for(j =0; j<= i; j++) // i�� �ݺ��ϴ� �� �ݺ��Ҷ����� j�� 1�� �þ. 
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}
 } 





int main(void)
{
	int a;
	scanf("%d", &a);
	print(a);
	return 0;
}
