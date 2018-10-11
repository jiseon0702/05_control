#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char x;
	printf("input a char : ");
	scanf("%c",&x);
	
	if('A'<= x&&x <='Z')

	printf("이 문자는 대문자입니다");
	
	else if('a'<= x&&x <= 'z') 
	printf ("이 문자는 소문자입니다");
	
	else if('0'<= x &&x <= '9')
	
	
	printf("이 문자는 숫자입니다");
	
	else
	
	printf("이 문자는 기타 입니다");
	
		 
	return 0;
}
