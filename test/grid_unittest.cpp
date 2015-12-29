#include "utils.hpp"
#include "grid.hpp"
#include "gtest/gtest.h"

// reset()
TEST(grid_reset, test) {
	grid gr;
	for (int i = 0; i < grid_size; i++) {
		for (int j = 0; j < grid_size; j++) {
			gr.m_grid[i][j] = rand();
		}
	}
	gr.reset();
	for (int i = 0; i < grid_size; i++) {
		for (int j = 0; j < grid_size; j++) {
			EXPECT_EQ(0, gr.m_grid[i][j]);
		}
	}
}

// init()
                                                                  


// print()
                                                                  


// is_outside()
TEST(grid_is_outside, boundaryTest) {
	grid gr;
	EXPECT_EQ(true, gr.is_outside(1, -1));
	EXPECT_EQ(false, gr.is_outside(1, 0));
	EXPECT_EQ(false, gr.is_outside(1, 1));
	EXPECT_EQ(false, gr.is_outside(1, grid_size - 2));
	EXPECT_EQ(false, gr.is_outside(1, grid_size - 1));
	EXPECT_EQ(true, gr.is_outside(1, grid_size));
	EXPECT_EQ(true, gr.is_outside(-1, 1));
	EXPECT_EQ(false, gr.is_outside(0, 1));
	EXPECT_EQ(false, gr.is_outside(1, 1));
	EXPECT_EQ(false, gr.is_outside(grid_size - 2, 1));
	EXPECT_EQ(false, gr.is_outside(grid_size - 1, 1));
	EXPECT_EQ(true, gr.is_outside(grid_size, 1));
}

TEST(grid_is_outside, equivalentClass) {
	grid gr;
	EXPECT_EQ(false, gr.is_outside(2, 2));
	EXPECT_EQ(true, gr.is_outside(grid_size + 3, 0));
}

TEST(grid_is_outside, edgeTest) {
	grid gr;
	EXPECT_EQ(true, gr.is_outside(1, -1));
	EXPECT_EQ(false, gr.is_outside(1, 0));
	EXPECT_EQ(false, gr.is_outside(1, 1));
	EXPECT_EQ(false, gr.is_outside(1, grid_size - 2));
	EXPECT_EQ(false, gr.is_outside(1, grid_size - 1));
	EXPECT_EQ(true, gr.is_outside(1, grid_size));
	EXPECT_EQ(true, gr.is_outside(-1, 1));
	EXPECT_EQ(false, gr.is_outside(0, 1));
	EXPECT_EQ(false, gr.is_outside(1, 1));
	EXPECT_EQ(false, gr.is_outside(grid_size - 2, 1));
	EXPECT_EQ(false, gr.is_outside(grid_size - 1, 1));
	EXPECT_EQ(true, gr.is_outside(grid_size, 1));
}

// action()



// has_empty()



// get()
TEST(grid_get, boundaryTest) {
	grid gr;
	for (int i = 0; i < grid_size; i++) {
		for (int j = 0; j < grid_size; j++) {
			gr.m_grid[i][j] = i * 10 + j; // Hash this
		}
	}
	
	EXPECT_EQ(-1, gr.get(1, -1));
	EXPECT_EQ(1, gr.get(1, 0));
	EXPECT_EQ(11, gr.get(1, 1));
	EXPECT_EQ((grid_size - 2) * 10 + 1, gr.get(1, grid_size - 2));
	EXPECT_EQ((grid_size - 1) * 10 + 1, gr.get(1, grid_size - 1));
	EXPECT_EQ(-1, gr.get(1, grid_size));
	EXPECT_EQ(-1, gr.get(-1, 1));
	EXPECT_EQ(10, gr.get(0, 1));
	EXPECT_EQ(10 + (grid_size - 2), gr.get(grid_size - 2, 1));
	EXPECT_EQ(10 + (grid_size - 1), gr.get(grid_size - 1, 1));
	EXPECT_EQ(-1, gr.get(grid_size, 1));
}

bool isMGridEqual(int m_grid1[][grid_size], int m_grid2[][grid_size])
{
	for (int i = 0; i < grid_size; i++) {
		for (int j = 0; j < grid_size; j++) {
			if (m_grid1[i][j] != m_grid2[i][j])
				return false;
		}
	}
	return true;
}

