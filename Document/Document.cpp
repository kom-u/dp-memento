#include "Document.hpp"

Document::Document(const std::string &content) : content_(content)
{
}

void Document::SetContent(const std::string &content)
{
    content_ = content;
}

std::string Document::GetContent() const
{
    return content_;
}

Memento<std::string> Document::CreateMemento() const
{
    return Memento<std::string>(content_);
}

void Document::Restore(const Memento<std::string> &memento)
{
    content_ = memento.GetState();
}