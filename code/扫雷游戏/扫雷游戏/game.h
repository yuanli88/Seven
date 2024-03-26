#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define mine_count 10
void menu();
void game();
void Initboard(char show[ROWS][COLS], int rows, int cols,char set);
void Displayboard(char board[ROWS][COLS],int row,int col);
void Setmine(char board[ROWS][COLS],int row,int col);
void Findmine(char show[ROWS][COLS],char mine[ROWS][COLS],int row,int col);
int get_mine_count(char mine[ROWS][COLS], int row, int col);
int Is_win(char show[ROWS][COLS], int row, int col);
void Signal(char show[ROWS][COLS],int x,int y);
int Seek_rule(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col,int x, int y);