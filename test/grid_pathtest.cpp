#include <limits>
#include "grid.hpp"
#include "utils.hpp"
#include "gtest/gtest.h"

// reset()
TEST(grid_reset, C0_Coverage) {
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

TEST(grid_reset, C1_Coverage) {
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

TEST(grid_reset, C2_Coverage) {
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

TEST(grid_reset, MCDC_Coverage) {
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
TEST(grid_init, C0_Coverage) { 
	grid G;
	G.reset();

	//count = 1
	G.init(1);
	int count_diff =0;
	for(int i = 0; i < grid_size; ++i) { 
        for(int j = 0; j < grid_size; ++j) {
            if(G.m_grid[j][i] == 2 || G.m_grid[j][i] == 4) {
				count_diff++;
			}
        } 
    } 
	EXPECT_EQ(1, count_diff);   

	//count = 2
	G.reset();
	count_diff = 0;
	G.init(2);
    for(int i = 0; i < grid_size; ++i) {
        for(int j = 0; j < grid_size; ++j) {
            if(G.m_grid[j][i] == 2 || G.m_grid[j][i] == 4) {
                count_diff++;
            } 
        } 
    }   
    EXPECT_EQ(2, count_diff);                                                            
}

TEST(grid_init, C1_Coverage) { 
	grid G;
	G.reset();

	//count = 1
	G.init(1);
	int count_diff =0;
	for(int i = 0; i < grid_size; ++i) { 
        for(int j = 0; j < grid_size; ++j) {
            if(G.m_grid[j][i] == 2 || G.m_grid[j][i] == 4) {
				count_diff++;
			}
        } 
    } 
	EXPECT_EQ(1, count_diff);   

	//count = 2
	G.reset();
	count_diff = 0;
	G.init(2);
    for(int i = 0; i < grid_size; ++i) {
        for(int j = 0; j < grid_size; ++j) {
            if(G.m_grid[j][i] == 2 || G.m_grid[j][i] == 4) {
                count_diff++;
            } 
        } 
    }   
    EXPECT_EQ(2, count_diff);                                                            
}

TEST(grid_init, C2_Coverage) { 
	grid G;
	G.reset();

	//count = 1
	G.init(1);
	int count_diff =0;
	for(int i = 0; i < grid_size; ++i) { 
        for(int j = 0; j < grid_size; ++j) {
            if(G.m_grid[j][i] == 2 || G.m_grid[j][i] == 4) {
				count_diff++;
			}
        } 
    } 
	EXPECT_EQ(1, count_diff);   

	//count = 2
	G.reset();
	count_diff = 0;
	G.init(2);
    for(int i = 0; i < grid_size; ++i) {
        for(int j = 0; j < grid_size; ++j) {
            if(G.m_grid[j][i] == 2 || G.m_grid[j][i] == 4) {
                count_diff++;
            } 
        } 
    }   
    EXPECT_EQ(2, count_diff);                                                            
}

TEST(grid_init, MCDC_Coverage) { 
	grid G;
	G.reset();

	//count = 1
	G.init(1);
	int count_diff =0;
	for(int i = 0; i < grid_size; ++i) { 
        for(int j = 0; j < grid_size; ++j) {
            if(G.m_grid[j][i] == 2 || G.m_grid[j][i] == 4) {
				count_diff++;
			}
        } 
    } 
	EXPECT_EQ(1, count_diff);   

	//count = 2
	G.reset();
	count_diff = 0;
	G.init(2);
    for(int i = 0; i < grid_size; ++i) {
        for(int j = 0; j < grid_size; ++j) {
            if(G.m_grid[j][i] == 2 || G.m_grid[j][i] == 4) {
                count_diff++;
            } 
        } 
    }   
    EXPECT_EQ(2, count_diff);                                                            
}

// is_outside()
TEST(grid_is_outside, C0_Coverage) {
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

TEST(grid_is_outside, C1_Coverage) {
	grid gr;
	EXPECT_EQ(false, gr.is_outside(2, 2));
	EXPECT_EQ(true, gr.is_outside(grid_size + 3, 0));
}

TEST(grid_is_outside, C2_Coverage) {
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

TEST(grid_is_outside, MCDC_Coverage) {
	grid gr;
	EXPECT_EQ(false, gr.is_outside(2, 2));
	EXPECT_EQ(true, gr.is_outside(grid_size + 3, 0));
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

// action()
TEST(grid_action, C0_Coverage) {

	direction north = direction::NORTH;

	grid G;

	// Empty
	setGrid(G.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));
	
	//Not Empty nor doing action
	setGrid(G.m_grid,
		2, 2, 2, 2,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));

	//Can move at first
	setGrid(G.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));

	
	//Can't move at first but can merge
	setGrid(G.m_grid,
		2, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));
}

TEST(grid_action, C1_Coverage) {

	direction north = direction::NORTH;

	grid G;

	// Empty
	setGrid(G.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));
	
	//Not Empty nor doing action
	setGrid(G.m_grid,
		2, 2, 2, 2,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));

	//Can move at first
	setGrid(G.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));
	
	//Can't move at first but can merge
	setGrid(G.m_grid,
		2, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));
}

