#include "grid.hpp"
#include "utils.hpp"
#include "gtest/gtest.h"


// init()
TEST(grid_init, test) { 
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

// action()
TEST(grid_action, test) {
	grid G, temp;
	G.init(2);
	temp = G;

	direction north = direction::NORTH;
	direction south = direction::SOUTH;
	direction east = direction::EAST;
	direction west = direction::WEST;

	//north
	if(temp.move(north) || temp.merge(north) || temp.move(north)) {
		temp.init(round_slot_count);
		temp.m_actions.push_back(north);
		EXPECT_EQ(true, G.action(north));
	}
	else {
		EXPECT_EQ(false, G.action(north));
	}
	//south
	if(temp.move(south) || temp.merge(south) || temp.move(south)) {
		temp.init(round_slot_count);
        temp.m_actions.pushback(north);
        EXPECT_EQ(true, G.action(north));   
    }
	else {
		EXPECT_EQ(false, G.action(south));
	}
	//east
	if(temp.move(east) || temp.merge(east) || temp.move(east)) {
        temp.init(round_slot_count);
        temp.m_actions.pushback(east);
        EXPECT_EQ(true, G.action(east));
    }
	else {
		EXPECT_EQ(false, G.action(east));
	}
	//west
	if(temp.move(west) || temp.merge(west) || temp.move(west)) {
        temp.init(round_slot_count);
        temp.m_actions.pushback(west);
        EXPECT_EQ(true, G.action(west));
    }
	else {
		EXPECT_EQ(false, G.action(west));
	}
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
