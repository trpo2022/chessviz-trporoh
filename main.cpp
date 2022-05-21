#include <iostream>
#include <cstring>


void print_board(char table[][8]);
void board_fill(char table[][8]);


int main()
{
    char field[8][8];
    board_fill(field);
    print_board(field);
    return 0;
	
}
void print_board(char table[][8])
{
    int i, j;
    for (i = 0; i < 8; i++) {
        std::cout << (char)('a' + i) << " ";
        for (j = 0; j < 8; j++)
            std::cout << table[i][j] << " ";
        std::cout << "\n";
    }
}

void board_fill(char table[][8])
{
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            table[i][j] = ' ';
        }
    }
    memcpy(table[0], "rnbqkbnr", 8);
    memcpy(table[1], "pppppppp", 8);
    memcpy(table[6], "pppppppp", 8);
    memcpy(table[7], "rnbqkbnr", 8);
}