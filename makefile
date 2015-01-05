CFLAGS = -g
RM = atom
SRCS = main.cc atom.cc
OBJS = $(SRCS:.cc=.o)

$(RM): atom.o main.o
	$(CXX) -o $(RM) $(OBJS)

.PHONY: clean
clean:
	rm -rf $(RM) $(OBJS)

atom.o: atom.cc atom.h

main.o: main.cc atom.h
