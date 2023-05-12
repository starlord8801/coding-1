#include "enemy.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using std::cout;
enemy::enemy(string givenName) {
  cout << "a new enemy has appeared\n";
  name = givenName;
  health = 10;
  damage = rand() % 4 + 3;
  status();
}
void enemy::status() {
  cout << "name is " << name << ", i have ";
  cout << health << " health, and i will ";
  cout << "hit you with my " << damage;
  cout << " damage\n";
}
void enemy::setHealth(int by) {
  health += by;
  if (health < 0) {
    health = 0;
  }
  if (health > 10) {
    health = 10;
  }
}
int enemy ::getHealth() { return health; }
void enemy:: setName(string input){
    if(input == "poop"){
        cout<< "naughty\n";
        return;
    
    }
    name = input;
}
string enemy:: getName(){
    return name;
}
