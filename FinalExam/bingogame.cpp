#include "bingogame.h"

BingoGame::BingoGame() {
    turnCnt = 0;
}

BingoGame::~BingoGame() {}

void BingoGame::start() {
    
    int x = 0, y = 0;               // 좌표 위치
    int o_x = 0, o_y = 0, s_x = 0, s_y = 0;
    int size;                       // 빙고판 크기
    int bingoCnt = 0;
    int bingoCnt3Turns = 0;  

    printf("빙고판 size 입력(2~5) : ");
    scanf_s("%d", &size);
    if (size < 2 || size > 5) {
        cout << "size(2~5)" << endl;
        assert(false);
    }
    // A. 프로그램을 실행하면 5x5의 판을 그려준다. ([0, 0] ~[4, 4]).이는 객체의 생산자 오버로딩을 통해 생성한다.
    BingoBoard board(size);
    char checkChar[MAXSIZE][MAXSIZE];   // 전체 상태
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            checkChar[i][j] = ' ';
        }
    }

    // 가로(행) 라인 빙고, 세로(열) 라인 빙고 초기화
    bool completeRowLine[MAXSIZE]; 
    bool completeColLine[MAXSIZE];
    for (int i = 0; i < size; i++) {
        completeRowLine[i] = false;
        completeColLine[i] = false;
    }
    
    // 대각선 라인 빙고(최대 2개 나옴) 초기화
    bool completeDiagonalLine[2];
    for (int i = 0; i < 2; i++) {
        completeDiagonalLine[i] = false;
    }


    // B. 게임 시작 시 두 개의 칸에 랜덤으로 ‘O’와 ‘S’가 나온다. 'O'와 'S'는 한 개의 칸에 두 개 다 들어가면 안 된다.
    srand((unsigned int)time(NULL));
    system("cls");
    board.drawBoard();
    o_x = rand() % size;
    o_y = rand() % size;
    checkChar[o_y][o_x] = 'O';
    board.gotoxy(3 + (o_x * 4), 2 + (o_y * 2));
    printf("%c", 'O');

    do {
        s_x = rand() % size;
        s_x = rand() % size;
    } while (s_x == o_x && s_y == o_y); // 'S'가 'O'의 위치와 겹치지 않도록 반복
    checkChar[s_y][s_x] = 'S';
    board.gotoxy(3 + (s_x * 4), 2 + (s_y * 2));
    printf("%c", 'S');


    // 본격적인 사용자 참가
    while (true) {
        system("cls");  // 화면 지우기

        // 화면 출력
        board.drawBoard();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                // x: 3, 7, 11(4칸씩), 가로
                // y: 2, 4, 6(2칸씩), 세로
                board.gotoxy(3 + (i * 4), 2 + (j * 2));
                printf("%c", checkChar[j][i]);
            }
            cout << endl;
        }
        cout << endl;


        // D. 's'는 특수 모양으로써 3번 규칙에 의해 'O'로 변경될 경우
        // '*'표시로 변경되며 이후 게임이 종료된다. 또한 'S'를 이용하여 빙고를 만들 수는 없다.
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (checkChar[i][j] == '*') {
                    cout << "Game Over" << endl;
                    cout << "Lose(S가 O로 변경되었음)" << endl;
                    assert(false);
                }
            }
        }


        // H. 3개의 빙고를 완성했을 경우 게임을 종료한다.
        if (bingoCnt >= 3) {
            cout << "Game Complete" << endl;
            cout << "Win(빙고 3개 완성)" << endl;
            break;
        }


        // G. 3의 배수의 턴마다 빙고를 완성하지 못할 경우 실패하여 종료하는 코드를 추가할 경우 보너스 점수 10점 
        if (turnCnt % 3 == 0 && turnCnt != 0) {
            if (bingoCnt3Turns >= 1) {
                bingoCnt3Turns = 0;
            }
            else {
                cout << "Game Over" << endl;
                cout << "Lose(" << turnCnt << "턴 안에 빙고를 완성하지 못함)" << endl;
                assert(false);
            }
        }
        turnCnt++;  // 현재 턴
        cout << turnCnt << "턴" << endl;


        // C. 사용자가 좌표를 입력할 경우 해당 좌표와 상하좌우가 'O'로 표시된다.
        // (칸이 막혀있을 경우 표시되지 않는다.) 이미 'O'인 경우에는 ' '로 표시된다.
        cout << "사용자 좌표 입력(x, y)";
        cout << "(범위: 0~" << size << "): ";
        do {
            cin >> x >> y;
            cout << "다시 입력: ";
        } while (x < 0 || y < 0 || x >= size || y >= size);


        // F. 'X'는 3번 규칙에 의해 'O'로 변경되지 않는다.
        if (x >= 0 && x < size && y >= 0 && y < size) {
            if (checkChar[y][x] != 'X') {
                if (checkChar[y][x] != 'O') {
                    if (checkChar[y][x] == 'S') {
                        checkChar[y][x] = '*';
                    }
                    else {
                        checkChar[y][x] = 'O';
                    }
                }
                else {
                    checkChar[y][x] = ' ';
                }
            }
        }

        int left_x = x - 1;     // 왼쪽
        if (left_x >= 0 && left_x < size) {
            if (checkChar[y][left_x] != 'X') {
                if (checkChar[y][left_x] != 'O') {
                    if (checkChar[y][left_x] == 'S') {
                        checkChar[y][left_x] = '*';
                    }
                    else {
                        checkChar[y][left_x] = 'O';
                    }
                }
                else {
                    checkChar[y][left_x] = ' ';
                }
            }
        }

        int right_x = x + 1;    // 오른쪽
        if (right_x >= 0 && right_x < size) {
            if (checkChar[y][right_x] != 'X') {
                if (checkChar[y][right_x] != 'O') {
                    if (checkChar[y][right_x] == 'S') {
                        checkChar[y][right_x] = '*';
                    }
                    else {
                        checkChar[y][right_x] = 'O';
                    }
                }
                else {
                    checkChar[y][right_x] = ' ';
                }
            }
        }
        
        int up_y = y - 1;   // 위
        if (up_y >= 0 && up_y < size) {
            if (checkChar[up_y][x] != 'X') {
                if (checkChar[up_y][x] != 'O') {
                    if (checkChar[up_y][x] == 'S') {
                        checkChar[up_y][x] = '*';
                    }
                    else {
                        checkChar[up_y][x] = 'O';
                    }
                }
                else {
                    checkChar[up_y][x] = ' ';
                }
            }
        }

        int down_y = y + 1;   // 아래
        if (down_y >= 0 && down_y < size) {
            if (checkChar[down_y][x] != 'X') {
                if (checkChar[down_y][x] != 'O') {
                    if (checkChar[down_y][x] == 'S') {
                        checkChar[down_y][x] = '*';
                    }
                    else {
                        checkChar[down_y][x] = 'O';
                    }
                }
                else {
                    checkChar[down_y][x] = ' ';
                }
            }
        }


        // E. 빙고를 완성하였을 경우 해당 빙고의 가로 열 또는 세로 열 또는 대각선은 'X'로 표시된다.
        // F. 'X'를 통해서도 빙고를 완성할 수 있다.
        // 가로 빙고
        int cnt = 0;
        for (int i = 0; i < size; i++) {
            cnt = 0;

            for (int j = 0; j < size; j++) {
                if (checkChar[i][j] == 'O' || checkChar[i][j] == 'X') {
                    cnt++;
                }
            }

            if ((cnt == size) && (completeRowLine[i] == false)) {
                completeRowLine[i] = true;
                bingoCnt++;
                bingoCnt3Turns++;
                for (int j = 0; j < size; j++) {
                    checkChar[i][j] = 'X';
                }
            }
        }

        // 세로 빙고
        for (int i = 0; i < size; i++) {
            cnt = 0;

            for (int j = 0; j < size; j++) {
                if (checkChar[j][i] == 'O' || checkChar[j][i] == 'X') {
                    cnt++;
                }
            }

            if ((cnt == size) && (completeColLine[i] == false)) {
                completeColLine[i] = true;
                bingoCnt++;
                bingoCnt3Turns++;
                for (int j = 0; j < size; j++) {
                    checkChar[j][i] = 'X';
                }
            }
        }

        // 대각선 빙고
        cnt = 0;
        for (int i = 0; i < size; i++) {
            if (checkChar[i][i] == 'O' || checkChar[i][i] == 'X') {
                cnt++;
            }
        }

        if ((cnt == size) && (completeDiagonalLine[0] == false)) {
            completeDiagonalLine[0] = true;
            bingoCnt++;
            bingoCnt3Turns++;
            for (int i = 0; i < size; i++) {
                checkChar[i][i] = 'X';
            }
        }

        cnt = 0;
        for (int i = 0; i < size; i++) {
            if (checkChar[size - i - 1][i] == 'O' || checkChar[size - i - 1][i] == 'X') {
                cnt++;
            }
        }

        if ((cnt == size) && (completeDiagonalLine[1] == false)) {
            completeDiagonalLine[1] = true;
            bingoCnt++;
            bingoCnt3Turns++;
            for (int i = 0; i < size; i++) {
                checkChar[size - i - 1][i] = 'X';
            }
        }

    }


}


