#include <stdio.h>
#include <string.h> //

int main(void)
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("파일 이름을 입력하세요. : ");
	scanf("%s", &fname);
	
	printf("탐색할 단어를 입력하세요. : ");
	scanf("%s", &word);
	
	if((fp = fopen(fname, "r")) == NULL) //파일 읽기 모드 //파일 이름이 없으면 다음을 실행 하도록 함. 
	{
		fprintf(stderr, "파일을 %s를 열 수 없습니다.\n", fname); 
		return 0;
	}
	
	while(fgets(buffer, 256, fp)) //파일의 열이 끝날떄 까지 반복실행. //한줄한줄 분석하는 것임. 
	{
		line++; //줄을 하나씩 늘려가며 실행. 
		if(strstr(buffer, word)) //strstr - 특정문자열 안에 특정 문자열이 있는 지 확인하는 함수.  //여기서는 buffer안에 word가 있는 지 확인하는 함수임. 
		{
			printf("라인 %d : 단어 %s이(가) 발견되었습니다.\n", line, word); 
		}
	}
	
	fclose(fp);
	return 0;
}



//한번 실행해보고 공부하는 게 좋음. //실행할 파일 이름은 example.txt이다. 
