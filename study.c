#include <stdio.h>

// 함수 선언
int add(int num1, int num2);
int minus(int num1, int num2);
int multi(int num1, int num2);
int div(int num1, int num2);

int main(void) {
    // 변수 선언
    int num1, num2, num1First, num2First, num1Last, num2Last, result1, result2;
    char check, operator;

    // 반복문
    for (;;) {
        // 첫번째와 두번째 숫자를 입력
        printf("첫번째 숫자를 입력하세요.\n");
        scanf("%d", &num1);
        printf("두번째 숫자를 입력하세요.\n");
        scanf("%d", &num2);

        // 입력한 숫자중 하나라도 10 이하일 경우 종료
        if (num1 <= 10 || num2 <= 10) {
            printf("10 미만의 숫자를 입력하여 프로그램이 종료되었습니다.\n");
            return 0;
        }

        // first: 십의자리(입력값을 10으로 나눈 몫), Last: 일의 자리(입력값을 10으로 나눈 후 나머지 값)
        num1First = num1 / 10;
        num2First = num2 / 10;
        num1Last = num1 % 10;
        num2Last = num2 % 10;

        // 계산하고자 하는 연산자 입력
        printf("사용할 연산자를 입력하세요.\n");
        scanf(" %c", &operator);

        // 연산자에 따라 함수 호출
        if (operator == '+') {
            result1 = add(num1First, num2First);
            result2 = add(num1Last, num2Last);
        } else if (operator == '-') {
            result1 = minus(num1First, num2First);
            result2 = minus(num1Last, num2Last);
        } else if (operator == '*') {
            result1 = multi(num1First, num2First);
            result2 = multi(num1Last, num2Last);
        } else if (operator == '/') {
            result1 = div(num1First, num2First);
            result2 = div(num1Last, num2Last);
        } else {
            // 어떠한 연산자도 아닐경우 종료
            printf("올바르지 않은 연산자입니다.\n");
            return 0;
        }

        // 계산 결과 값 출력
        printf("앞자리 합: %d %c %d = %d\n뒷자리 합: %d %c %d = %d\n", num1First, operator, num2First, result1, num1Last, operator, num2Last, result2);

        // 종료, 재실행
        printf("프로그램을 종료하려면 Y, 재시작하려면 아무키를 눌러주세요.\n");
        scanf(" %c", &check);

        // Y또는y를 누른 경우 종료
        if (check == 'y' || check == 'Y') {
            printf("프로그램을 종료하였습니다.");
            return 0;
        }

    }

    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int minus(int num1, int num2) {
    return num1 - num2;
}

int multi(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    return num1 / num2;
}