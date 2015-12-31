#include <limits>
#include "grid.hpp"
#include "utils.hpp"
#include "gtest/gtest.h"

void set_all_one(int m_grid[grid_size][grid_size]) {
	for(int i = 0; i < grid_size; i++) {
		for(int j = 0; j < grid_size; j++) {
			m_grid[i][j] = 1;
		}
	}
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

// init()
TEST(grid_init, C0_Coverage) { 
	grid G1, G2;

	//into first if
	set_all_one(G1.m_grid);
	G2 = G1;
	G1.init(1);
	EXPECT_EQ(true, isMGridEqual(G1.m_grid, G2.m_grid));

	//not into first if
	G1.reset();
	G1.init(1);
	int count_diff =0;
	for(int i = 0; i < grid_size; ++i) { 
        for(int j = 0; j < grid_size; ++j) {
            if(G1.m_grid[j][i] == 2 || G1.m_grid[j][i] == 4) {
				count_diff++;
			}
        } 
    } 
	EXPECT_EQ(1, count_diff);   

	//into or not into second if
	bool two = false, four = false;
	while(two && four) {
		G1.reset();
		G1.init(1);
		count_diff = 0;
		for(int i = 0; i < grid_size; ++i) {
			for(int j = 0; j < grid_size; ++j) {
				if(G1.m_grid[j][i] == 2 || G1.m_grid[j][i] == 4) {
					if(G1.m_grid[j][i] == 2) {
						two = true;
					}
					else {
						four = true;
					}
					count_diff++;
				} 
			} 
		}
	}   	
    EXPECT_EQ(1, count_diff);                                                            
}

TEST(grid_init, C1_Coverage) { 
	grid G1, G2;

	//into first if
	set_all_one(G1.m_grid);
	G2 = G1;
	G1.init(1);
	EXPECT_EQ(true, isMGridEqual(G1.m_grid, G2.m_grid));

	//not into first if
	G1.reset();
	G1.init(1);
	int count_diff =0;
	for(int i = 0; i < grid_size; ++i) { 
        for(int j = 0; j < grid_size; ++j) {
            if(G1.m_grid[j][i] == 2 || G1.m_grid[j][i] == 4) {
				count_diff++;
			}
        } 
    } 
	EXPECT_EQ(1, count_diff);   

	//into or not into second if
	bool two = false, four = false;
	while(two && four) {
		G1.reset();
		G1.init(1);
		count_diff = 0;
		for(int i = 0; i < grid_size; ++i) {
			for(int j = 0; j < grid_size; ++j) {
				if(G1.m_grid[j][i] == 2 || G1.m_grid[j][i] == 4) {
					if(G1.m_grid[j][i] == 2) {
						two = true;
					}
					else {
						four = true;
					}
					count_diff++;
				} 
			} 
		}
	}   	
    EXPECT_EQ(1, count_diff);                                                            
}

TEST(grid_init, C2_Coverage) { 
	grid G1, G2;

	//into the first if
	set_all_one(G1.m_grid);
	G2 = G1;
	//loop twice
	G1.init(2);
	EXPECT_EQ(true, isMGridEqual(G1.m_grid, G2.m_grid));

	//not into the first if
	G1.reset();
	G1.init(2);
	int count_diff =0;
	for(int i = 0; i < grid_size; ++i) { 
        for(int j = 0; j < grid_size; ++j) {
            if(G1.m_grid[j][i] == 2 || G1.m_grid[j][i] == 4) {
				count_diff++;
			}
        } 
    } 
	EXPECT_EQ(2, count_diff);   

	//into or not into the second if
	bool two = false, four = false;
	while(two && four) {
		G1.reset();
		G1.init(2);
		count_diff = 0;
		for(int i = 0; i < grid_size; ++i) {
			for(int j = 0; j < grid_size; ++j) {
				if(G1.m_grid[j][i] == 2 || G1.m_grid[j][i] == 4) {
					if(G1.m_grid[j][i] == 2) {
						two = true;
					}
					else {
						four = true;
					}
					count_diff++;
				} 
			} 
		}
	}   	
    EXPECT_EQ(2, count_diff);                                                            
}


TEST(grid_init, MCDC_Coverage) { 
	//the same with C1. since the the values of the operands of "AND" are the same, there is no special condition for MCDC to test.
	grid G1, G2;

	//into first if
	set_all_one(G1.m_grid);
	G2 = G1;
	G1.init(1);
	EXPECT_EQ(true, isMGridEqual(G1.m_grid, G2.m_grid));

	//not into first if
	G1.reset();
	G1.init(1);
	int count_diff =0;
	for(int i = 0; i < grid_size; ++i) { 
        for(int j = 0; j < grid_size; ++j) {
            if(G1.m_grid[j][i] == 2 || G1.m_grid[j][i] == 4) {
				count_diff++;
			}
        } 
    } 
	EXPECT_EQ(1, count_diff);   

	//into or not into second if
	bool two = false, four = false;
	while(two && four) {
		G1.reset();
		G1.init(1);
		count_diff = 0;
		for(int i = 0; i < grid_size; ++i) {
			for(int j = 0; j < grid_size; ++j) {
				if(G1.m_grid[j][i] == 2 || G1.m_grid[j][i] == 4) {
					if(G1.m_grid[j][i] == 2) {
						two = true;
					}
					else {
						four = true;
					}
					count_diff++;
				} 
			} 
		}
	}   	
    EXPECT_EQ(1, count_diff);                                                            
}

// action()
TEST(grid_action, C0_Coverage) {
	direction north = direction::NORTH;

	grid G;

	//into if
	setGrid(G.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));
	
	//not into if
	setGrid(G.m_grid,
		2, 2, 2, 2,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));
}

TEST(grid_action, C1_Coverage) {
	direction north = direction::NORTH;

	grid G;

	//into if
	setGrid(G.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));
	
	//not into if
	setGrid(G.m_grid,
		2, 2, 2, 2,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));
}

TEST(grid_action, C2_Coverage) {
	//no loop
	direction north = direction::NORTH;

	grid G;

	//into if
	setGrid(G.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));
	
	//not into if
	setGrid(G.m_grid,
		2, 2, 2, 2,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));
}

TEST(grid_action, MCDC_Coverage) {
	direction north = direction::NORTH;

	grid G;

	//true, true, true
	setGrid(G.m_grid,
		2, 0, 0, 0,
		0, 0, 0, 0,
		2, 0, 0, 0,
		2, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));

	//true, true, false
	setGrid(G.m_grid,
		2, 0, 0, 0,
		0, 0, 0, 0,
		2, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));

	//true, false, true

	//true, false, false
	setGrid(G.m_grid,
		0, 0, 0, 0,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));

	//false, true, true
	setGrid(G.m_grid,
		2, 0, 0, 0,
		2, 0, 0, 0,
		2, 0, 0, 0,
		2, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));

	//false, true, false
	setGrid(G.m_grid,
		2, 0, 0, 0,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));

	//false, false, true  

	//false, false, false
	setGrid(G.m_grid,
		2, 2, 2, 2,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

