#include <stdio.h> 
#include <limits.h> //������ �Ѱ谪�� �����ϰ� �ִ� ���̺귯�� 

int main(void)
{
	int x = INT_MAX; //�������� �ִ� 
	printf("int���� �ִ� x�� %d�Դϴ�.\n", x);
	printf("x + 1�� %d�Դϴ�.\n", x + 1); // int�� �ִ��� �ʰ��ϸ� ��� �Ǵ� ���� ��Ÿ���� ����-overflow 
	return 0;
}
