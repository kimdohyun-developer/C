#include <stdio.h>

struct point{
	int x;
	int y;
}; 

void comparepoint (struct point p1, struct point p2) //��ȯ���� �����Ƿ� ��ȯ�� void, �Լ� comparepoint, �Ű����� (struct point p1, struct point p2) 
{
	if((p1.x == p2.x) && (p1.y == p2.y))
	{
		printf("p1��p2�� �����ϴ�.");
	}
}

int main(void)
{
	struct point p1;
	struct point p2;
	
	p1.x = 30;
	p1.y = 10;
	
	p2.x = 30;
	p2.y = 10;
	
	/*
	if(p1 == p2)
	{
	    printf("p1�� p2�� �����ϴ�.");
    }
    */
    //����ü �״�δ� ���� �� �����Ƿ� ���� �ڵ��� �ùٸ��� �ʴ�.
	//�ùٸ� �ڵ��� �Ʒ��� ����. 
	
	/*
	if((p1.x == p2.x) && (p1.y == p2.y))
	{
		printf("p1��p2�� �����ϴ�.");
	}
	*/
	//���⼭ �� ���ϰ� �ϱ� ���� ����� ���� �Լ��� �̿��ϸ� ���ϴ�. 
	
	comparepoint(p1, p2); //����� �����Լ� �̿� 
	return 0;
}
