#include <iostream>
#include <vector>

using namespace std;

class Player {
    string name;
    int health;
    int xp;

    void talk (string);
    bool is_dead();
};

class Account {

};

int main() {

    Player frank; 
    Player bob;

    Player players[]{frank, bob};

    vector<Player> players_vector{frank};
    players_vector.push_back(bob);

    Player *john{nullptr};
    john = new Player();

    delete john;


    return 0;
}


