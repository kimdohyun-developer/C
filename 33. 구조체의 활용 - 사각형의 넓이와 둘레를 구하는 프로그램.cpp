#include <stdio.h>
#include <math.h> //abs()를 제공해주는 라이브러리. 

struct point {  // point라는 구조체를 만들어준 것.
	int x;
	int y;
};

struct rect {         //앞서만든 point 구조체로 정의한 p1, p2가 포함된 rect라는 구조체를 만들어준 것 
	struct point p1;
	struct point p2; 
};

int main(void)
{
	struct rect r; //rect 구조체를 자료형으로 설정한 r이라는 변수 설정 
	int w, h, area, peri;
	
	printf("왼쪽 상단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	 
	printf("오른쪽 하단의 좌표를 입력하세요. : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w =  abs(r.p2.x - r.p1.x); //너비 //abs()는  절댓값을 구하는 함수 
	h =  abs(r.p2.y - r.p1.y); //높이 //abs()는  절댓값을 구하는 함수 
	
	area = w * h; //넓이 
	peri = 2 * w + 2 * h; //둘레의 길이 
	
	printf("사각형의 넓이는 %d이고 둘레는 %d입니다.", area, peri); 
	
	return 0;
}
