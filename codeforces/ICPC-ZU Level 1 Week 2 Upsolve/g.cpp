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
  string ans = "";
  int bFreq = 0, BFreq = 0;
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == 'b') {
      bFreq++;
    } else if (s[i] == 'B') {
      BFreq++;
    } else {
      if (islower(s[i])) {
        if (bFreq == 0) {
          ans += s[i];
        } else {
          bFreq--;
        }
      } else {
        if (BFreq == 0) {
          ans += s[i];
        } else {
          BFreq--;
        }
      }
    }
  }

  reverse(ans.begin(), ans.end());
  cout << ans << "\n";
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