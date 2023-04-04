#include <stdio.h>

int main(void)
{
	char input[1001]; // char형태가 입력가능한  배열 생성. 
	gets(input); //enter키를 누를 때까지 배열에 문자가 들어가도록 함. 
	int count = 0;
	while(input[count] != '\0') // NULL값을 만나기 전까지 반복한다. //'\0'는 NULL을 뜻함. 
	{
		count++;
	}
	printf("입력한 문자열의 길이(글자수)는 %d입니다.\n", count);
	printf("입력한 문자열 : %s", input); //%s는 string의 약자- 하나의 문자열을 의미하는 c언어의 형식지정자. 
	return 0;
}

//input뒤에 []에 들어갈 숫자는 들어갈 문자열의 크기를 고려하여 넣는다. 
//한글이나 중국어는 영어의 2배 크기의 byte를 쓰므로 들어갈 숫자를 더 크게 해야 함.
//한글이나 중국어(16byte)는 유니코드를 사용한다.-영어는 아스키코드(8byte)를 사용한다. 
