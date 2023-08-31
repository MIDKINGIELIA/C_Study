#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void){
	char ch;
	//ch = getchar();
	/*putchar(ch);
	*/
	while ((ch = getchar()) != '\n'){
		for (int i = '0'; i < '10'; i++) { /*'0'과 '9'는 아스키 코드라서 예를들면 '0'이 65면 '9'는 74이므로 저논리가 */
			if (ch == i) ch = '*';		    /*가능하다. 좀더 간단하게 만들자면 if(ch >='0' && ch<='9') 로도 가능하다.*/
				putchar(ch);
		}
		//if (ch == 'f' || 'F')
		//	putchar('x');
		//else
		//	putchar(ch);
	}
	return 0;
}

