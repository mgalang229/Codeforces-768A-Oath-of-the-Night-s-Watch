#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the sequence in non-decreasing order
	sort(a.begin(), a.end());
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		// increment 'cnt' if the current element is STRICTLY greater than the smallest element 
		// and if it's STRICTLY smaller than the largest element
		if (a[i] > a[0] && a[i] < a[n - 1]) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}
