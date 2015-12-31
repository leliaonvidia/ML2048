CXX=g++
CXXFLAGS=-I include -I gtest/include -std=c++11 -g -fprofile-arcs -ftest-coverage
LDFLAGS=-pthread
GTEST_INC=gtest/include/*
GTEST_LIBS=gtest/lib/lib*.a
DEPS=include/grid.hpp include/utils.hpp
OBJS=obj/grid.o obj/utils.o

all: bin/grid_unittest bin/grid_pathtest

obj/%_unittest.o: test/%_unittest.cpp ${GTEST_INC} ${DEPS}
	${CXX} -c ${CXXFLAGS} -o $@ $<

obj/%_pathtest.o: test/%_pathtest.cpp ${GTEST_INC} ${DEPS}
	${CXX} -c ${CXXFLAGS} -o $@ $<

obj/%.o: src/%.cpp ${DEPS}
	${CXX} -c ${CXXFLAGS} -o $@ $<

bin/%_unittest: obj/%.o obj/%_unittest.o ${GTEST_LIBS} ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ $^ ${LDFLAGS}

bin/%_pathtest: obj/%.o obj/%_pathtest.o ${GTEST_LIBS} ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ $^ ${LDFLAGS}

.PHONY: run coverage clean
run: bin/grid_pathtest
	./bin/grid_pathtest

coverage:
	rm -rf cov
	mkdir cov
	gcov -b -o obj src/grid.cpp
	mv *.gcov cov

clean:
	rm -f obj/*
	rm -f bin/*
