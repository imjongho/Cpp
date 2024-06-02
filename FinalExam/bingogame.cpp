#include "bingogame.h"

BingoGame::BingoGame() {
    turnCnt = 0;
}

BingoGame::~BingoGame() {}

void BingoGame::start() {
    
    int x = 0, y = 0;               // ��ǥ ��ġ
    int o_x = 0, o_y = 0, s_x = 0, s_y = 0;
    int size;                       // ������ ũ��
    int bingoCnt = 0;
    int bingoCnt3Turns = 0;  

    printf("������ size �Է�(2~5) : ");
    scanf_s("%d", &size);
    if (size < 2 || size > 5) {
        cout << "size(2~5)" << endl;
        assert(false);
    }
    // A. ���α׷��� �����ϸ� 5x5�� ���� �׷��ش�. ([0, 0] ~[4, 4]).�̴� ��ü�� ������ �����ε��� ���� �����Ѵ�.
    BingoBoard board(size);
    char checkChar[MAXSIZE][MAXSIZE];   // ��ü ����
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            checkChar[i][j] = ' ';
        }
    }

    // ����(��) ���� ����, ����(��) ���� ���� �ʱ�ȭ
    bool completeRowLine[MAXSIZE]; 
    bool completeColLine[MAXSIZE];
    for (int i = 0; i < size; i++) {
        completeRowLine[i] = false;
        completeColLine[i] = false;
    }
    
    // �밢�� ���� ����(�ִ� 2�� ����) �ʱ�ȭ
    bool completeDiagonalLine[2];
    for (int i = 0; i < 2; i++) {
        completeDiagonalLine[i] = false;
    }


    // B. ���� ���� �� �� ���� ĭ�� �������� ��O���� ��S���� ���´�. 'O'�� 'S'�� �� ���� ĭ�� �� �� �� ���� �� �ȴ�.
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
    } while (s_x == o_x && s_y == o_y); // 'S'�� 'O'�� ��ġ�� ��ġ�� �ʵ��� �ݺ�
    checkChar[s_y][s_x] = 'S';
    board.gotoxy(3 + (s_x * 4), 2 + (s_y * 2));
    printf("%c", 'S');


    // �������� ����� ����
    while (true) {
        system("cls");  // ȭ�� �����

        // ȭ�� ���
        board.drawBoard();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                // x: 3, 7, 11(4ĭ��), ����
                // y: 2, 4, 6(2ĭ��), ����
                board.gotoxy(3 + (i * 4), 2 + (j * 2));
                printf("%c", checkChar[j][i]);
            }
            cout << endl;
        }
        cout << endl;


        // D. 's'�� Ư�� ������ν� 3�� ��Ģ�� ���� 'O'�� ����� ���
        // '*'ǥ�÷� ����Ǹ� ���� ������ ����ȴ�. ���� 'S'�� �̿��Ͽ� ���� ���� ���� ����.
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (checkChar[i][j] == '*') {
                    cout << "Game Over" << endl;
                    cout << "Lose(S�� O�� ����Ǿ���)" << endl;
                    assert(false);
                }
            }
        }


        // H. 3���� ���� �ϼ����� ��� ������ �����Ѵ�.
        if (bingoCnt >= 3) {
            cout << "Game Complete" << endl;
            cout << "Win(���� 3�� �ϼ�)" << endl;
            break;
        }


        // G. 3�� ����� �ϸ��� ���� �ϼ����� ���� ��� �����Ͽ� �����ϴ� �ڵ带 �߰��� ��� ���ʽ� ���� 10�� 
        if (turnCnt % 3 == 0 && turnCnt != 0) {
            if (bingoCnt3Turns >= 1) {
                bingoCnt3Turns = 0;
            }
            else {
                cout << "Game Over" << endl;
                cout << "Lose(" << turnCnt << "�� �ȿ� ���� �ϼ����� ����)" << endl;
                assert(false);
            }
        }
        turnCnt++;  // ���� ��
        cout << turnCnt << "��" << endl;


        // C. ����ڰ� ��ǥ�� �Է��� ��� �ش� ��ǥ�� �����¿찡 'O'�� ǥ�õȴ�.
        // (ĭ�� �������� ��� ǥ�õ��� �ʴ´�.) �̹� 'O'�� ��쿡�� ' '�� ǥ�õȴ�.
        cout << "����� ��ǥ �Է�(x, y)";
        cout << "(����: 0~" << size << "): ";
        do {
            cin >> x >> y;
            cout << "�ٽ� �Է�: ";
        } while (x < 0 || y < 0 || x >= size || y >= size);


        // F. 'X'�� 3�� ��Ģ�� ���� 'O'�� ������� �ʴ´�.
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

        int left_x = x - 1;     // ����
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

        int right_x = x + 1;    // ������
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
        
        int up_y = y - 1;   // ��
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

        int down_y = y + 1;   // �Ʒ�
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


        // E. ���� �ϼ��Ͽ��� ��� �ش� ������ ���� �� �Ǵ� ���� �� �Ǵ� �밢���� 'X'�� ǥ�õȴ�.
        // F. 'X'�� ���ؼ��� ���� �ϼ��� �� �ִ�.
        // ���� ����
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

        // ���� ����
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

        // �밢�� ����
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


