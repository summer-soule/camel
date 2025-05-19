/*
 *
 * Task:
 *		(a)	Each square of a chessboard can hold one piece - a pawn, knight,
 *			bishop, rook, queen, or king - or it may be empty. Each piece
 *			is either black or white. Define two enumerated types:
 *			Piece, which has seven possible values (one of which is "empty"),
 *			and Color, which has two.
 *
 *		(b)	Using the types from part (a), define a structure type named
 *			Square that can store both the type of a piece and its color.
 *
 *		(c)	Using the Square type from part (b), declare an 8x8 array
 *			named board that can store the entire contents of a chessboard.
 *
 *		(d)	Add an initializer to the declaration in part (c) so that
 *			board's initial value corresponds to the usual arrangement of
 *			pieces at the start of a chess game. A square that's not
 *			occupied by a piece should have an "empty" piece value and
 *			the color black.
 *
 * Date: 2025-05-19
 * Time: 02:28 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
	EMPTY,
	PAWN,
	KNIGHT,
	BISHOP,
	ROOK,
	QUEEN,
	KING
} Piece;

typedef enum {
	BLACK,
	WHITE
} Color;

typedef struct {
	Piece piece;
	Color color;
} Square;

Square board[8][8] = {
	{{ROOK, WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE},
	 {KING, WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK, WHITE}},
	{{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE},
	 {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}},
	{{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
	 {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
	{{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
	 {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
	{{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
	 {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
	{{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
	 {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
	{{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK},
	 {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}},
	{{ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK},
	 {KING, BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, BLACK}}
};    

int main(void) {
	char piece_print[4];
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			piece_print[0] = '\0';
			switch(board[i][j].color) {
				case BLACK:
					strcat(piece_print, "b");
					break;
				case WHITE:
					strcat(piece_print, "w");
					break;
			}
			switch (board[i][j].piece) {
				case EMPTY:
					strcpy(piece_print, " . ");
					break;
				case PAWN:
					strcat(piece_print, "P");
					break;
				case KNIGHT:
					strcat(piece_print, "N");
					break;
				case BISHOP:
					strcat(piece_print, "B");
					break;
				case ROOK:
					strcat(piece_print, "R");
					break;
				case QUEEN:
					strcat(piece_print, "Q");
					break;
				case KING:
					strcat(piece_print, "K");
					break;
			}
			printf("%3s ", piece_print);
		}
		putchar('\n');
	}
	
	exit(EXIT_SUCCESS);
}
