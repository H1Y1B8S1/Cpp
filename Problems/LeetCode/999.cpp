#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<char>> board = {
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', 'p', '.', '.', '.', '.'},
        {'.', '.', '.', 'R', '.', '.', '.', 'p'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', 'p', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'}};

    int x = -1, y = -1;

    // Find 'R' position
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] == 'R') {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1) break;
    }

    if (x == -1 || y == -1) {
        std::cout << "'R' not found on the board.\n";
        return 0;
    }

    std::cout << "Found 'R' at position: (" << x << ", " << y << ")\n";

    int count = 0;

    // Row Check (left and right)
    int A = y - 1;
    while (A >= 0) {
        if (board[x][A] == 'p') {  // Corrected from 'P' to 'p'
            count++;
            break;
        } else if (board[x][A] == 'B') {
            break;
        }
        A--;
    }

    int B = y + 1;
    while (B < 8) {
        if (board[x][B] == 'p') {
            count++;
            break;
        } else if (board[x][B] == 'B') {
            break;
        }
        B++;
    }

    // Column Check (up and down)
    int C = x - 1;
    while (C >= 0) {
        if (board[C][y] == 'p') {
            count++;
            break;
        } else if (board[C][y] == 'B') {
            break;
        }
        C--;
    }

    int D = x + 1;
    while (D < 8) {
        if (board[D][y] == 'p') {
            count++;
            break;
        } else if (board[D][y] == 'B') {
            break;
        }
        D++;
    }

    std::cout << "Total capturable pawns: " << count << std::endl;
    return 0;
}
