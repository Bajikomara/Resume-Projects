#include "Player.h"
using namespace std;

Player :: Player(const string &playername, char playersymbol) : name(playername), symbol(playersymbol){}

string Player ::getName() const{
    return name;
}

char Player :: getSymbol() const{
    return symbol;
}

