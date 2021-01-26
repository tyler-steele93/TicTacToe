#include <iostream>
#include <vector>

#include "Board.h"

using namespace std;

Board::Board()
    : m_Size(9)
    , m_EmptySpaceChar('-')
    , m_State(new char[m_Size])
{
    for (int i = 0; i < m_Size; i++)
        m_State[i] = m_EmptySpaceChar;
}

void Board::Print()
{        
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            if (row == 0 && column == 0)
                cout << endl;

            cout << " " << m_State[row * 3 + column] << " ";
            
            if ((column + 1) % 3 != 0)
                cout << "|";

            if ((column + 1) % 3 == 0)
                cout << endl; 
        }

        if ((row + 1) % 3 != 0)
            cout << "-----------" << endl;
    }
    cout << endl;
}

void Board::ExecuteMove(int column, int row, char symbol) 
{
    int index =  (row - 1) * 3 + (column - 1);
    ExecuteMove(index, symbol);
}

void Board::ExecuteMove(int index, char symbol)
{
    if (m_State[index] == m_EmptySpaceChar)
        m_State[index] = symbol;

    else
    {
        cout << "Square " << index;
        cout << " has already been played!" << endl;
    }
}

vector<int> Board::EmptySquareIndices()
{
    vector<int> emptySquares;
    
    for (int i = 0; i < m_Size; i++)
    {
        if (m_State[i] == m_EmptySpaceChar)
            emptySquares.push_back(i);
    }
    return emptySquares;
}
