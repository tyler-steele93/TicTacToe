#pragma once
#include <vector>

class Board
{
    public:
        Board();
        int m_Size;
        char m_EmptySpaceChar;
        char* m_State;

        void Print();
        void ExecuteMove(int column, int row, char symbol);
        void ExecuteMove(int index, char symbol);
        std::vector<int> EmptySquareIndices();
};