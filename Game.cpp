#include <iostream>
#include "Game.h"

Game::Game(bool P1_isHuman = true, bool P2_isHuman = true)
{
    m_Board = Board();
    m_NumTurns = 0;
    m_GameOver = false;
    m_Players = new Player[2]{};

    m_Players[0] = Player("Player 1", 'X', P1_isHuman);
    m_Players[1] = Player("Player 2", 'O', P2_isHuman);
}

void Game::Run()
{
    while (m_GameOver != true)
    {
        int playerTurnIndex = m_NumTurns % 2;
        m_Board.Print();

        if (m_Players[playerTurnIndex].m_IsHuman == true)
        {
            int moveRow;
            int moveColumn;

            cout << "Select a move row (1-3): ";
            cin >> moveRow;

            cout << "Select a move column (1-3): ";
            cin >> moveColumn;
        }

        m_NumTurns++;
        if (m_NumTurns == m_Board.m_Size)
            m_GameOver = true;
    }
}

int* IndexToCoords(int index)
{
    int column = index % 3 + 1;
    int row = index / 3 + 1;

    int* coords = new int[2]{
        column,
        row
    };
    return coords;
}

int CoordsToIndex(int* coords)
{
    int column = coords[0];
    int row = coords[1];
    int index = (column - 1) + 3 * (row - 1);
    return index;
}