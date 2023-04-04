#include <stdio.h>
#include <limits.h> //INT_MAX를 사용하기 위한 것 
#define number 5 //number를 5로 정의 

int main(void)
{
	int i, max, min, index; //index는 데이터의 위치, 순서를 의미함. - 컴퓨터에서 첫순서는  0이다.  
	int array[number];
	max = 0;
	index = 0;
	//array[0] ~array[4] : 총 5개가 들어갈 수 있는 크기의 배열선언 
	for(i = 0; i < number; i++) // 5번 반복 
	{
		scanf("%d", &array[i]); //array[i]에 값을 입력 
		if(max < array[i]) //array값중 현재max값보다 큰게 있다면 
		{
			max = array[i]; // 그 array값을 max값과 같게 만들어준다. 
			index = i; // index는 array[i]에서i와 같게 만들어준다.- 컴퓨터에서 순서는 0부터 시작이라 우리가 쓰는 1부터 시작하는 순서보다 1씩 작다. 
		}
	}
	printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index + 1); //우리가 쓰는 1부터 시작하는 순서로 바꾸기 위해 index에 1을 더 해준다. 
	min = INT_MAX; 
	for(i = 0; i < number; i++) // 5번 반복 
	{
		scanf("%d", &array[i]); //array[i]에 값을 입력 
		if(min > array[i]) //array값중 현재min값보다 작은게 있다면 
		{
			min = array[i]; // 그 array값을 min값과 같게 만들어준다. 
			index = i; // index는 array[i]에서i와 같게 만들어준다.- 컴퓨터에서 순서는 0부터 시작이라 우리가 쓰는 1부터 시작하는 순서보다 1씩 작다. 
			
		}
	}
	printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index + 1); //우리가 쓰는 1부터 시작하는 순서로 바꾸기 위해 index에 1을 더 해준다. 
	return 0; 
}

