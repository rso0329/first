#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int userChoice, computerChoice;

    // ���� �߻��� ���� �õ� ����
    srand(time(NULL));

    // ����ڿ��� ����(1), ����(2), ��(3) �߿��� �����ϵ��� �ȳ�
    printf("����(1), ����(2), ��(3) �߿��� �����ϼ���: ");
    scanf_s("%d", &userChoice);

    // ��ǻ�ʹ� �������� ����(1), ����(2), ��(3) �߿��� ����
    computerChoice = rand() % 3 + 1;

    // ����ڿ� ��ǻ�Ͱ� ������ ���� ���
    printf("�����: %d, ��ǻ��: %d\n", userChoice, computerChoice);

    // ���� ��� �Ǵ�
    if (userChoice == computerChoice) {
        printf("���º��Դϴ�.\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2)) {
        printf("����ڰ� �̰���ϴ�!\n");
    }
    else {
        printf("��ǻ�Ͱ� �̰���ϴ�.\n");
    }

    return 0;
}