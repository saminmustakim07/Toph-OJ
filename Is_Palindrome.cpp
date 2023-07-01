#include <bits/stdc++.h>

using namespace std;

int main() {
	string S;
	cin >> S;

	string m;
	m = S;

	reverse(m.begin(), m.end());

	(S==m) ? cout << "Yes" << endl : cout << "No" << endl;
	
	return 0;
}