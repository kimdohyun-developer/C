#include <stdio.h>
#include <string.h> //strlen을 제공하는 라이브러리 

int main(void)
{
	char input[5] = "love";
	printf("문자열의 길이 : %d\n", strlen(input)); //strlen을 쓰면 문자열의 글자수를 쉽게 구할 수 있음. 
	return 0;
}

//31. 문자열 -하나의 문자열 안의 글자수 세기 보다 간단하게 코딩 할 수 있다. 