TEST(grid_action, C2_Coverage) {

	direction north = direction::NORTH;

	grid G;

	// Empty
	setGrid(G.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));
	
	//Not Empty nor doing action
	setGrid(G.m_grid,
		2, 2, 2, 2,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));

	//Can move at first
	setGrid(G.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));
	
	//Can't move at first but can merge
	setGrid(G.m_grid,
		2, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));
}

TEST(grid_action, MCDC_Coverage) {

	direction north = direction::NORTH;

	grid G;

	// Empty
	setGrid(G.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));
	
	//Not Empty nor doing action
	setGrid(G.m_grid,
		2, 2, 2, 2,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, G.action(north));

	//Can move at first
	setGrid(G.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));

	//Can't move at first but can merge
	setGrid(G.m_grid,
		2, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, G.action(north));
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
TEST(grid_has_empty, C0_Coverage) {
	grid g;

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
	set_all_one(g.m_grid);
	EXPECT_EQ(false, g.has_empty());
}

TEST(grid_has_empty, C1_Coverage) {
	// Just the same as C0 since every branch is traversed.
	grid g;

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
	set_all_one(g.m_grid);
	EXPECT_EQ(false, g.has_empty());
}

TEST(grid_has_empty, C2_Coverage) {
	grid g;
	
	set_all_one(g.m_grid);
	g.m_grid[1][1] = 0;
	EXPECT_EQ(true, g.has_empty());	// LL
	set_all_one(g.m_grid);
	g.m_grid[1][grid_size-1] = 0;
	EXPECT_EQ(true, g.has_empty());	// LU
	set_all_one(g.m_grid);
	g.m_grid[grid_size-1][1] = 0;
	EXPECT_EQ(true, g.has_empty());	// UL
	set_all_one(g.m_grid);
	g.m_grid[grid_size-1][grid_size-1] = 0;
	EXPECT_EQ(true, g.has_empty());	// UU
	set_all_one(g.m_grid);
	EXPECT_EQ(false, g.has_empty());
}

TEST(grid_has_empty, MCDC_Coverage) {
	// Just the same as C1 since there are only two conditions.
	grid g;

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
	set_all_one(g.m_grid);
	EXPECT_EQ(false, g.has_empty());
}

