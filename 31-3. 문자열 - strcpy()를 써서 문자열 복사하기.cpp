#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[15] = "I Love You";
	char result[5] = "Love";
	strcpy(result, input); //result���� input���� �����ϴ� �� 
	printf("���ڿ� ���� : %s\n", result); //%s�� string�� ����  
	return 0;
}

//���縦 �߱⶧���� result�� ����ϸ� i love you�� ���´�. 
