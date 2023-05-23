#include "Memento.hpp"

Memento::Memento() {}

Memento::Memento(const std::string &_state) : state(_state) {}

std::string Memento::GetState() const
{
    return state;
}