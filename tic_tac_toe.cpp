#pragma warning(disable: 4786)
#include "matrix.h"

#ifndef USE_DOT_H
    #include <iostream.h>
#else
    #include<iostream>
    #if !defined(__BORLAND__) ||__BORLANDC__  >=0x530
        using namespace std;
    #endif
#endif

class TicTacToe
{
    public:
        enum Side(HUMAN, COMPUTER, EMPTY)
        enum position_val(HUMAN_WIN, COMPUTER_WIN, DRAW, UNCLEAR)

        //constructor which makes the board matrix a 3x3 matrix
        //and clears the board every time an object is made

        TicTacToe(): board(3,3)
        {
            clearBoard();
        }

        //choosing the optimal moove
        int chooseMoove(Side s, int & bestRow, int & bestColumn);

        //playing the move chosen
        bool playMove(Side s, int & row, int & column);

        void clearBoard(); // clears the board
        void getMove(); //gets the move from the human and update the board
        void boardIsFull(); //check if the board is full
        void isAWin(Side s) const; //checks if the move played has won the match
        const matrix<int> & getBoard() const // returns the board( this is an accessor )
        {return board};

        private:
            matrix<int> board;

            //places the peice on the given coordinates
            void place(int row, int column, int peice  = EMPTY)
            {
                board[row][column] = peice;
            }

            //check if the coordinate is empty
            bool squareIsEmpty(int row, int column )
            {
                return board[row][column] == EMPTY;
            }
            //checks the position value at the situation
            int positionValue() const;
};


int TicTacToe::positionValue()const
{
    return isAWin(COMPUTER) ? COMPUTER_WIN: isAWin(HUMAN) ? HUMAN_WIN: boardIsFull()? DRAW: UNCLEAR; 
}

int TicTacToe::chooseMove(Side s, int & bestRow, int & bestColumn)
{
    cout<<"hello";
}