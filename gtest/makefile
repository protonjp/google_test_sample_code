
LM = gtest
INCLUDE = -I./gtest-1.7.0/include
LIBPATH = -L./gtest-1.7.0/lib
LIBS = -lgtest
OBJS = ../atom.o main.o atom_test.o
CFLAGS = -g -Wall


$(LM): main.o atom_test.o
	glibtool --mode=link --tag=CXX $(CXX) -o $(LM) $(LIBPATH) $(LIBS) $(OBJS)

.PHONY: clean
clean:
	rm *.o $(LM)

main.o: main.cc
	$(CXX) -c main.cc $(INCLUDE) $(CFLAGS)
atom_test.o: atom_test.cc
	$(CXX) -c atom_test.cc $(INCLUDE) $(CFLAGS)
