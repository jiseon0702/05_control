#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char x;
	printf("input a char : ");
	scanf("%c",&x);
	
	if('A'<= x&&x <='Z')

	printf("�� ���ڴ� �빮���Դϴ�");
	
	else if('a'<= x&&x <= 'z') 
	printf ("�� ���ڴ� �ҹ����Դϴ�");
	
	else if('0'<= x &&x <= '9')
	
	
	printf("�� ���ڴ� �����Դϴ�");
	
	else
	
	printf("�� ���ڴ� ��Ÿ �Դϴ�");
	
		 
	return 0;
}
