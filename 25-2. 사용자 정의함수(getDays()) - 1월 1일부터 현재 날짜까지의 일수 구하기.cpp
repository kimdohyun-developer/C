#include <stdio.h>

//
int getDays(int month, int day) //��ȯ���� int�� ��ȯ������ int�� �´�. �״����� �Լ�, �Ű������� �´� 
{
	int i, sum= 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2) //�� ���α׷������� ������ �������� �ʴ´�. 
		{
			sum += 28; 
		}
		else if(i % 2 == 0) //�������� 0�̸� �Ѵ��� 30�� �ΰ� 
		{
			sum += 30;
		}
		else //�� �ƴϸ� �Ѵ��� 31�� �ΰ� 
		{
			sum += 31;
		}
	}
	return sum + day;
}

int main(void)
{
	int mounth, day;
	scanf("%d %d", &mounth, &day);
	printf("1�� 1�� ���� �ش� ��¥���� �ϼ��� %d�� �Դϴ�. ", getDays(mounth, day));
}
