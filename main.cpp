#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int n, m;
vs input;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n >> m;
	input = vs(n);
	for (auto&& s : input) {
		cin >> s;
	}

	auto emr = int{ 0 };
	for (auto r = 0; r < n; ++r) {
		auto cx = int{ 0 };
		for (auto c = 0; c < m; ++c) {
			if ('X' == input[r][c]) {
				++cx;
			}
		}

		if (0 == cx) {
			++emr;
		}
	}

	auto emc = int{ 0 };
	for (auto c = 0; c < m; ++c) {
		auto rx = int{ 0 };
		for (auto r = 0; r < n; ++r) {
			if ('X' == input[r][c]) {
				++rx;
			}
		}

		if (0 == rx) {
			++emc;
		}
	}

	cout << max(emr, emc);

	return 0;
}