#include<iostream>

using namespace std;

// Theorem deleting kth bit
// (part above kth bit) >> 1 | (part below kth bit)
// Lemma
// This operation preserves the value when a leading zero is deleted
// Lemma 2
// The operation only affects the upper part of the number
// Lemma 3
// For maximal possible value, Least number of high bits should be shifted down
// hence deleted bit should be close to MSB
// Lemma 4
// Always delete zeroes over ones if they have same position in the result.

int main() {
	char c;
	char l;
	cin >> l;

	int deleted = 0;
	while (cin >> c) {
		if (deleted == 0 && c == '0') {
			deleted = 1;
			continue;
		}
		cout << l;
		l = c;
	}

	if (deleted == 1) cout << l;
}
