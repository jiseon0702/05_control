#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=0;
	int answer=22;
	int c;
	
	do
	{
		printf("Guess a number : ");
		scanf("%i",&c);
		num++;
		
		if ( c< answer)
		{
			printf("low!\n");
		}
		
		else if (c > answer)
		{
			printf("high!\n");
		}
		
		else
		{
			printf("���� !!\n");
			
		}
		
		}while  (c!=answer);
		
		
	printf("�õ��� Ƚ���� %i�̴�",num);
	
	return 0;
}
