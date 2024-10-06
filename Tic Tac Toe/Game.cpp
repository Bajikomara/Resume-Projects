#include "Game.h"
#include <bits/stdc++.h>
using namespace std;

Game :: Game(const string &player1name, const string & player2name, int boardsize):player1(player1name,'X'),player2(player2name,'O'),
board(boardsize),currentPlayer(&player1),isGameover(false){}

void Game::start(){
    cout << "Welcome to Tic Tac Toe game\n";
    board.display();
    while (!isGameover){
        PlayerTurn();
        board.display();

        if (board.checkWin(currentPlayer->getSymbol())){
            cout <<currentPlayer->getName()<<"Wins"<<endl;
            isGameover = true;
        }

        else if(board.isFull()){
            cout<<"It's a draw game\n";
            isGameover = true;

        }
        else{
            currentPlayer = (currentPlayer == &player1) ? &player2 : &player1;
        }

   }
}

void Game :: PlayerTurn(){
    int row, col;
    cout << currentPlayer->getName() << "'s Turn. Enter the row and column:\n";
    cin>>row>>col;

    while(!board.placeMove(row,col,currentPlayer->getSymbol())){
        cout << "Invalid Move. Please Try again :\n";
        cin >> row >> col;
    }
}

bool Game :: isDraw(){
    return board.isFull() && !board.checkWin(player1.getSymbol()) &&
    !board.checkWin(player2.getSymbol());
}