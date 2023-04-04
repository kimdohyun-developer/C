#include <stdio.h>

int main(void)
{
	int score[5][2]; //2차원 배열 생성 
	int total[2] = { 0, }; //1차원 배열을 할당할떄 모든 데이터에 0을 넣어주겠다는 의미-나도 정확히는 잘 모르겠음. 
	int i;
	
	for( i = 0; i < 5; i++) //5번 실행 
	{
		printf("%d번 학생의 수학, 영어 점수 : ", i + 1);
		scanf("%d %d", &score[i][0], &score[i][1]); //입력 
	}
	
	for( i = 0; i < 5; i++) //5번 실행 
	{
		total[0] += score[i][0]; //수학 점수의 총합 계산 
		total[1] += score[i][1]; //영어 점수의 총합 계산 
	}
	
	printf("\n\n5명의 수학 점수 합계 : %d\n", total[0]);
	printf("5명의 영어 점수 합계 : %d\n", total[1]);
	return 0;
}
