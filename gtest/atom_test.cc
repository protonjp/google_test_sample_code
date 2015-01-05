#include <gtest/gtest.h>
#include "../atom.h"

TEST(AtomTest,coordinate){
  Atom atom(3,7,"Au");
  ASSERT_EQ(3,atom.getX());
  ASSERT_EQ(7,atom.getY());
}

TEST(AtomTest,element){
  Atom atom(3,7,"Au");
  ASSERT_EQ("Au",atom.getElement());
}
