// wuziqi5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "chessboard.h"
#include "Game.h"

int main()
{
	ChessBoard * board = new ChessBoard();
	initGame(board);
	gaming(board);

	delete board;
	closegraph();

    return 0;
}

