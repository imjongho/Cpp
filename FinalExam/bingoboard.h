#ifndef BINGOBOARD_H
#define BINGOBOARD_H
#include <iostream>
#include <cassert>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

class BingoBoard {
private:
	int size;

public:
	BingoBoard();
	BingoBoard(int size);
	~BingoBoard();
	void drawBoard();
	void gotoxy(int x, int y);
};
#endif

