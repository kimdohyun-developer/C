#include <stdio.h>

struct point{
	int x;
	int y;
}; 

void comparepoint (struct point p1, struct point p2) //반환값이 없으므로 반환형 void, 함수 comparepoint, 매개변수 (struct point p1, struct point p2) 
{
	if((p1.x == p2.x) && (p1.y == p2.y))
	{
		printf("p1과p2가 같습니다.");
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
	    printf("p1과 p2가 같습니다.");
    }
    */
    //구조체 그대로는 비교할 수 없으므로 위의 코딩은 올바르지 않다.
	//올바른 코딩은 아래와 같다. 
	
	/*
	if((p1.x == p2.x) && (p1.y == p2.y))
	{
		printf("p1과p2가 같습니다.");
	}
	*/
	//여기서 더 편리하게 하기 위해 사용자 정의 함수를 이용하면 편하다. 
	
	comparepoint(p1, p2); //사용자 정의함수 이용 
	return 0;
}
