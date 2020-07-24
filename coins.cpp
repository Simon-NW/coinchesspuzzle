#include <bits/stdc++.h>

using namespace std;

int main() {
	ifstream fin ("coins.in");

	int current_square;
	int current_board_state = 0;
	for (int j = 0; j < 64; ++j)
	{
		fin >> current_square;
		current_board_state ^= current_square * j;
	}
	int expected_square;
	fin >> expected_square;

	cout << "Current board position: " << current_board_state << endl;

	expected_square ^= current_board_state;


	cout << "Coin that needs to be turned: " << expected_square << endl;

	return 0;
}