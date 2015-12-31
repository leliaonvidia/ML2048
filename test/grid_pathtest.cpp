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

// add_actions
TEST(grid_add_actions, C0_Coverage) 
{
	grid gr, gr_test;
	std::vector<direction> actions = {direction::NORTH, direction::SOUTH};

	setGrid(gr.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr.add_actions(actions);
}

TEST(grid_add_actions, C1_Coverage) 
{
	grid gr, gr_test;
	std::vector<direction> actions = {direction::NORTH, direction::SOUTH};

	setGrid(gr.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr.add_actions(actions);
}

TEST(grid_add_actions, C2_Coverage) 
{
	grid gr, gr_test;
	std::vector<direction> actions = {direction::NORTH, direction::SOUTH};

	setGrid(gr.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr.add_actions(actions);
}

TEST(grid_add_actions, MCDC_Coverage) 
{
	grid gr, gr_test;
	std::vector<direction> actions = {direction::NORTH, direction::SOUTH};

	setGrid(gr.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr.add_actions(actions);
}

// print()
TEST(grid_print, C0_Coverage)
{
	grid gr;

	setGrid(gr.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr.print();
}

TEST(grid_print, C1_Coverage)
{
	grid gr;

	setGrid(gr.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr.print();
}

TEST(grid_print, C2_Coverage)
{
	grid gr;

	setGrid(gr.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr.print();
}

TEST(grid_print, MCDC_Coverage)
{
	grid gr;

	setGrid(gr.m_grid,
		0, 2, 2, 2,
		2, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0);
	gr.print();
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

// can_move()
TEST(grid_can_move, C0_Coverage)
{
	grid gr;

	setGrid(gr.m_grid,
		1, 2, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(false, gr.can_move());

	setGrid(gr.m_grid,
		0, 2, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());

	setGrid(gr.m_grid,
		4, 2, 1, 2,
		4, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());

	setGrid(gr.m_grid,
		4, 4, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());
}

TEST(grid_can_move, C1_Coverage)
{
	grid gr;

	setGrid(gr.m_grid,
		1, 2, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(false, gr.can_move());

	setGrid(gr.m_grid,
		0, 2, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());

	setGrid(gr.m_grid,
		4, 2, 1, 2,
		4, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());

	setGrid(gr.m_grid,
		4, 4, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());
}

TEST(grid_can_move, C2_Coverage)
{
	grid gr;

	setGrid(gr.m_grid,
		1, 2, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(false, gr.can_move());

	setGrid(gr.m_grid,
		0, 2, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());

	setGrid(gr.m_grid,
		4, 2, 1, 2,
		4, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());

	setGrid(gr.m_grid,
		4, 4, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());
}

TEST(grid_can_move, MCDC_Coverage)
{
	grid gr;

	setGrid(gr.m_grid,
		1, 2, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(false, gr.can_move());

	setGrid(gr.m_grid,
		0, 2, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());

	setGrid(gr.m_grid,
		4, 2, 1, 2,
		4, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());

	setGrid(gr.m_grid,
		4, 4, 1, 2,
		2, 1, 2, 1,
		1, 2, 1, 2,
		2, 1, 2, 1);
	EXPECT_EQ(true, gr.can_move());
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

// score()
TEST(grid_score, C0_Coverage) 
{
	grid gr;
	
	gr.m_score = 1;
	EXPECT_EQ(1, gr.score());
}

TEST(grid_score, C1_Coverage) 
{
	grid gr;
	
	gr.m_score = 1;
	EXPECT_EQ(1, gr.score());
}

TEST(grid_score, C2_Coverage) 
{
	grid gr;
	
	gr.m_score = 1;
	EXPECT_EQ(1, gr.score());
}

TEST(grid_score, MCDC_Coverage) 
{
	grid gr;
	
	gr.m_score = 1;
	EXPECT_EQ(1, gr.score());
}

// largest()
TEST(grid_largest, C0_Coverage) {
	grid g;
	int int_max = std::numeric_limits<int>::max();

	g.reset();
	g.m_grid[0][0] = 1;						// LL	
	EXPECT_EQ(1, g.largest());	
	g.reset();
	g.m_grid[grid_size-1][grid_size-1] = 1;	// UU
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

// size()
TEST(grid_size, C0_Coverage)
{
	grid gr;
	
	EXPECT_EQ(grid_size, gr.size());
}

TEST(grid_size, C1_Coverage)
{
	grid gr;
	
	EXPECT_EQ(grid_size, gr.size());
}

TEST(grid_size, C2_Coverage)
{
	grid gr;
	
	EXPECT_EQ(grid_size, gr.size());
}

TEST(grid_size, MCDC_Coverage)
{
	grid gr;
	
	EXPECT_EQ(grid_size, gr.size());
}

// actions
TEST(grid_actions, C0_Coverage)
{
	grid gr;
	
	gr.m_actions = std::vector<direction>();
	EXPECT_EQ(std::vector<direction>(), gr.actions());
}

TEST(grid_actions, C1_Coverage)
{
	grid gr;
	
	gr.m_actions = std::vector<direction>();
	EXPECT_EQ(std::vector<direction>(), gr.actions());
}

TEST(grid_actions, C2_Coverage)
{
	grid gr;
	
	gr.m_actions = std::vector<direction>();
	EXPECT_EQ(std::vector<direction>(), gr.actions());
}

TEST(grid_actions, MCDC_Coverage)
{
	grid gr;
	
	gr.m_actions = std::vector<direction>();
	EXPECT_EQ(std::vector<direction>(), gr.actions());
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
	::testing::GTEST_FLAG(filter) = "*.C0_Coverage";
	return RUN_ALL_TESTS();
}

