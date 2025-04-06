/*
 *
 * Project 3.
 *
 * Task: Remove the num_in_rank, num_in_suit, and card_exists arrays from the
 * poker.c program of Section 10.5. Have the program store the cards in a
 * 5 x 2 array instead. Each row of the array will represent a card. For
 * example, if the array is named hand, then hand[0][0] will store the rank of
 * the first card and hand[0][1] will store the suit of the first card.
 *
 * Date: 2025-04-02
 * Time: 09:18 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define RANK_SUIT 2

#define RANK	  0
#define SUIT	  1

/* external variables */
bool straight, flush, four, three;

int pairs;

int hand[NUM_CARDS][RANK_SUIT];

/* prototypes */
void read_cards(int hand[5][2]);
void analyze_hand(int hand[5][2]);
void print_result(void);
void selection_sort(int a[NUM_CARDS][RANK_SUIT], int n, int rs);

int main(void) {

	/* must be removed
	int num_in_rank[NUM_RANKS];
	int num_in_suit[NUM_SUITS];
	*/


	for (;;) {
		read_cards(hand);
		analyze_hand(hand);
		print_result();
	}

	exit(EXIT_SUCCESS);
}

void read_cards(int hand[NUM_CARDS][RANK_SUIT])
{
	// must be removed
	// bool card_exists[NUM_RANKS][NUM_SUITS];

	char ch, rank_ch, suit_ch;
	//int rank, suit;
	bool bad_card;
	bool ignored;
	int cards_read = 0;

	for (int i = 0; i < NUM_CARDS; i++)
		for (int j = 0; j < RANK_SUIT; j++)
			hand[i][j] = 0;

	/*
	for (rank = 0; rank < NUM_RANKS; rank++) {
		num_in_rank[rank] = 0;
		for (suit = 0; suit < NUM_SUITS; suit++)
			card_exists[rank][suit] = false;
	}
	*/

	while (cards_read < NUM_CARDS) {
		bad_card = false;
		ignored = false;

		printf("Enter a card: ");

		rank_ch = getchar();
		switch (rank_ch) {
			case '0':			exit(EXIT_SUCCESS);
			case '2':			hand[cards_read][0] = 0; break;
			case '3':			hand[cards_read][0] = 1; break;
			case '4':			hand[cards_read][0] = 2; break;
			case '5':			hand[cards_read][0] = 3; break;
			case '6':			hand[cards_read][0] = 4; break;
			case '7':			hand[cards_read][0] = 5; break;
			case '8':			hand[cards_read][0] = 6; break;
			case '9':			hand[cards_read][0] = 7; break;
			case 't': case 'T':	hand[cards_read][0] = 8; break;
			case 'j': case 'J':	hand[cards_read][0] = 9; break;
			case 'q': case 'Q':	hand[cards_read][0] = 10; break;
			case 'k': case 'K':	hand[cards_read][0] = 11; break;
			case 'a': case 'A':	hand[cards_read][0] = 12; break;
			default:			bad_card = true;
		}

		suit_ch = getchar();
		switch (suit_ch) {
			case 'c': case 'C': hand[cards_read][1] = 0; break;
			case 'd': case 'D': hand[cards_read][1] = 1; break;
			case 'h': case 'H': hand[cards_read][1] = 2; break;
			case 's': case 'S': hand[cards_read][1] = 3; break;
			default:			bad_card = true;
		}

		while ((ch = getchar()) != '\n')
			if (ch != ' ') bad_card = true;

		if (bad_card) {
			printf("Bad card; ignored.\n");
			continue;
		} else {
			for (int i = 0; i < cards_read; i++) {

				if (hand[i][0] == hand[cards_read][0]
				&&  hand[i][1] == hand[cards_read][1])
				{
					printf("Duplicate card; ignored.\n");
					ignored = true;
					break;
				}
			}
			if (ignored) continue;

			cards_read++;
		}
	}
}

void analyze_hand(int hand[NUM_CARDS][RANK_SUIT])
{
	//int num_consec = 0;
	int suit;

	straight = false;
	flush = true;
	four = false;
	three = false;

	pairs = 0;

	selection_sort(hand, NUM_CARDS, RANK);

	/* check for flush */
	suit = hand[0][SUIT];
	for (int i = 0; i < NUM_CARDS; i++)
		if (hand[i][SUIT] != suit)
			flush = false;

	/* check for straight */
	for (int i = 1; i < NUM_CARDS; i++) {
		if (hand[i][0] == (hand[i-1][0] + 1)) {
			straight = true;
		}
		else {
			straight = false;
			break;
		}
	}
	if (straight) return;

	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	for (int i = 1, j = 0; i < NUM_CARDS; i++) {
		if (hand[i][0] == hand[i-1][0]) {
			j++;
			if (i == NUM_CARDS-1)
				switch(j) {
					case 1:
						pairs++;
						break;
					case 2:
						three = true;
						break;
					case 3:
						four = true;
						break;
				}
		} else { 
			switch(j) {
				case 1:
					pairs++;
					break;
				case 2:
					three = true;
					break;
				case 3:
					four = true;
					break;
			}
			j = 0;
		}
	}
}

void print_result(void)
{
	if (straight && flush) 	printf("Straight flush");
	else if (four)			printf("Four of a kind");
	else if (three &&
			 pairs == 1)	printf("Full house");
	else if (flush)			printf("Flush");
	else if (straight)		printf("Straight");
	else if (three)			printf("Three of a kind");
	else if (pairs == 2)	printf("Two pairs");
	else if (pairs == 1)	printf("Pair");
	else					printf("High card");

	printf("\n\n");
}

void
selection_sort(int a[NUM_CARDS][RANK_SUIT], int n, int rs)
{
	if (n == 0) return;

	int largest = 0;
	int tmp[2] = {0};

	for (int i = 0; i < n; i++) {
		if (a[i][rs] > a[largest][rs]) {
			largest = i;
		}
	}

	tmp[0] = a[largest][0];
	tmp[1] = a[largest][1];

	a[largest][0] = a[n-1][0];
	a[largest][1] = a[n-1][1];

	a[n-1][0] = tmp[0];
	a[n-1][1] = tmp[1];

	if (n >= 0) selection_sort(a, n - 1, rs);
}
