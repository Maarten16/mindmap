#include "moveTarget.hpp"
#include <windows.h>

node* moveLeft(node* target){
    target->isTarget = 0;
    target = target->parent;
    target->isTarget = 1;
    while(1){
        if(!(GetKeyState('H') & 0x8000)){
            return target;
        }
    }
}

node* moveRight(node* target){
    target->isTarget = 0;
    target = target->children[0];
    target->isTarget = 1;
    while(1){
        if(!(GetKeyState('L') & 0x8000)){
            return target;
        }
    }
}

node* moveUp(node* target){
    std::cout << 11;
    return target;
}

node* moveDown(node* target){
    std::cout << 11;
    return target;
}