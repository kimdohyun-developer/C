#include <stdio.h> 
#include <stdlib.h>

struct student {      //구조체를 만드는 것임. - 여러가지 자료를 하나로 묶어서 클래스를 만드는 것. 
	int number;
	char name[10];
	double grade;   //학점을 소수점까지 나타낼 수 있도록 함. 
};


int main(void)
{
	struct student s; //struct student가 int,char, double처럼 하나의 자료형이 된거임. - s는 변수임.
	
	printf("학번을 입력하세요. : ");
	scanf("%d", &s.number);
	printf("이름을 입력하세요. : ");
	scanf("%s", &s.name); //char는 %s로 입력받고 출력한다. 
	printf("학점을 입력하세요. : ");
	scanf("%lf", &s.grade); //%lf임 - 엘 에프 //%1f와 헷갈릴 수도 있어서 적음. 
	
	printf("학번 : %d\n",  s.number);
	printf("이름 : %s\n", s.name); //char는 %s로 입력받고 출력한다.
	printf("학점 : %.1f\n", s.grade); //소수점 한자리 까지 나타냄. 
	return 0;
}
