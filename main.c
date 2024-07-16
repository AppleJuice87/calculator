/****************** 
 * new
 * v1.0
 * 2024-07-15 
************/

// some-feature 변경사항입니다.
// some-feature 두 번째 변경사항입니다.

#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
float divide(int num1, int num2);
//1
int main() {
	// 충돌 유도를 위해 아래 default 문장 뒤에 아무 단어나 추가해 주세요.
	printf("여기 default 문장이 있습니다. 이 앞 에러있다!!!!!");
}

// 뼈대 코드

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}
//2
int multiply(int num1, int num2) {
    return (num1 * num2);
}

float divide(int num1, int num2) {
	return ((float) num1 / num2);
}