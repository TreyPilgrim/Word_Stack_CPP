#include "Stack.h"

void Stack::push(std::string word)
{
    ptr tmp = std::make_shared<Node>(word);

    if(top == nullptr)
    {
        top = tmp;
        return;
    }

    tmp->next = top;
    top = tmp;
}

bool Stack::pop(string &word)
{
    // Event of empty stack
    if (top.use_count() == 0)
        return false;

    // save the word and remove top
    word = top->words;
    top = top->next;
    return true;
}