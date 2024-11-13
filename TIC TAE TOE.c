#include <iostream>
using namespace std;
char board[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}
};
    void showBoard() {
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i ;
        for (int j = 0; j < 3; j++) {
            cout << "|" << board[i][j];
        }
        cout << "|" << endl;
    }
}
    void makeMove(int row, int col, char player) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = player;
    }
}
char switchPlayer(char currentPlayer) {
    return (currentPlayer == 'X') ? 'O' : 'X';
}
    
bool checkWin(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
            }
    return false;
}
    int main() {
    char currentPlayer = 'X';
    int row, col;
    bool gameWon = false;
    int totalMoves = 0;
    while (!gameWon && totalMoves < 9) {
        showBoard();
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;
        row--;
        col--;
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            makeMove(row, col, currentPlayer);
             gameWon = checkWin(currentPlayer);
            currentPlayer = switchPlayer(currentPlayer);
            totalMoves++;
        } 
        else {
            cout << "Invalid move. Try again." << endl;
        }
    }
    showBoard();
    if (gameWon) {
        currentPlayer = switchPlayer(currentPlayer);
        cout << "Player " << currentPlayer << " wins!" << endl;
    } 
    else {
        cout << "It's a tie!" << endl;
    }
    return 0;
}