#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r"); //읽기모드 //파일을 열어서 읽는 것. 
	
	if(fp == NULL)
	{
		printf("파일 열기에 실패했습니다.\n");
	} 
	else
	{
	 	printf("파일 열기에 성공했습니다.\n");
	}
	
	while((c = fgetc(fp)) != EOF) //파일의 내용이 끝날때 까지 반복하는 것. //(c = fgetc(fp))는 fp안의 문자를 c에 넣는 것. //EOF는 end of file이다.- 파일의 끝   
	{
	    putchar(c);	//c에 있는 문자를 출력. 
	} 
	
	fclose(fp); //파일을 열어줬으니 파일 닫기 
	return 0;
 } 
 
 //읽는 것이기 때문에 이 프로그램이 있는 파일에 읽고자 하는 파일이 존재해야 읽을 수 있다 .
