#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player(){}

Player::Player(string name, char symbol, bool isHuman)
    : m_Name(name)
    , m_Symbol(symbol)
    , m_IsHuman(isHuman){}