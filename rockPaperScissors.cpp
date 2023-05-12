#include <iostream>
#include <cstdlib>
using namespace std;

// Function to display the game board
void displayBoard(char board[]) {
    cout << "\n";
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "-----------" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

// Function to check if the game has ended
bool gameOver(char board[]) {
    // Check all the possible winning combinations
    if ((board[0] == 'X' && board[1] == 'X' && board[2] == 'X') ||
        (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') ||
        (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') ||
        (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') ||
        (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') ||
        (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') ||
        (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') ||
        (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') ||
        (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') ||
        (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') ||
        (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') ||
        (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') ||
        (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') ||
        (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') ||
        (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') ||
        (board[2] == 'O' && board[4] == 'O' && board[6] == 'O')) {
        return true;    // If game over, return true
    }
    // Check if there's a tie
    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') {
            return false;   // If there's an empty spot, the game is not ove
        }
    }
    return true;    // If there's no empty spots, the game is a tie
}

// Function to check if a move is valid
bool validMove(char board[], int move) {
    if (board[move] != 'X' && board[move] != 'O') {
        return true;    // If spot is not taken, return true
    }
    else {
        return false;   // If spot is taken, return false
    }
}

// Function to make a random move for the computer
int computerMove(char board[]) {
    int move;
    do {
        move = rand() % 9;  // Generate a random move between 0 and 8
    } while (!validMove(board, move));   // Keep generating moves until a valid move is found
    return move;
}

// Function to make the player's move
int playerMove(char board[]) {
    int move;
    do {
        cout << "Enter your move (0-8): ";
        cin >> move;
    } while (!validMove(board, move));   // Keep asking for input until a valid move is entered
    return move;
}

int main() {
    char board[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};   // Initialize the game board
    int player, computer;

    displayBoard(board);    // Display the initial game board

    // Loop until the game ends
    while (!gameOver(board)) {
        player = playerMove(board);     // Get the player's move
        board[player] = 'X';    // Update the game board with the player's move
        displayBoard(board);    // Display the updated game board

        // Check if the game is over
        if (gameOver(board)) {
            break;
        }

        computer = computerMove(board); // Get the computer's move
        board[computer] = 'O';  // Update the game board with the computer's move
        displayBoard(board);    // Display the updated game board
    }

    // Display the final result
    if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X' ||
        board[3] == 'X' && board[4] == 'X' && board[5] == 'X' ||
        board[6] == 'X' && board[7] == 'X' && board[8] == 'X') {
        cout << "Congratulations, you win!" << endl;
    }
    else if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O' ||
             board[3] == 'O' && board[4] == 'O' && board[5] == 'O' ||
             board[6] == 'O' && board[7] == 'O' && board[8] == 'O') {
        cout << "Sorry, the computer wins." << endl;
    }
    else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}