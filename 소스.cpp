#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int userChoice, computerChoice;

    // 난수 발생을 위한 시드 설정
    srand(time(NULL));

    // 사용자에게 가위(1), 바위(2), 보(3) 중에서 선택하도록 안내
    printf("가위(1), 바위(2), 보(3) 중에서 선택하세요: ");
    scanf_s("%d", &userChoice);

    // 컴퓨터는 랜덤으로 가위(1), 바위(2), 보(3) 중에서 선택
    computerChoice = rand() % 3 + 1;

    // 사용자와 컴퓨터가 선택한 것을 출력
    printf("사용자: %d, 컴퓨터: %d\n", userChoice, computerChoice);

    // 게임 결과 판단
    if (userChoice == computerChoice) {
        printf("무승부입니다.\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2)) {
        printf("사용자가 이겼습니다!\n");
    }
    else {
        printf("컴퓨터가 이겼습니다.\n");
    }

    return 0;
}