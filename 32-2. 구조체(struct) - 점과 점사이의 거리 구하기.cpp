#include <stdio.h>
#include <math.h> //sqrt()를 제공하는 수학함수 라이브러리. 

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2; //p1, p2를 struct point 구조체의 자료형으로 정의 
	int xDiff, yDiff;
	double distance; //소수점까지 나오게 함. 
	
	printf("1번 점의 좌표를 입력하세요. : ");
	scanf("%d %d", &p1.x, &p1.y); //p1(struct point 구조체)안에 있는 x, y주소에 값을 입력 
	
	printf("2번 점의 좌표를 입력하세요. : ");
	scanf("%d %d", &p2.x, &p2.y); //p2(struct point 구조체)안에 있는 x, y주소에 값을 입력
	
	xDiff = p1.x - p2.x; //입력받은 각각의 x값의 차를 구함. 
	yDiff = p1.y - p2.y; //입력받은 각각의 y값의 차를 구함. 
	
	distance = sqrt(xDiff * xDiff +  yDiff * yDiff ); //sqrt()는 제곱근 함수이다. //2공간 좌표계(좌표평면)에서 거리를 구하는 공식을 이용 
	printf("두 점사이의 거리는 %f입니다.", distance);
	return 0;
 } 
