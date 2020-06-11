#include <bits/stdc++.h>

using namespace std;

void decode() {
	long int a, b;
	cin >> a >> b;
	long int n1 = a, n2 = b, tmp;
	long int ans, ans2;
	while(true) {
		tmp = a % b;
		a = b;
		b = tmp;
		if(tmp == 0) {
			ans = a;
			break;
		}
	}
	ans2 = (n1 * n2) / ans;
	cout << ans << " " << ans2 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
