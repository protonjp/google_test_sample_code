#include <iostream>
#include "atom.h"

int main(){
  Atom atom(7,3,"Au");
  std::cout << atom.toString() << std::endl;
}
