#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputone[5] = "A";
	char inputtwo[5] = "B";
	printf("���ڿ� �� : %d\n", strcmp(inputone, inputtwo));
	return 0;
}

//���������� ������ �����ϸ� 0
//���� ��(inputone)��  �տ� ������ -1
//������ ��(inputtwo)��  �տ� ������ 1 
