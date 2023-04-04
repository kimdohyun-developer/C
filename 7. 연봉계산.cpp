#include <stdio.h>
#define MONTHS 12  //달이 몇개월인지 정의 

int main(void)
{
	double monthSalary = 1000.5;  //디폴드 값까지 표현- 소수점까지 나타낼 수 있게 함 
	printf("$ %.2f", monthSalary * MONTHS); //정의된 값 두개를 곱하는 것 
	return 0;
}
