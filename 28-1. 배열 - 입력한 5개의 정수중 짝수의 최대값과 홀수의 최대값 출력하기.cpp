#include <stdio.h>
#define number 5

int main(void)
{
	int array[number];
	int i, oddmax, evenmax;
	oddmax = 0;
	evenmax = 0;
	for(i = 0; i < number; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] %  2 == 0)
		{
			if(evenmax < array[i])
			{
				evenmax = array[i];
			}
		}
		else
		{
			if(oddmax < array[i])
			{
				oddmax = array[i];
			}
		}	
	}
	printf("짝수의 최대값은 %d이고 홀수의 최대값은 %d입니다.", evenmax, oddmax);
	return 0;
}
