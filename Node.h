#pragma once
#include <string>
#include <memory>

class Node;
using ptr = std::shared_ptr<Node>;
using std::string;

class Node
{
public:
    ptr next = std::make_shared<Node>();

    string words;

    Node(): next{nullptr}, words{"Null"} {}
    explicit Node(string word): next{nullptr}, words{std::move(word)} {}
};
