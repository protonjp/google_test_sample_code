#include <sstream>
#include "atom.h"

int Atom::getX(void){
  return m_x;
}
int Atom::getY(void){
  return m_y;
}
std::string Atom::getElement(void){
  return m_element;
}
std::string Atom::toString(void){
  std::string str;
  str = "class Atom{\n";
  std::ostringstream oss1;
  oss1 << m_x;
  str += "  m_x = " + oss1.str() + "\n";
  std::ostringstream oss2;
  oss2 << m_y;
  str += "  m_y = " + oss2.str() + "\n";
  str += "  m_element = " + m_element + "\n";
  str += "}\n";
  return str;
}

Atom::Atom(int x,int y,std::string str){
  m_x=x; m_y=y; m_element=str;
}

Atom::~Atom(void){
}
