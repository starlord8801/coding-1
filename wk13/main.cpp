#include "enemy.h"
#include <ctime>
#include <iostream>
using namespace std;
int main() {
  srand(time(0));
  cout << "Hello World!\n";

  enemy duke;
  for (int i = 0; i < 30; i++) {
    enemy bananaman;
  }
  cout << "all enemies are hurt by a storm\n";
  duke.setHealth(-2);
  cout << "duke now has  " << duke.getHealth() << " health\n";

  cout << "duke lose 500 health. \n";
  duke.setHealth(-500);
  cout << "duke now has  " << duke.getHealth() << " health\n";

cout <<"what would you like to name the new enemy\n";
string input;
    cin>> input;
    duke.setName(input);
cout<< "duke is now called "<< duke.getName()<<".\n";
}