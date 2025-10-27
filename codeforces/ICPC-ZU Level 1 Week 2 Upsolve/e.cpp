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
  
  vector<int> freq(n + 1);
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  vector<int> freq2(n + 1);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (freq[j] >= i) {
        freq2[i]++;
      }
    }
  }

  int maximum = 0;
  for (int i = 1; i <= n; i++) {
    maximum = max(maximum, i * freq2[i]);
  }
  cout << maximum << "\n";
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