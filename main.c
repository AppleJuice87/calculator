#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
float divide(int num1, int num2);

int main() {
	// test cases
}

// 뼈대 코드
printf("input");
scanf("%d %d", &num1 ,&num2);

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return (num1 * num2);
}

float divide(int num1, int num2) {
	return ((float) num1 / num2);
}