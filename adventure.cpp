#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
int health = 30;
void story() {
  cout << "you wake up \n";
  cout << "you have 30 health \n";
}
bool askYN(string question = "would you like to go adventuring?(y/n)") {
  while (true) {
    cout << question << ".\n";
    char input;
    cin >> input;
    if (input == 'y') {
      return true;
    } else if (input == 'n') {
    }
  }
}
int rollDie(int sides = 6, int min = 1) { return rand() % sides + min; }

void adventure(int attack = rollDie(), int block = rollDie(),
               int totalTreasure = rollDie()) {
  if (block >= attack) {
    cout << " that was a successful block and gained \n"
         << totalTreasure << " treasure.\n";
  } else
    (health -= attack - block);
  cout << " you have " << health << " health left\n";
};
void ending();

int main() {
  srand(time(0));
  story();
  askYN();

  while (health > 0) {
    cout << askYN();
    adventure();
  }
}
