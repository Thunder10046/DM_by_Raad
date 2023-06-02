#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Function to generate all possible combinations of elements from an array
vector<vector<char>> combinations(const vector<char> &arr, int len) {

	// Stores the result
	vector<vector<char>> res;
	
	// Helper lambda function to generate the combinations
	function<void(vector<char>, vector<char>)> fn =
	[&](vector<char> active, vector<char> rest) {
		if (active.size() == len) {
			res.push_back(active);
		} else {
			for (int i = 0; i < rest.size(); i++) {
				auto active_copy = active;
				active_copy.push_back(rest[i]);
				auto rest_copy = vector<char>(rest.begin() + i + 1, rest.end());
				fn(active_copy, rest_copy);
			}
		}
	};
	fn({}, arr);
	return res;
}

// Function to print all possible subsets of a given set (string)
void print_powerset(const string &str) {
	for (int i = 0; i <= str.length(); i++) {
		
		// Generating the combinations
		auto combos = combinations(vector<char>(str.begin(), str.end()), i);
		
		// Displaying each combination
		for (const auto &combo : combos) {
			for (const auto &c : combo) {
				cout << c;
			}
			cout << endl;
		}
	}
}

// Driver code
int main() {
	string str = "abc";
	print_powerset(str);
	return 0;
}
