#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[15] = "I Love You";
	char result[5] = "Love";
	strcpy(result, input); //result값에 input값을 복사하는 것 
	printf("문자열 복사 : %s\n", result); //%s는 string의 약자  
	return 0;
}

//복사를 했기때문에 result를 출력하면 i love you가 나온다. 
