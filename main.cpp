#include "lib.hpp"

#include <iostream>

void PrintBoard(std::string _boardString)
{
    // convert board to char 2d array
    char boardArray[3][3];
    int boardStringIndex = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            boardArray[i][j] = _boardString[boardStringIndex];
            boardStringIndex++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << "\t ";
        for (int j = 0; j < 3; j++)
        {
            if (j != 2)
                std::cout << boardArray[i][j] << " | ";
            else
                std::cout << boardArray[i][j];
        }
        std::cout << " ";

        if (i != 2)
            std::cout << std::endl
                      << "\t---|---|---"
                      << std::endl;
    }

    for (int i = 0; i < 9; i++)
    {
    }

    std::cout << std::endl;
}

int main()
{
    Originator board;
    Caretaker caretaker;

    std::cout << "State 1:\n";
    board.SetState("X   X   O");
    PrintBoard(board.GetState());
    caretaker.SaveMemento(board.CreateMemento());

    std::cout << "\n\n";

    std::cout << "State 2:\n";
    board.SetState("X   X  XO");
    PrintBoard(board.GetState());

    // Mengembalikan keadaan sebelumnya menggunakan caretaker
    board.RestoreMemento(caretaker.GetMemento());

    std::cout << "\n\n";
    std::cout << "State 1 (Restored):\n";
    PrintBoard(board.GetState());

    return 0;
}