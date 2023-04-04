#include <stdio.h>
#include <math.h> //sqrt()�� �����ϴ� �����Լ� ���̺귯��. 

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2; //p1, p2�� struct point ����ü�� �ڷ������� ���� 
	int xDiff, yDiff;
	double distance; //�Ҽ������� ������ ��. 
	
	printf("1�� ���� ��ǥ�� �Է��ϼ���. : ");
	scanf("%d %d", &p1.x, &p1.y); //p1(struct point ����ü)�ȿ� �ִ� x, y�ּҿ� ���� �Է� 
	
	printf("2�� ���� ��ǥ�� �Է��ϼ���. : ");
	scanf("%d %d", &p2.x, &p2.y); //p2(struct point ����ü)�ȿ� �ִ� x, y�ּҿ� ���� �Է�
	
	xDiff = p1.x - p2.x; //�Է¹��� ������ x���� ���� ����. 
	yDiff = p1.y - p2.y; //�Է¹��� ������ y���� ���� ����. 
	
	distance = sqrt(xDiff * xDiff +  yDiff * yDiff ); //sqrt()�� ������ �Լ��̴�. //2���� ��ǥ��(��ǥ���)���� �Ÿ��� ���ϴ� ������ �̿� 
	printf("�� �������� �Ÿ��� %f�Դϴ�.", distance);
	return 0;
 } 
