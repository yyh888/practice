#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3


extern void InitBoard(char board[ROW][COL]);
extern void Display(char board[ROW][COL]);
extern void PlayerMove(char board[ROW][COL]);
extern void ComputerMove(char board[ROW][COL]);
extern char BoardCheck(char board[ROW][COL]);
