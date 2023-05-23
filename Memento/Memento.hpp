#pragma once

#include <iostream>

class Memento
{
private:
    // Keadaan internal yang disimpan
    std::string state;

public:
    Memento();
    Memento(const std::string &_state);

    std::string GetState() const;
};