#pragma once
#include "Player.h"

class Game
{
    private:
        int* IndexToCoords(int index);
        int CoordsToIndex(int* coords);

    public:
        Game(bool P1_isHuman, bool P2_isHuman);
        void Run();
        
        Board m_Board;
        int m_NumTurns;
        bool m_GameOver;
        Player* m_Players;
};