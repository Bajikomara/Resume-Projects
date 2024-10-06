#include<bits/stdc++.h>
#include "Game.h"
using namespace std;

int main(){
    int boardsize;
    string player1name, player2name;

    cout << "ENter the board size";

    cin >> boardsize;

    player1name = "ABC";
    player2name = "DEF";

    Game TicTacToe(player1name,player2name,boardsize);
    TicTacToe.start();

    return 0;
}