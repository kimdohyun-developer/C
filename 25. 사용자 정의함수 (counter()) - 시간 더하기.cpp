#include <stdio.h>

// ���� ����
int hour;
int minute;
int minuteAdd;

void counter() //���� ��ȯ��(void)�� ���� �״��� �Լ�(counter), �Ű�����(())�� ����. // �̰�� ��ȯ���� ���� ������ void�� ����. 
{
	minute += minuteAdd; // minute = minute + minuteAdd
	hour += minute / 60; // hour = hour + minute / 60
	minute %= 60; //minute = minute % 60 
	hour %= 24; //hour = hour % 24
	// ���⿡ return minute;�� ���� ��쿡�� int counter()�� ����.-���⿡�� ��ȯ���� int�� ������ minute �̱� ������ ��ȯ���� int�̴�. 
 }
 
 int main(void)
 {
 	printf("�ø� �Է��ϼ��� : ");
 	scanf("%d", &hour);
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &minute);
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &minuteAdd); 
	counter();
	printf("������ �ð��� %d�� %d���Դϴ�.\n", hour, minute);
 	return 0;
  } 
