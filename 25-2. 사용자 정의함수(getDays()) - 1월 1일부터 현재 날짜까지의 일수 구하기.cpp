#include <stdio.h>

//
int getDays(int month, int day) //반환값이 int라서 반환형에는 int가 온다. 그다음엔 함수, 매개변수가 온다 
{
	int i, sum= 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2) //이 프로그램에서는 윤년을 감안하지 않는다. 
		{
			sum += 28; 
		}
		else if(i % 2 == 0) //나머지가 0이면 한달이 30일 인것 
		{
			sum += 30;
		}
		else //다 아니면 한달이 31일 인것 
		{
			sum += 31;
		}
	}
	return sum + day;
}

int main(void)
{
	int mounth, day;
	scanf("%d %d", &mounth, &day);
	printf("1월 1일 부터 해당 날짜까지 일수는 %d일 입니다. ", getDays(mounth, day));
}
