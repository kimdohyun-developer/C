#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r"); //�б��� //������ ��� �д� ��. 
	
	if(fp == NULL)
	{
		printf("���� ���⿡ �����߽��ϴ�.\n");
	} 
	else
	{
	 	printf("���� ���⿡ �����߽��ϴ�.\n");
	}
	
	while((c = fgetc(fp)) != EOF) //������ ������ ������ ���� �ݺ��ϴ� ��. //(c = fgetc(fp))�� fp���� ���ڸ� c�� �ִ� ��. //EOF�� end of file�̴�.- ������ ��   
	{
	    putchar(c);	//c�� �ִ� ���ڸ� ���. 
	} 
	
	fclose(fp); //������ ���������� ���� �ݱ� 
	return 0;
 } 
 
 //�д� ���̱� ������ �� ���α׷��� �ִ� ���Ͽ� �а��� �ϴ� ������ �����ؾ� ���� �� �ִ� .
