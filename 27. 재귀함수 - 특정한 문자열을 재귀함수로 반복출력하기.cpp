#include <stdio.h>

//��� �Լ�(Recurse Function) - �ڱ��ڽ��� �����ϰ� �ڱ��ڽ��� �ٽ� ����ϴ� �Լ�. 
 
void print(int count) // ��������� �Լ�- ��ȯ���� �����Ƿ� void, �Լ� print, �Ű����� (int count) 
{
	if(count == 0)
	{
		return; //��ȯ���� ����. 
	}
	else
	{
		printf("���ڿ��� ����մϴ�.\n")
		print(count - 1);
	}
 } 
 
 int main(void)
 {
 	int number;
	printf("���ڿ��� �� �� ����ұ��? ");
	scanf("%d", &number); //�Է� 
	print(number); // ����� �����Լ� ��� 
 	return 0;
 }
