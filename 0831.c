#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void){
	char ch;
	//ch = getchar();
	/*putchar(ch);
	*/
	while ((ch = getchar()) != '\n'){
		for (int i = '0'; i < '10'; i++) { /*'0'�� '9'�� �ƽ�Ű �ڵ�� ������� '0'�� 65�� '9'�� 74�̹Ƿ� ������ */
			if (ch == i) ch = '*';		    /*�����ϴ�. ���� �����ϰ� �����ڸ� if(ch >='0' && ch<='9') �ε� �����ϴ�.*/
				putchar(ch);
		}
		//if (ch == 'f' || 'F')
		//	putchar('x');
		//else
		//	putchar(ch);
	}
	return 0;
}

