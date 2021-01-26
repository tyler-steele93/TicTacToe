#include <iostream>
#include <string>
#include <vector>
#include <array>

#include "Includes.cpp"

using namespace std;

void Exit(string message)
{
    cout << endl << message << endl << endl;
    std::exit(EXIT_FAILURE);
}

template<typename T>
void PrintList(T array)
{
    int arraySize;
    try {
        arraySize = array.size();
    }
    catch (int e) {
        arraySize = sizeof(array)/sizeof(array[0]);
    }

    for (int i = 0; i < arraySize; i++)
        cout << "(" << i+1 << ") " << array[i] << endl;
}

//string RequestUserInput(string prompt, string* acceptableResponses)

int main()
{
    Game game = Game(true,true);
    game.Run();

    return 0;
}