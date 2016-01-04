#include "grid.hpp"

class grid_mock : public grid
{
private:
	int index;

public:
	grid_mock()
	:	index(0), grid()
	{
		reset();
		grid::set(0, 0, 1);
		grid::set(0, 1, 1);
	}

	bool can_move() const
	{
		if (index == 0)
			return true;
		else if (index == 1)
			return true;
		else
			return false;
	}
	bool action(direction dir)
	{
		if (dir == direction::NORTH) {
			grid::set(0, 0, 2);
			grid::set(0, 1, 0);
			grid::set(1, 0, 1);
		}
		index++;
	}
	unsigned int score() const
	{
		if (index == 0)
			return 0;
		else if (index == 1)
			return 2;
		else
			return 2;
	}
	int largest() const
	{
		if (index == 1)
			return 2;
		else
			return 2048;
	}
	void set(const int &x, const int &y, int value)
	{
		grid::set(x, y, value);
		index++;
	}
};
