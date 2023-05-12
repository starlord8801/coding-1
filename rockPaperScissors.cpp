#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
bool askYN() {
  while (true) {
    char input;
    cin >> input;
    if (input == 'y') {
      cout << "perfect choose 1 for rock, 2 for paper, or 3 for scissors.\n";

    } else if (input == 'n') {
      cout << "why not it will be fun.\n";
    
        }
    return false;
  }
}

int main() {
  srand(time(0));

  int rock = 1, paper = 2, scissors = 3;
  int playerScore= 0, computerScore=0 ;
  cout << "Hello player would you like to play rock,paper,scissors!(y/n)\n";
  askYN();
    
  do{
      int playerChoice;
  cin >> playerChoice;
  if (playerChoice == '1') {
    cout << "you chose rock\n";
  }
  if (playerChoice == '2') {
    cout << "you chose paper\n";
  }
  if (playerChoice == '3') {
    cout << "you chose scissors\n";
  }
  int computerChoice;
  computerChoice =  rand() % 3 +1;{
       cout << "my choice is " << computerChoice << "\n"; 
  }
       if (playerChoice == computerChoice) {
            cout << "It's a tie!\n";
        } else if ((playerChoice == 1 && computerChoice == 3) || 
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << "You win!\n";
            playerScore++;
        } else {
            cout << "Computer wins!\n";
            computerScore++;
        }

        // print scores
        cout << "Player score: " << playerScore << endl;
        cout << "Computer score: " << computerScore << endl;
    }while (playerScore < 3 && computerScore < 3);

    // determine overall winner
    if (playerScore > computerScore) {
        cout << "Congratulations, you win!\n";
    } else {
        cout << "Sorry, the computer wins. Better luck next time!\n";
    }

    return 0;


} 



