#include "addNode.hpp"
node* addNote(node* target, std::string name) {
    node *newNode = new node;
    target->children.push_back(newNode);
    newNode->name = name;
    newNode->parent = target;
    newNode->isTarget = 1;
    target = newNode;
    return target;
}