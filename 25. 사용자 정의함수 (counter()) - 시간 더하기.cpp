#include <stdio.h>

// 전역 변수
int hour;
int minute;
int minuteAdd;

void counter() //먼저 반환형(void)이 들어가고 그다음 함수(counter), 매개변수(())가 들어간다. // 이경우 반환값이 없기 때문에 void를 쓴다. 
{
	minute += minuteAdd; // minute = minute + minuteAdd
	hour += minute / 60; // hour = hour + minute / 60
	minute %= 60; //minute = minute % 60 
	hour %= 24; //hour = hour % 24
	// 여기에 return minute;이 오는 경우에는 int counter()로 쓴다.-여기에선 반환값이 int로 정의한 minute 이기 때문에 반환형이 int이다. 
 }
 
 int main(void)
 {
 	printf("시를 입력하세요 : ");
 	scanf("%d", &hour);
	printf("분을 입력하세요 : ");
	scanf("%d", &minute);
	printf("더할 분을 입력하세요 : ");
	scanf("%d", &minuteAdd); 
	counter();
	printf("더해진 시간은 %d시 %d분입니다.\n", hour, minute);
 	return 0;
  } 
