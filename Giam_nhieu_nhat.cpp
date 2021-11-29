#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/35/151

using namespace std;

string n, ans = "";

void process() {
	long long mi = 1e15;
	if (n.size() == 1) {
		cout << 0;
		return;
	}
	for (int i = 0; i < n.size(); ++i) {
		string stmp = "";
		if (i == 0) {
			stmp = n.substr(1, n.size() - 1);
		}
		else if (i == n.size() - 1) {
			stmp = (n.substr(0, n.size() - 1));
		}
		else {
			stmp = (n.substr(0, i) + n.substr(i + 1, n.size() - i));
		}
		if (mi > stoll(stmp)) {
			mi = stoll(stmp);
			ans = stmp;
		}

	}
	cout << ans;
}

int main() {
	cin >> n;
	process();
	return 0;
}