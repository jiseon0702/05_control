#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=0;
	char str[100];
	char c;
	
	
	//string
	
	printf("input a char  : ");
	
	
	while( (c=getchar() )!= '\n')
	{
		if('0'<= c && c <= '9')
		{
		num++;
		}
	}
	
	printf("���ڴ� %i ��  �ֽ��ϴ�",num);
	
	
	
		 
	return 0;
}
