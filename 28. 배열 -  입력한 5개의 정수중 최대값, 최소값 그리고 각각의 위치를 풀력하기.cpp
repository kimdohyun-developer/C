#include <stdio.h>
#include <limits.h> //INT_MAX�� ����ϱ� ���� �� 
#define number 5 //number�� 5�� ���� 

int main(void)
{
	int i, max, min, index; //index�� �������� ��ġ, ������ �ǹ���. - ��ǻ�Ϳ��� ù������  0�̴�.  
	int array[number];
	max = 0;
	index = 0;
	//array[0] ~array[4] : �� 5���� �� �� �ִ� ũ���� �迭���� 
	for(i = 0; i < number; i++) // 5�� �ݺ� 
	{
		scanf("%d", &array[i]); //array[i]�� ���� �Է� 
		if(max < array[i]) //array���� ����max������ ū�� �ִٸ� 
		{
			max = array[i]; // �� array���� max���� ���� ������ش�. 
			index = i; // index�� array[i]����i�� ���� ������ش�.- ��ǻ�Ϳ��� ������ 0���� �����̶� �츮�� ���� 1���� �����ϴ� �������� 1�� �۴�. 
		}
	}
	printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index + 1); //�츮�� ���� 1���� �����ϴ� ������ �ٲٱ� ���� index�� 1�� �� ���ش�. 
	min = INT_MAX; 
	for(i = 0; i < number; i++) // 5�� �ݺ� 
	{
		scanf("%d", &array[i]); //array[i]�� ���� �Է� 
		if(min > array[i]) //array���� ����min������ ������ �ִٸ� 
		{
			min = array[i]; // �� array���� min���� ���� ������ش�. 
			index = i; // index�� array[i]����i�� ���� ������ش�.- ��ǻ�Ϳ��� ������ 0���� �����̶� �츮�� ���� 1���� �����ϴ� �������� 1�� �۴�. 
			
		}
	}
	printf("���� ���� ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", min, index + 1); //�츮�� ���� 1���� �����ϴ� ������ �ٲٱ� ���� index�� 1�� �� ���ش�. 
	return 0; 
}

