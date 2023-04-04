#include <stdio.h>
#define SECOND_PER_MINUTE 60  //분당 초를 60초로 정의 

int main(void)
{
	int input = 1000; // 입력값=1000 
	int minute = input / SECOND_PER_MINUTE; //입력값을 60으로 나눈 몫을 계산 
	int second = input % SECOND_PER_MINUTE; //입력값을 60으로 나누고 남은  나머지를 계산 
	printf("%d초는 %d분 %d초입니다.\n", input, minute, second); //input, minute, second순으로 출력 
	return 0;
 } 