// get()
TEST(grid_get, C0_Coverage) {
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

TEST(grid_get, C1_Coverage) {
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

TEST(grid_get, C2_Coverage) {
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

TEST(grid_get, MCDC_Coverage) {
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
TEST(grid_set, C0_Coverage) {
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

TEST(grid_set, C1_Coverage) {
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

TEST(grid_set, C2_Coverage) {
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

TEST(grid_set, MCDC_Coverage) {
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
TEST(grid_largest, C0_Coverage) {
	grid g;
	int int_max = std::numeric_limits<int>::max();

	g.reset();
	g.m_grid[0][0] = 1;			
	EXPECT_EQ(1, g.largest());	

	// All values are the same
	set_all_minus_one(g.m_grid);
	EXPECT_EQ(-1, g.largest());			// L
	g.reset();
	EXPECT_EQ(0, g.largest());			// L
	set_all_max(g.m_grid);
	EXPECT_EQ(int_max, g.largest());	// U
}

TEST(grid_largest, C1_Coverage) {
	// Just the same C0 since every branch is traversed.
	grid g;
	int int_max = std::numeric_limits<int>::max();

	g.reset();
	g.m_grid[0][0] = 1;			
	EXPECT_EQ(1, g.largest());	

	// All values are the same
	set_all_minus_one(g.m_grid);
	EXPECT_EQ(-1, g.largest());			// L
	g.reset();
	EXPECT_EQ(0, g.largest());			// L
	set_all_max(g.m_grid);
	EXPECT_EQ(int_max, g.largest());	// U
}

TEST(grid_largest, C2_Coverage) {
	// Just the same C0 and C1 since grid_size > 1.
	grid g;
	int int_max = std::numeric_limits<int>::max();

	g.reset();
	g.m_grid[0][0] = 1;			
	EXPECT_EQ(1, g.largest());	

	// All values are the same
	set_all_minus_one(g.m_grid);
	EXPECT_EQ(-1, g.largest());			// L
	g.reset();
	EXPECT_EQ(0, g.largest());			// L
	set_all_max(g.m_grid);
	EXPECT_EQ(int_max, g.largest());	// U
}

TEST(grid_largest, MCDC_Coverage) {
	// Just the same as C1 since there are only two conditions.
	grid g;
	int int_max = std::numeric_limits<int>::max();

	g.reset();
	g.m_grid[0][0] = 1;			
	EXPECT_EQ(1, g.largest());	

	// All values are the same
	set_all_minus_one(g.m_grid);
	EXPECT_EQ(-1, g.largest());			// L
	g.reset();
	EXPECT_EQ(0, g.largest());			// L
	set_all_max(g.m_grid);
	EXPECT_EQ(int_max, g.largest());	// U
}

// move()
TEST(grid_move, C0_Coverage)
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

TEST(grid_move, C1_Coverage)
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

TEST(grid_move, C2_Coverage)
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

TEST(grid_move, MCDC_Coverage)
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
TEST(grid_merge, C0_Coverage)
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
	
TEST(grid_merge, C1_Coverage)
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
	
TEST(grid_merge, C2_Coverage)
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
	
TEST(grid_merge, MCDC_Coverage)
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
TEST(grid_random_empty_pos, C0_Coverage) {
	grid g;
	int x, y;
	
	x = y = -1;
	set_all_one(g.m_grid);
	g.random_empty_pos(x, y);
	EXPECT_EQ(-1, x);
	EXPECT_EQ(-1, y);

	x = y = -1;
	set_all_one(g.m_grid);
	g.m_grid[0][0] = 0;
	g.random_empty_pos(x, y);
	EXPECT_EQ(0, x);
	EXPECT_EQ(0, y);
}

TEST(grid_random_empty_pos, C1_Coverage) {
	// Just the same as C0 since every branch is traversed.
	grid g;
	int x, y;
	
	x = y = -1;
	set_all_one(g.m_grid);
	g.random_empty_pos(x, y);
	EXPECT_EQ(-1, x);
	EXPECT_EQ(-1, y);

	x = y = -1;
	set_all_one(g.m_grid);
	g.m_grid[0][0] = 0;
	g.random_empty_pos(x, y);
	EXPECT_EQ(0, x);
	EXPECT_EQ(0, y);
}

TEST(grid_random_empty_pos, C2_Coverage) {
	// Just the same as C0 and C1
	// since the total runs of loop is randomly decided.
	grid g;
	int x, y;
	
	x = y = -1;
	set_all_one(g.m_grid);
	g.random_empty_pos(x, y);
	EXPECT_EQ(-1, x);
	EXPECT_EQ(-1, y);

	x = y = -1;
	set_all_one(g.m_grid);
	g.m_grid[0][0] = 0;
	g.random_empty_pos(x, y);
	EXPECT_EQ(0, x);
	EXPECT_EQ(0, y);
}

TEST(grid_random_empty_pos, MCDC_Coverage) {
	// Just the same as C1 since there are only two conditions.
	grid g;
	int x, y;
	
	x = y = -1;
	set_all_one(g.m_grid);
	g.random_empty_pos(x, y);
	EXPECT_EQ(-1, x);
	EXPECT_EQ(-1, y);

	x = y = -1;
	set_all_one(g.m_grid);
	g.m_grid[0][0] = 0;
	g.random_empty_pos(x, y);
	EXPECT_EQ(0, x);
	EXPECT_EQ(0, y);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

