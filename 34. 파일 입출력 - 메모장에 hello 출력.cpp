#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("output.txt", "w"); //파일을 열어서 쓰는 것. 
	//w = 쓰기 모드(write), r = 읽기 모드(read)
	if(fp == NULL) //해당 파일을 열지 못하면. 
	{
		printf("파일 열기에 실패했습니다.\n");
	}
	else
	{
		printf("파일열기에 성공했습니다.\n");
	}
	fputc('H',fp); //fputc = char형을 파일에 출력. 
	fputc('E',fp);
	fputc('L',fp);
	fputc('L',fp);
	fputc('O',fp);
	fclose(fp);  //파일을 열었으니 닫아줘야함. 
	return 0;
}

//파일은 코딩 파일이 있는 곳에 생김. 
//fp는 우리가 불러오는 파일에 대한 포인터이다. 
