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
	EXPECT_EQ(false, gr.is_outside(1, 1));
}

TEST(grid_is_outside, C1_Coverage) {
	grid gr;
	EXPECT_EQ(false, gr.is_outside(2, 2));
	EXPECT_EQ(true, gr.is_outside(grid_size + 3, 0));
}

TEST(grid_is_outside, C2_Coverage) {
	grid gr;
	EXPECT_EQ(false, gr.is_outside(2, 2));
	EXPECT_EQ(true, gr.is_outside(grid_size + 3, 0));
}

TEST(grid_is_outside, MCDC_Coverage) {
	grid gr;
	EXPECT_EQ(true, gr.is_outside(-1, -1));
	EXPECT_EQ(true, gr.is_outside(-1, 2));
	EXPECT_EQ(true, gr.is_outside(-1, grid_size));
	EXPECT_EQ(true, gr.is_outside(2, -1));
	EXPECT_EQ(false, gr.is_outside(2, 2));
	EXPECT_EQ(true, gr.is_outside(2, grid_size + 1));
	EXPECT_EQ(true, gr.is_outside(grid_size + 3, 0));
	EXPECT_EQ(true, gr.is_outside(grid_size + 3, 2));
	EXPECT_EQ(true, gr.is_outside(grid_size + 3, grid_size));
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

TEST(grid_has_empty, C1_Coverage) {
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

TEST(grid_has_empty, C2_Coverage) {
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

TEST(grid_has_empty, MCDC_Coverage) {
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
TEST(grid_get, C0_Coverage) {
	grid gr;
	for (int i = 0; i < grid_size; i++) {
		for (int j = 0; j < grid_size; j++) {
			gr.m_grid[i][j] = i * 10 + j; // Hash this
		}
	}
	
	EXPECT_EQ(-1, gr.get(1, -1));
	EXPECT_EQ(1, gr.get(1, 0));
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

	gr.set(1, 0, 100);
	gr_test.m_grid[0][1] = 100;
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

	gr.set(1, 0, 100);
	gr_test.m_grid[0][1] = 100;
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

	gr.set(1, 0, 100);
	gr_test.m_grid[0][1] = 100;
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

	gr.set(1, 0, 100);
	gr_test.m_grid[0][1] = 100;
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
}

// largest()
TEST(grid_largest, C0_Coverage) {
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

TEST(grid_largest, C1_Coverage) {
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

TEST(grid_largest, C2_Coverage) {
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

TEST(grid_largest, MCDC_Coverage) {
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
TEST(grid_move, C0_Coverage)
{
	grid gr;
	grid gr_test;

	// C0 added
	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0, 
		0, 0, 0, 0, 
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	EXPECT_EQ(true, gr.move(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
}

TEST(grid_move, C1_Coverage)
{
	grid gr;
	grid gr_test;

	// C0 added
	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0, 
		0, 0, 0, 0, 
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	EXPECT_EQ(true, gr.move(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// C1 added
	setGrid(gr.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0, 
		0, 0, 0, 0, 
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	EXPECT_EQ(false, gr.move(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.move(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
}

TEST(grid_move, C2_Coverage)
{
	grid gr;
	grid gr_test;

	// C0 added
	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0, 
		0, 0, 0, 0, 
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	EXPECT_EQ(true, gr.move(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// C1 added
	setGrid(gr.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0, 
		0, 0, 0, 0, 
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	EXPECT_EQ(false, gr.move(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.move(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// C2 added
	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 1, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
}

TEST(grid_move, MCDC_Coverage)
{
	grid gr;
	grid gr_test;

	// C0 added
	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0, 
		0, 0, 0, 0, 
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	EXPECT_EQ(true, gr.move(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.move(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// C1 added
	setGrid(gr.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 1, 0, 0,
		0, 0, 0, 0, 
		0, 0, 0, 0, 
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.move(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0);
	EXPECT_EQ(false, gr.move(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.move(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.move(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// MCDC added
	// Nothing
}

// merge()
TEST(grid_merge, C0_Coverage)
{
	grid gr;
	grid gr_test;

	// C0 added
	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		2, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		2, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 2, 0, 0,
		0, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		2, 0, 0, 0,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge((direction)-1));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
}
	
TEST(grid_merge, C1_Coverage)
{
	grid gr;
	grid gr_test;

	// C0 added
	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		2, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		2, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 2, 0, 0,
		0, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		2, 0, 0, 0,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge((direction)-1));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// C1 added
	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
}
	
TEST(grid_merge, C2_Coverage)
{
	grid gr;
	grid gr_test;

	// C0 added
	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		2, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		2, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 2, 0, 0,
		0, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		2, 0, 0, 0,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge((direction)-1));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// C1 added
	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));
	
	// C2 added
	// Nothing
}
	
TEST(grid_merge, MCDC_Coverage)
{
	grid gr;
	grid gr_test;

	// C0 added
	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		2, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 0, 0, 0,
		2, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		0, 2, 0, 0,
		0, 2, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		2, 0, 0, 0,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(true, gr.merge(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 1, 0, 0,
		1, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge((direction)-1));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// C1 added
	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::NORTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::SOUTH));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::EAST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	setGrid(gr.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	setGrid(gr_test.m_grid,
		1, 2, 0, 0,
		2, 1, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	EXPECT_EQ(false, gr.merge(direction::WEST));
	EXPECT_EQ(true, isMGridEqual(gr_test.m_grid, gr.m_grid));

	// MCDC added
	// Nothing
}
	
// random_empty_pos()
TEST(grid_random_empty_pos, C0_Coverage) {
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

TEST(grid_random_empty_pos, C1_Coverage) {
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

TEST(grid_random_empty_pos, C2_Coverage) {
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

TEST(grid_random_empty_pos, MCDC_Coverage) {
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

