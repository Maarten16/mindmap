#include "printmap.hpp"
void printMap(node *root, int depth) {
    if (root == nullptr) {
        return;
    }

    for (int i = 0; i < depth; i++) {
        std::cout << "  ";
    }
    if(root->target = 1){
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 9);
        std::cout << root->name << std::endl;
        SetConsoleTextAttribute(hConsole, 7);
    }

    else{
        std::cout << "- " << root->name << "\n";
    }

    for (node *child : root->children) {
        printMap(child, depth + 1);
    }
}