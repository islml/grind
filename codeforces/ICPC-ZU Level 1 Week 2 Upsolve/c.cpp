#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define all_r(a) a.rbegin(), a.rend()
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }

void solve() {
  int n, k; cin >> n >> k;
  vector<int> arr(n); cin >> arr;
  int cntr = 0, sultan = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] >= k) {
      sultan += arr[i];
    } else if (arr[i] == 0 && sultan > 0) {
      cntr++;
      sultan--;
    }
  }
  cout << cntr << "\n";
}

int32_t main() {
  fastIO();
  
  int t = 1; cin >> t;
  while (t--) {
    solve();
  }

  //
  return 0;
}