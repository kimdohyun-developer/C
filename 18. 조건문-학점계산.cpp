#include <stdio.h>

int main(void)
{
	int score = 85; //������ 85���� �ǹ��Ѵ�.
	if(score >= 90) //���ǹ� if 
	{
		printf("����� ������ A�Դϴ�.\n");
	 } 
	 else if(score >= 80) // ���� ���ǰ� �ٸ� �� �ٸ� ������ �ɾ��ذ���. 
	 {
	 	printf("����� ������ B�Դϴ�.\n");
	 }
	 else if(score >= 70)
	 {
	 	printf("����� ������ C�Դϴ�.\n");
	 }
	 else //���� ���ǵ��� �ش������ ���� ���, �� �ƴ� ����� ������ �ǰ���. 
	 {
	 	printf("����� ������ F�Դϴ�.\n");
	 }
	 return 0; 
}
