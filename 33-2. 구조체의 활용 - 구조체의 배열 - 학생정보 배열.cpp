
#include <stdio.h>
#define size 5

struct student {
	int number;
	char name[20]; //한글은 영어보다 데이터 크기가 2배여서 []안 숫자도 영어보다 2배 크게 넉넉히 넣어준다.
	double grade;  
};


int main(void)
{
	struct student list[size]; //배열을 사용 
	int i;
	
	for(i = 0; i < size; i++) //5번 실행 
	{
		printf("학번을 입력하세요. : ");
		scanf("%d", &list[i].number); 
		printf("이름을 입력하세요. : ");
		scanf("%s", &list[i].name); 
		printf("학점을 입력하세요. : ");
		scanf("%lf", &list[i].grade); 
	}
	
	for(i = 0; i < size; i++) //5번 실행 
	{
		printf("학번 : %d, 이름 : %s, 학점 : %.1f\n",list[i].number, list[i].name, list[i].grade);
	}
	return 0;
 } 
