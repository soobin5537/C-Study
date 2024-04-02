#include <stdio.h>

// �Լ� ����
int add(int num1, int num2);
int minus(int num1, int num2);
int multi(int num1, int num2);
int div(int num1, int num2);

int main(void) {
    // ���� ����
    int num1, num2, num1First, num2First, num1Last, num2Last, result1, result2;
    char check, operator;

    // �ݺ���
    for (;;) {
        // ù��°�� �ι�° ���ڸ� �Է�
        printf("ù��° ���ڸ� �Է��ϼ���.\n");
        scanf("%d", &num1);
        printf("�ι�° ���ڸ� �Է��ϼ���.\n");
        scanf("%d", &num2);

        // �Է��� ������ �ϳ��� 10 ������ ��� ����
        if (num1 <= 10 || num2 <= 10) {
            printf("10 �̸��� ���ڸ� �Է��Ͽ� ���α׷��� ����Ǿ����ϴ�.\n");
            return 0;
        }

        // first: �����ڸ�(�Է°��� 10���� ���� ��), Last: ���� �ڸ�(�Է°��� 10���� ���� �� ������ ��)
        num1First = num1 / 10;
        num2First = num2 / 10;
        num1Last = num1 % 10;
        num2Last = num2 % 10;

        // ����ϰ��� �ϴ� ������ �Է�
        printf("����� �����ڸ� �Է��ϼ���.\n");
        scanf(" %c", &operator);

        // �����ڿ� ���� �Լ� ȣ��
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
            // ��� �����ڵ� �ƴҰ�� ����
            printf("�ùٸ��� ���� �������Դϴ�.\n");
            return 0;
        }

        // ��� ��� �� ���
        printf("���ڸ� ��: %d %c %d = %d\n���ڸ� ��: %d %c %d = %d\n", num1First, operator, num2First, result1, num1Last, operator, num2Last, result2);

        // ����, �����
        printf("���α׷��� �����Ϸ��� Y, ������Ϸ��� �ƹ�Ű�� �����ּ���.\n");
        scanf(" %c", &check);

        // Y�Ǵ�y�� ���� ��� ����
        if (check == 'y' || check == 'Y') {
            printf("���α׷��� �����Ͽ����ϴ�.");
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