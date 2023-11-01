#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <windows.h>
using namespace std;
#include "node.hpp"
#include "addNode.hpp"
#include "printmap.hpp"
#include "moveTarget.hpp"

int main() {
  node n1;
  n1.name = "base";
  node *target = &n1;
  n1.isTarget = 1;
  printMap(&n1);
  bool isRunning = true;

  while(isRunning){
      if (GetKeyState('A') & 0x8000) {
          string name;
          cin >> name;
          target->isTarget = 0;
          target = addNote(target, name);
          printMap(&n1);
      }
      if (GetKeyState('L') & 0x8000) {
          target = moveRight(target);
          printMap(&n1);
      }
      if (GetKeyState('H') & 0x8000) {
          target = moveLeft(target);
          printMap(&n1);
      }
      if (GetKeyState('D') & 0x8000) {
          std::cout << "Delete target." << std::endl;
      }
      if (GetKeyState('E') & 0x8000) {
          std::cout << "Edit target." << std::endl;
      }
      if (GetKeyState('J') & 0x8000) {
          target = moveDown(target);
          printMap(&n1);
      }
      if (GetKeyState('K') & 0x8000) {
          target = moveUp(target);
          printMap(&n1);
      }
      if (GetKeyState('N') & 0x8000) {
          std::cout << "Add note" << std::endl;
      }
      if(GetKeyState('Q') & 0x8000) {
          cout << "quitting";
          isRunning = false;
      }
      Sleep(50);
  }
  return 1;
}