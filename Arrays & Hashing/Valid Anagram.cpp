class Solution {
public:
  bool isAnagram(string s, string t) {
    map<char, int> smap, tmap;
    for (auto i : s) {
      smap[i]++;
    }
    for (auto i : t) {
      tmap[i]++;
    }
    bool ok = true;
    for (auto i : s) {
      if (smap[i] != tmap[i]) {
        ok = false;
      }
    }
    for (auto i : t) {
      if (tmap[i] != smap[i]) {
        ok = false;
      }
    }
    return ok;
  }
};