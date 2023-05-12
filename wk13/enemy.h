#include <string>
using std::string;
class enemy{
private:
string name;
int health;
int damage;
public:
enemy(string givenName = "Bad Guy Mcgee");
void status();

void setHealth(int by);
 int getHealth(); 
void setName(string input);
string getName();
};