#include <stdio.h>
#include <string.h> //

int main(void)
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("���� �̸��� �Է��ϼ���. : ");
	scanf("%s", &fname);
	
	printf("Ž���� �ܾ �Է��ϼ���. : ");
	scanf("%s", &word);
	
	if((fp = fopen(fname, "r")) == NULL) //���� �б� ��� //���� �̸��� ������ ������ ���� �ϵ��� ��. 
	{
		fprintf(stderr, "������ %s�� �� �� �����ϴ�.\n", fname); 
		return 0;
	}
	
	while(fgets(buffer, 256, fp)) //������ ���� ������ ���� �ݺ�����. //�������� �м��ϴ� ����. 
	{
		line++; //���� �ϳ��� �÷����� ����. 
		if(strstr(buffer, word)) //strstr - Ư�����ڿ� �ȿ� Ư�� ���ڿ��� �ִ� �� Ȯ���ϴ� �Լ�.  //���⼭�� buffer�ȿ� word�� �ִ� �� Ȯ���ϴ� �Լ���. 
		{
			printf("���� %d : �ܾ� %s��(��) �߰ߵǾ����ϴ�.\n", line, word); 
		}
	}
	
	fclose(fp);
	return 0;
}



//�ѹ� �����غ��� �����ϴ� �� ����. //������ ���� �̸��� example.txt�̴�. 
