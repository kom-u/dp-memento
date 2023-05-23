#include "Originator.hpp"

void Originator::SetState(const std::string &_state)
{
    state = _state;
}

std::string Originator::GetState() const
{
    return state;
}

Memento Originator::CreateMemento()
{
    return Memento(state);
}

void Originator::RestoreMemento(const Memento &m)
{
    state = m.GetState();
}