// set()
TEST(grid_set, boundaryTest) {
	grid gr;
	for (int i = 0; i < grid_size; i++) {
		for (int j = 0; j < grid_size; j++) {
			gr.m_grid[i][j] = i * 10 + j; // Hash this
		}
	}
	grid gr_test = gr;

	gr.set(1, -1, 100);
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr.set(1, grid_size, 100);
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr.set(-1, 1, 100);
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr.set(grid_size, 1, 100);
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr.set(1, 0, 100);
	gr_test.m_grid[0][1] = 100;
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr.set(1, 1, 100);
	gr_test.m_grid[1][1] = 100;
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr.set(1, grid_size - 2, 100);
	gr_test.m_grid[grid_size - 2][1] = 100;
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr.set(1, grid_size - 1, 100);
	gr_test.m_grid[grid_size - 1][1] = 100;
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr.set(0, 1, 100);
	gr_test.m_grid[1][0] = 100;
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr_test.m_grid[1][grid_size - 2] = 100;
	gr.set(grid_size - 2, 1, 100);
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	gr.set(grid_size - 1, 1, 100);
	gr_test.m_grid[1][grid_size - 1] = 100;
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
}

// largest()

void setGrid(int grid[][grid_size],
	int n0, int n1, int n2, int n3,
	int n4, int n5, int n6, int n7,
	int n8, int n9, int n10, int n11,
	int n12, int n13, int n14, int n15)
{
	grid[0][0] = n0;
	grid[0][1] = n1;
	grid[0][2] = n2;
	grid[0][3] = n3;
	grid[1][0] = n4;
	grid[1][1] = n5;
	grid[1][2] = n6;
	grid[1][3] = n7;
	grid[2][0] = n8;
	grid[2][1] = n9;
	grid[2][2] = n10;
	grid[2][3] = n11;
	grid[3][0] = n12;
	grid[3][1] = n13;
	grid[3][2] = n14;
	grid[3][3] = n15;
}

// move()
TEST(grid_move, equivalenceClass)
{
	grid gr;
	grid gr_test;

	// Empty
	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr_test = gr;
	EXPECT_EQ(false, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	EXPECT_EQ(false, gr.move(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	EXPECT_EQ(false, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	EXPECT_EQ(false, gr.move(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// Not empty, but cannot move
	setGrid(gr.m_grid,
		1, 2, 4, 8,
		0, 0, 0, 2,
		8, 4, 2, 1,
		0, 0, 0, 1);
	gr_test = gr;
	EXPECT_EQ(false, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// 1 move in a row
	setGrid(gr.m_grid,
		0, 512, 0, 512,
		0, 0, 2, 0,
		16, 0, 16, 8,
		1, 0, 0, 1);
	setGrid(gr_test.m_grid,
		0, 0, 512, 512,
		0, 0, 0, 2,
		0, 16, 16, 8,
		0, 0, 1, 1);
	EXPECT_EQ(true, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	
	// 2 moves in a row
	setGrid(gr.m_grid,
		0, 2, 0, 0,
		1, 0, 4, 8,
		0, 2, 0, 8,
		1, 2, 4, 8);
	setGrid(gr_test.m_grid,
		1, 2, 4, 8,
		1, 2, 4, 8,
		0, 2, 0, 8,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	
	// 3 moves in a row
	setGrid(gr.m_grid,
		1024, 2, 4, 0,
		1, 0, 4, 8,
		4, 2, 4, 0,
		1, 2, 0, 8);
	setGrid(gr_test.m_grid,
		0, 1024, 2, 4,
		0, 1, 4, 8,
		0, 4, 2, 4,
		0, 1, 2, 8);
	EXPECT_EQ(true, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	
}

// merge()
TEST(grid_merge, equivalenceClass)
{
	grid gr;
	grid gr_test;

	// Empty
	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr_test = gr;
	EXPECT_EQ(false, gr.merge(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	EXPECT_EQ(false, gr.merge(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	EXPECT_EQ(false, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	EXPECT_EQ(false, gr.merge(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// Not empty, but cannot merge
	setGrid(gr.m_grid,
		0, 2, 0, 8,
		0, 0, 0, 2,
		8, 0, 2, 1,
		0, 2, 0, 1);
	gr_test = gr;
	EXPECT_EQ(false, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// 1 merge in a row
	setGrid(gr.m_grid,
		0, 0, 512, 512,
		0, 4, 2, 2,
		16, 8, 16, 16,
		0, 1, 4, 1);
	setGrid(gr_test.m_grid,
		0, 0, 0, 1024,
		0, 4, 0, 4,
		16, 8, 0, 32,
		0, 1, 4, 1);
	EXPECT_EQ(true, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	
	// 2 merges in a row
	setGrid(gr.m_grid,
		1, 2, 4, 8,
		1, 2, 4, 8,
		1, 2, 4, 8,
		1, 2, 4, 8);
	setGrid(gr_test.m_grid,
		2, 4, 8, 16,
		0, 0, 0, 0,
		2, 4, 8, 16,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	
}



// random_empty_pos()



int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
