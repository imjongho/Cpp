#ifndef BINGOGAME_H
#define BINGOGAME_H
#include "bingoboard.h"
#define MAXSIZE 5	// ������ �ּ� 2*2 ~ �ִ� 5*5
//(Ȯ�� ����) 2���� ����, 1. MAXSIZE�� ���̱� 
// 2. start() �Լ����� �Է¹����� (size > 5)�� �������� �ɷ��ִµ� 
// �̸� ū ���ڷ� �ٲٰų� ���� ���ֱ�

class BingoGame {
private:
	int turnCnt;	// ���� ��

public:
	BingoGame();
	~BingoGame();
	void start();
};
#endif
