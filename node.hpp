#pragma once
#include <iostream>
#include <vector>
struct node {
    std::string name;
    std::string description;
    std::vector<node *> children;
    node *parent;
    bool target;
};