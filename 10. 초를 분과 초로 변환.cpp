#include <stdio.h>
#define SECOND_PER_MINUTE 60  //�д� �ʸ� 60�ʷ� ���� 

int main(void)
{
	int input = 1000; // �Է°�=1000 
	int minute = input / SECOND_PER_MINUTE; //�Է°��� 60���� ���� ���� ��� 
	int second = input % SECOND_PER_MINUTE; //�Է°��� 60���� ������ ����  �������� ��� 
	printf("%d�ʴ� %d�� %d���Դϴ�.\n", input, minute, second); //input, minute, second������ ��� 
	return 0;
 } 
