#include <stdio.h>
#include <math.h> //abs()�� �������ִ� ���̺귯��. 

struct point {  // point��� ����ü�� ������� ��.
	int x;
	int y;
};

struct rect {         //�ռ����� point ����ü�� ������ p1, p2�� ���Ե� rect��� ����ü�� ������� �� 
	struct point p1;
	struct point p2; 
};

int main(void)
{
	struct rect r; //rect ����ü�� �ڷ������� ������ r�̶�� ���� ���� 
	int w, h, area, peri;
	
	printf("���� ����� ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	 
	printf("������ �ϴ��� ��ǥ�� �Է��ϼ���. : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w =  abs(r.p2.x - r.p1.x); //�ʺ� //abs()��  ������ ���ϴ� �Լ� 
	h =  abs(r.p2.y - r.p1.y); //���� //abs()��  ������ ���ϴ� �Լ� 
	
	area = w * h; //���� 
	peri = 2 * w + 2 * h; //�ѷ��� ���� 
	
	printf("�簢���� ���̴� %d�̰� �ѷ��� %d�Դϴ�.", area, peri); 
	
	return 0;
}
