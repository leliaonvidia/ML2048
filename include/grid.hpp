#ifndef __2048_GRID__
#define __2048_GRID__

// A very rough C++ version for the 2048 game
//
// Author: Olafur Waage / @olafurw
// olafurw@gmail.com
//
// Under the Apache License
// If you have any fun with this, please let me know, I would love to hear from you.

#include "utils.hpp"
#include <vector>
#include "gtest/gtest_prod.h"

class grid
{
public:
    // Clear the board and add 2 numbers
    grid();

    // Sets all values to 0
    void reset();

    // Applies the actions to the grid
    void add_actions(std::vector<direction>& actions);

    void print();

    // An action is a move, merge and then move the merged pieces and then add an new piece
    bool action(direction dir);

    // Returns true if there is an available move
    bool can_move() const;

    // Returns true if there is an empty slots anywhere
    bool has_empty() const;

    // Get the value from x,y
    inline int get(const int& x, const int& y) const;
    
    // Set a value to x,y
    void set(const int& x, const int& y, const int value);

    // Sum the score
    unsigned int score() const;

    // Find the largest
    int largest() const;//

    // Returns the actions the grid has performed
    std::vector<direction> actions() const;

    // Returns the size of the grid
    static int size();

private:
	// For test
	FRIEND_TEST(grid_reset, test);
	FRIEND_TEST(grid_is_outside, boundaryTest);
	FRIEND_TEST(grid_is_outside, equivalentClass);
	FRIEND_TEST(grid_is_outside, edgeTest);
	FRIEND_TEST(grid_get, boundaryTest);
	FRIEND_TEST(grid_set, boundaryTest);
	FRIEND_TEST(grid_move, equivalenceClass);
	FRIEND_TEST(grid_merge, equivalenceClass);
	FRIEND_TEST(grid_init, Edge_WeakNormal);
	FRIEND_TEST(grid_action, EquivalenceClass_WeakNormal);
	FRIEND_TEST(grid_has_empty, Edge_WeakNormal);
	FRIEND_TEST(grid_largest, BoundaryValue_Robust);
	FRIEND_TEST(grid_random_empty_pos, Edge_WeakNormal);

	FRIEND_TEST(grid_reset, C0_Coverage);
	FRIEND_TEST(grid_reset, C1_Coverage);
	FRIEND_TEST(grid_reset, C2_Coverage);
	FRIEND_TEST(grid_reset, MCDC_Coverage);
	FRIEND_TEST(grid_add_actions, C0_Coverage);
	FRIEND_TEST(grid_add_actions, C1_Coverage);
	FRIEND_TEST(grid_add_actions, C2_Coverage);
	FRIEND_TEST(grid_add_actions, MCDC_Coverage);
	FRIEND_TEST(grid_print, C0_Coverage);
	FRIEND_TEST(grid_print, C1_Coverage);
	FRIEND_TEST(grid_print, C2_Coverage);
	FRIEND_TEST(grid_print, MCDC_Coverage);
	FRIEND_TEST(grid_is_outside, C0_Coverage);
	FRIEND_TEST(grid_is_outside, C1_Coverage);
	FRIEND_TEST(grid_is_outside, C2_Coverage);
	FRIEND_TEST(grid_is_outside, MCDC_Coverage);
	FRIEND_TEST(grid_get, C0_Coverage);
	FRIEND_TEST(grid_get, C1_Coverage);
	FRIEND_TEST(grid_get, C2_Coverage);
	FRIEND_TEST(grid_get, MCDC_Coverage);
	FRIEND_TEST(grid_set, C0_Coverage);
	FRIEND_TEST(grid_set, C1_Coverage);
	FRIEND_TEST(grid_set, C2_Coverage);
	FRIEND_TEST(grid_set, MCDC_Coverage);
	FRIEND_TEST(grid_move, C0_Coverage);
	FRIEND_TEST(grid_move, C1_Coverage);
	FRIEND_TEST(grid_move, C2_Coverage);
	FRIEND_TEST(grid_move, MCDC_Coverage);
	FRIEND_TEST(grid_merge, C0_Coverage);
	FRIEND_TEST(grid_merge, C1_Coverage);
	FRIEND_TEST(grid_merge, C2_Coverage);
	FRIEND_TEST(grid_merge, MCDC_Coverage);
	FRIEND_TEST(grid_init, C0_Coverage);
	FRIEND_TEST(grid_init, C1_Coverage);
	FRIEND_TEST(grid_init, C2_Coverage);
	FRIEND_TEST(grid_init, MCDC_Coverage);
	FRIEND_TEST(grid_action, C0_Coverage);
	FRIEND_TEST(grid_action, C1_Coverage);
	FRIEND_TEST(grid_action, C2_Coverage);
	FRIEND_TEST(grid_action, MCDC_Coverage);
	FRIEND_TEST(grid_can_move, C0_Coverage);
	FRIEND_TEST(grid_can_move, C1_Coverage);
	FRIEND_TEST(grid_can_move, C2_Coverage);
	FRIEND_TEST(grid_can_move, MCDC_Coverage);
	FRIEND_TEST(grid_can_move, C0_Coverage);
	FRIEND_TEST(grid_can_move, C1_Coverage);
	FRIEND_TEST(grid_can_move, C2_Coverage);
	FRIEND_TEST(grid_can_move, MCDC_Coverage);
	FRIEND_TEST(grid_has_empty, C0_Coverage);
	FRIEND_TEST(grid_has_empty, C1_Coverage);
	FRIEND_TEST(grid_has_empty, C2_Coverage);
	FRIEND_TEST(grid_has_empty, MCDC_Coverage);
	FRIEND_TEST(grid_largest, C0_Coverage);
	FRIEND_TEST(grid_largest, C1_Coverage);
	FRIEND_TEST(grid_largest, C2_Coverage);
	FRIEND_TEST(grid_largest, MCDC_Coverage);
	FRIEND_TEST(grid_score, C0_Coverage);
	FRIEND_TEST(grid_score, C1_Coverage);
	FRIEND_TEST(grid_score, C2_Coverage);
	FRIEND_TEST(grid_score, MCDC_Coverage);
	FRIEND_TEST(grid_actions, C0_Coverage);
	FRIEND_TEST(grid_actions, C1_Coverage);
	FRIEND_TEST(grid_actions, C2_Coverage);
	FRIEND_TEST(grid_actions, MCDC_Coverage);
	FRIEND_TEST(grid_random_empty_pos, C0_Coverage);
	FRIEND_TEST(grid_random_empty_pos, C1_Coverage);
	FRIEND_TEST(grid_random_empty_pos, C2_Coverage);
	FRIEND_TEST(grid_random_empty_pos, MCDC_Coverage);

    // Sets count values of 2 onto the board in an empty slot
    void init(int count);

    // Moves the tiles in the direction
    // TODO: Refactor, works for now
    bool move(direction dir);

    // Goes through and merges in that direction
    bool merge(direction dir);
    
    // Returns true if the value is outside
    inline bool is_outside(const int x, const int y) const;//

    // Sets the x and y with a random empty position
    void random_empty_pos(int& x, int& y);

    int m_grid[grid_size][grid_size];

    std::vector<direction> m_actions;//

    unsigned int m_score;
};

#endif
