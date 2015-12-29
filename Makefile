CXX=g++
CXXFLAGS=-I include -I gtest/include -std=c++11 -g -fprofile-arcs -ftest-coverage
LDFLAGS=-pthread
GTEST_INC=gtest/include/*
GTEST_LIBS=gtest/lib/lib*.a
DEPS=include/grid.hpp include/utils.hpp
OBJS=obj/grid.o obj/utils.o

all: bin/grid_unittest

obj/%_unittest.o: test/%_unittest.cpp ${GTEST_INC} ${DEPS}
	${CXX} -c ${CXXFLAGS} -o $@ $<

obj/%.o: src/%.cpp ${DEPS}
	${CXX} -c ${CXXFLAGS} -o $@ $<

bin/%_unittest: obj/%.o obj/%_unittest.o ${GTEST_LIBS} ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ $^ ${LDFLAGS}

run: bin/grid_unittest
	./bin/grid_unittest

.PHONY: clean
clean:
	rm -f obj/*
	rm -f bin/*
