#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	printf("정수를 입력하시오 : ");
	scanf("%i",&x);
	
	if(x<0)

	printf("절대값은 %i 입니다",-x);
	
	else
	
	printf("절대값은 %i 입니다",x);
		 
	return 0;
}
