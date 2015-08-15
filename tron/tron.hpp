struct Coord {
	int X, Y;

	static int MaxX;

	Coord (int x, int y) : X{x}, Y{y} {}

	int Index () {
		int result = MaxX*Y + X;
		return result;
	}

	Coord& operator+= (const Coord& a) {
		X += a.X;
		Y += a.Y;
		return *this;
	}

	static const Coord Invalid;
	static const Coord Directions [4];

};

#include <vector>
#include <bitset>
class TronState {
	std::bitset<15*15> bits;

public:
	using score_type = int;
	using player_type = int;
	using action_type = int;

	std::vector<action_type> NextActions () {
		std::vector<action_type> actions;
		// TODO: actually generate possible actions
		return actions;
	}

	void DoAction(int a) {

	}

	bool GameOver () {
		return true;
	}

	void PlayBasicPolicy () {

	}

	score_type Result (player_type player) {
		return 0;
	}
};