#ifndef Game_H
#define Game_H

#include "Board.h"
#include "Player.h"

class Game{
    private:
        Board board;
        Player player1;
        Player player2;
        Player* currentPlayer;
        bool isGameover;

    public:
        Game(const string & player1name, const string & player2Nam, int boardsize);
        void start();
        void PlayerTurn();
        bool isDraw();

};



#endif