#include <stdio.h>

int main(void)
{
	char o; //자료형을 char로 정의 
	int x, y; //자료형을 정수로 정의 
	while(1) //반복구문 - 무한 //for(;;)과 같음. 
	{
		printf("수식을 입력하세요.");
		scanf("%d %c %d", &x, &o, &y); //각각의 값을 입력할 수 있도록 해줌. 
		if(o == '+') // "기호가 들어갈 o에 +가 오면" 이라는 조건을 설정 
		{
			printf("%d %c %d = %d\n", x, o, y, x + y); //출력에 연산자를 추가하여 코딩의 길이를 줄일 수 있다. 
		 } 
		 else if(o == '-') //"기호가 들어갈 o에  -가 오면" 이라는 조건을 설정 
		 {
		 	printf("%d %c %d = %d\n", x, o, y, x - y);
		 }
		 else if(o == '*') //"기호가 들어갈 o에  *가 오면" 이라는 조건을 설정 
		 {
		 	printf("%d %c %d = %d\n", x, o, y, x * y);
		 }
		  else if(o == '/') //"기호가 들어갈 o에  /가 오면" 이라는 조건을 설정 
		 {
		 	printf("%d %c %d = %d\n", x, o, y, x / y); // 몫을 계산함 
		 }
		 else if(o == '%') //"기호가 들어갈 o에  %가 오면" 이라는 조건을 설정 
		 {
		 	printf("%d %c %d = %d\n", x, o, y, x % y); // 나머지를 계산함 
		 }
		 else
		 {
		 	printf("입력이 잘못되었습니다.\n");
		 } 
		 getchar(); //단 한개의 문자를 입력받겠다는 것 - "입력이 잘못되었습니까" 와 같이 출력되는 것을 막는 것 //enter키처럼 공백문자를 처리할 수 있음. 
		 printf("프로그램을 종료하시겠습니까? (y/n) ");
		 scanf("%c", &o); // 입력 
		 if(o == 'n' || o == 'N')
		 {
		 	continue; // 반복을 계속하는 것 
		 }
		 else if( o == 'y' || o =='Y')
		 {
		 	break; //반복을 그만 두는 것 
		 }
	}
	return 0; 
}
