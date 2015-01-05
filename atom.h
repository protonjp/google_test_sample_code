#include<string>

class Atom{
 private:
  int m_x;
  int m_y;
  std::string m_element;
  
 public:
  Atom(int x, int y, std::string str);
  virtual ~Atom();
  int getX(void);
  int getY(void);
  std::string getElement(void);
  std::string toString(void);
};
