#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define all_r(a) a.rbegin(), a.rend()
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }

void solve() {
  int n; cin >> n;
  vector<int> arr(n); cin >> arr;
  sort(all(arr));
  int q; cin >> q;
  while (q--) {
    int m; cin >> m;
    cout << upper_bound(all(arr), m) - arr.begin() << "\n";
  }
}

int32_t main() {
  fastIO();
  
  int t = 1; // cin >> t;
  while (t--) {
    solve();
  }

  //
  return 0;
}