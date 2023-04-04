#include <stdio.h>

//재귀 함수(Recurse Function) - 자기자신을 포함하고 자기자신을 다시 사용하는 함수. 
 
void print(int count) // 사용자정의 함수- 반환값이 없으므로 void, 함수 print, 매개변수 (int count) 
{
	if(count == 0)
	{
		return; //반환값이 없음. 
	}
	else
	{
		printf("문자열을 출력합니다.\n")
		print(count - 1);
	}
 } 
 
 int main(void)
 {
 	int number;
	printf("문자열을 몇 개 출력할까요? ");
	scanf("%d", &number); //입력 
	print(number); // 사용자 정의함수 사용 
 	return 0;
 }
