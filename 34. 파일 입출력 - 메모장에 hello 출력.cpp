#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("output.txt", "w"); //������ ��� ���� ��. 
	//w = ���� ���(write), r = �б� ���(read)
	if(fp == NULL) //�ش� ������ ���� ���ϸ�. 
	{
		printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	else
	{
		printf("���Ͽ��⿡ �����߽��ϴ�.\n");
	}
	fputc('H',fp); //fputc = char���� ���Ͽ� ���. 
	fputc('E',fp);
	fputc('L',fp);
	fputc('L',fp);
	fputc('O',fp);
	fclose(fp);  //������ �������� �ݾ������. 
	return 0;
}

//������ �ڵ� ������ �ִ� ���� ����. 
//fp�� �츮�� �ҷ����� ���Ͽ� ���� �������̴�. 
