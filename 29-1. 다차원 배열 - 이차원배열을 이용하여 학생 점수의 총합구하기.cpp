#include <stdio.h>

int main(void)
{
	int score[5][2]; //2���� �迭 ���� 
	int total[2] = { 0, }; //1���� �迭�� �Ҵ��ҋ� ��� �����Ϳ� 0�� �־��ְڴٴ� �ǹ�-���� ��Ȯ���� �� �𸣰���. 
	int i;
	
	for( i = 0; i < 5; i++) //5�� ���� 
	{
		printf("%d�� �л��� ����, ���� ���� : ", i + 1);
		scanf("%d %d", &score[i][0], &score[i][1]); //�Է� 
	}
	
	for( i = 0; i < 5; i++) //5�� ���� 
	{
		total[0] += score[i][0]; //���� ������ ���� ��� 
		total[1] += score[i][1]; //���� ������ ���� ��� 
	}
	
	printf("\n\n5���� ���� ���� �հ� : %d\n", total[0]);
	printf("5���� ���� ���� �հ� : %d\n", total[1]);
	return 0;
}
