#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi //pointer integer
	pi = (int *)malloc(sizeof(int)); //malloc = �޸𸮸� �Ҵ��ض�.
	if(pi == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����߽�����.\n");
		exit(1);
	}
	
	*pi = 100;
	printf("%d\n", *pi);
	//���� �޸� ����� ���Ŀ��� ������ �ش� �޸𸮸� ��ȯ�մϴ�.
	free(pi); //���� �Ҵ��� �޸𸮸� �Ҵ� �����Ѵٴ� ��. 
	return 0; 
}
