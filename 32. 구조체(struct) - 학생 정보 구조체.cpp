#include <stdio.h>
#include <string.h> //strcpy()를 제공하는 라이브러리 

struct student {      //구조체를 만드는 것임. - 여러가지 자료를 하나로 묶어서 클래스를 만드는 것. 
	int number;
	char name[10];
	double grade;   //학점을 소수점까지 나타낼 수 있도록 함. 
};


int main(void)
{
	struct student s; //struct student가 int,char, double처럼 하나의 자료형이 된거임. - s는 변수임. 
	s.number = 20150001; //s(struct student 구조체) 안에 있는 number에 20150001을 넣는 것. 
	strcpy(s.name, "홍길동");  //s(struct student 구조체) 안에 있는 name[배열]에  "홍길동"을 복사.  
	s.grade = 4.5; //s(struct student 구조체) 안에 있는 grade에 4.5를 넣는 것. 
	printf("학번 : %d\n",  s.number);
	printf("이름 : %d\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	return 0;
}
