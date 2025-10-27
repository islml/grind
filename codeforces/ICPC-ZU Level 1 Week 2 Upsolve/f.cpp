#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define all_r(a) a.rbegin(), a.rend()
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }

void solve() {
  string s; cin >> s;
  int balanced = 0, parts = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') {
      balanced++;
    } else {
      balanced--;
    }

    if (balanced == 0) {
      parts++;
    }
  }

  cout << (parts > 1 ? "YES" : "NO") << "\n";
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