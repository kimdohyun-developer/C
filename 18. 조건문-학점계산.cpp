#include <stdio.h>

int main(void)
{
	int score = 85; //학점이 85임을 의미한다.
	if(score >= 90) //조건문 if 
	{
		printf("당신의 학점은 A입니다.\n");
	 } 
	 else if(score >= 80) // 위의 조건과 다른 또 다른 조건을 걸어준거임. 
	 {
	 	printf("당신의 학점은 B입니다.\n");
	 }
	 else if(score >= 70)
	 {
	 	printf("당신의 학점은 C입니다.\n");
	 }
	 else //위의 조건들이 해당사항이 없을 경우, 다 아닌 경우의 조건을 건것임. 
	 {
	 	printf("당신의 학점은 F입니다.\n");
	 }
	 return 0; 
}
