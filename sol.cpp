#include <bits/stdc++.h>

using namespace std;

void ProperStrings(string s) {
	for (int i = 0; i < (int) s.size(); i++) {
		if (islower(s[i])) {
			cout << (char) toupper(s[i]);
		} else {
			cout << (char) tolower(s[i]);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int cnt = 0;
	int cnt2 = 0;
	int id = 0;
	for (int i = 0; i < (int) s.size(); i++) {
		if (islower(s[i])) {
			cnt++;
			id = i;
		} else if (isupper(s[i])) {
			cnt2++;
		}
	}
	if (cnt == 1 && id == 0) {
		ProperStrings(s);
	} else if (cnt2 == (int) s.size()) {
		ProperStrings(s);
	} else {
		cout << s;
	}
	cout << '\n';
	return 0;
}
