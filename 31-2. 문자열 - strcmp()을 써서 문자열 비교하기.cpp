#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputone[5] = "A";
	char inputtwo[5] = "B";
	printf("문자열 비교 : %d\n", strcmp(inputone, inputtwo));
	return 0;
}

//사전적으로 순서가 동일하면 0
//왼쪽 것(inputone)이  앞에 있으면 -1
//오른쪽 것(inputtwo)이  앞에 있으면 1 
