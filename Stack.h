#pragma once
#include <memory>
#include <string>
#include  "Node.h"

using std::string;
using ptr = std::shared_ptr<Node>;
class Stack
{
private:
    ptr top;

public:
    Stack(): top{nullptr}{}

    void push(string word);
    bool pop(string &word);



};