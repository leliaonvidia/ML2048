#include <limits>
#include "grid.hpp"
#include "utils.hpp"
#include "gtest/gtest.h"

// reset()
TEST(T1, T1) {
}

// init()
TEST(T2, T2) {                                                                  
}

// is_outside()
TEST(T4, T4) {
}

// action()
TEST(T5, T5) {
}

void set_all_one(int m_grid[grid_size][grid_size]) {
	for(int i = 0; i < grid_size; i++) {
		for(int j = 0; j < grid_size; j++) {
			m_grid[i][j] = 1;
		}
	}
}

void set_all_minus_one(int m_grid[grid_size][grid_size]) {
	for(int i = 0; i < grid_size; i++) {
		for(int j = 0; j < grid_size; j++) {
			m_grid[i][j] = -1;
		}
	}
}

void set_all_max(int m_grid[grid_size][grid_size]) {
	int int_max = std::numeric_limits<int>::max();
	for(int i = 0; i < grid_size; i++) {
		for(int j = 0; j < grid_size; j++) {
			m_grid[i][j] = int_max;
		}
	}
}

// has_empty()
TEST(grid_has_empty, Edge_WeakNormal) {
	grid g;
	// Class: One zero
	set_all_one(g.m_grid);
	g.m_grid[0][0] = 0;
	EXPECT_EQ(true, g.has_empty());	// LL
	set_all_one(g.m_grid);
	g.m_grid[0][grid_size-1] = 0;
	EXPECT_EQ(true, g.has_empty());	// LU
	set_all_one(g.m_grid);
	g.m_grid[grid_size-1][0] = 0;
	EXPECT_EQ(true, g.has_empty());	// UL
	set_all_one(g.m_grid);
	g.m_grid[grid_size-1][grid_size-1] = 0;
	EXPECT_EQ(true, g.has_empty());	// UU
	// Class: Two zeros
	set_all_one(g.m_grid);
	g.m_grid[0][0] = 0;
	g.m_grid[grid_size-1][grid_size-1] = 0;
	EXPECT_EQ(true, g.has_empty());	// LL, UU
	set_all_one(g.m_grid);
	g.m_grid[0][grid_size-1] = 0;
	g.m_grid[grid_size-1][0] = 0;
	EXPECT_EQ(true, g.has_empty());	// LU, UL
	// Class: Three zeros
	set_all_one(g.m_grid);
	g.m_grid[0][0] = 0;
	g.m_grid[0][grid_size-1] = 0;
	g.m_grid[grid_size-1][0] = 0;
	EXPECT_EQ(true, g.has_empty());	// LL, LU, UL
	set_all_one(g.m_grid);
	g.m_grid[0][grid_size-1] = 0;
	g.m_grid[grid_size-1][0] = 0;
	g.m_grid[grid_size-1][grid_size-1] = 0;
	EXPECT_EQ(true, g.has_empty());	// LU, UL, UU
}

// get()
TEST(T7, T7) {
}

// set()
TEST(T8, T8) {
}

// largest()
TEST(grid_largest, BoundaryValue_Robust) {
	grid g;
	int int_max = std::numeric_limits<int>::max();
	set_all_minus_one(g.m_grid);
	EXPECT_EQ(-1, g.largest());			// L
	g.reset();
	g.m_grid[grid_size/2][grid_size/2] = 1;
	EXPECT_EQ(1, g.largest());			// V
	set_all_max(g.m_grid);
	EXPECT_EQ(int_max, g.largest());	// U
}

// move()
TEST(T10, T10) {
}

// merge()
TEST(T11, T11) {
}

// random_empty_pos()
TEST(grid_random_empty_pos, Edge_WeakNormal) {
	grid g;
	int x, y;
	int a, b;
	// Class: set empty, check pos
	set_all_one(g.m_grid);
	g.m_grid[0][0] = 0;
	g.random_empty_pos(x, y);
	EXPECT_EQ(0, x);
	EXPECT_EQ(0, y);			// LL
	set_all_one(g.m_grid);
	g.m_grid[0][grid_size-1] = 0;
	g.random_empty_pos(x, y);
	EXPECT_EQ(grid_size-1, x);
	EXPECT_EQ(0, y);			// LU
	set_all_one(g.m_grid);
	g.m_grid[grid_size-1][0] = 0;
	g.random_empty_pos(x, y);
	EXPECT_EQ(0, x);
	EXPECT_EQ(grid_size-1, y);	// UL
	set_all_one(g.m_grid);
	g.m_grid[grid_size-1][grid_size-1] = 0;
	g.random_empty_pos(x, y);
	EXPECT_EQ(grid_size-1, x);
	EXPECT_EQ(grid_size-1, y);	// UU
	// Class: random pos, chech empty
	a = rand_pos();
	b = rand_pos();
	g.m_grid[a][b] = 0;
	g.random_empty_pos(x, y);
	EXPECT_EQ(0, g.m_grid[y][x]);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
