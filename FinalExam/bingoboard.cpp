#include "bingoboard.h"

BingoBoard::BingoBoard() {
    size = 0;
}

BingoBoard::BingoBoard(int size) {
    this->size = size;
}

BingoBoard::~BingoBoard() {}

void BingoBoard::drawBoard() {
    int i, j;
    unsigned char a = 0xa6;
    unsigned char b[12];

    for (i = 1; i < 12; i++)
        b[i] = 0xa0 + i;

    printf("%c%c ", a, b[3]);
    for (i = 0; i < size - 1; i++)
    {
        printf("%c%c ", a, b[1]);
        printf("%c%c ", a, b[8]);
    }
    printf("%c%c ", a, b[1]);
    printf("%c%c", a, b[4]);
    printf("\n");

    for (i = 0; i < size - 1; i++)
    {
        printf("%c%c ", a, b[2]);
        for (j = 0; j < size; j++)
        {
            printf("  ");
            printf("%c%c ", a, b[2]);
        }
        printf("\n");
        printf("%c%c ", a, b[7]);
        for (j = 0; j < size - 1; j++)
        {
            printf("%c%c ", a, b[1]);
            printf("%c%c ", a, b[11]);
        }
        printf("%c%c ", a, b[1]);
        printf("%c%c", a, b[9]);
        printf("\n");
    }

    printf("%c%c ", a, b[2]);
    for (j = 0; j < size; j++)
    {
        printf("  ");
        printf("%c%c ", a, b[2]);
    }
    printf("\n");

    printf("%c%c ", a, b[6]);
    for (i = 0; i < size - 1; i++)
    {
        printf("%c%c ", a, b[1]);
        printf("%c%c ", a, b[10]);
    }
    printf("%c%c ", a, b[1]);
    printf("%c%c", a, b[5]);
    printf("\n");
}

void BingoBoard::gotoxy(int x, int y) {
    COORD Pos = { (short)(x - 1), (short)(y - 1) };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}