#include <stdio.h>

int nCr(int n, int r) //����� �����Լ� -��ȯ�� int, �Լ� nCr, �Ű�����(int n, int r) 
{
	if(r == 0|| r == n) // nC0 �ΰ��� nCn�� ��찡 ���� 1�ΰ��� ǥ�� 
	{
		return 1;	
	}
	else
	{
		return nCr(n - 1, r - 1) + nCr(n - 1, r); //nCr������ �̿��ؼ� ������ ����Ѵ�. 
	 } 
}

int main(void)
{
	int n, r;
	scanf("%d %d", &n, &r); //�Է� 
	printf("%d", nCr(n, r)); // ����� �����Լ��� �Է°��� ������ �� ��� 
	return 0;
}
