#ifndef BINGOGAME_H
#define BINGOGAME_H
#include "bingoboard.h"
#define MAXSIZE 5	// 빙고판 최소 2*2 ~ 최대 5*5
//(확장 가능) 2가지 변경, 1. MAXSIZE를 높이기 
// 2. start() 함수에서 입력받을때 (size > 5)가 조건으로 걸려있는데 
// 이를 큰 숫자로 바꾸거나 조건 없애기

class BingoGame {
private:
	int turnCnt;	// 현재 턴

public:
	BingoGame();
	~BingoGame();
	void start();
};
#endif
