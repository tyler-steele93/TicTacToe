#pragma once
#include <string>
#include <string>

using namespace std;

class Player
{
    public:
        Player();
        Player(string name, char symbol, bool isHuman);
        string m_Name;
        char m_Symbol;
        bool m_IsHuman;
};