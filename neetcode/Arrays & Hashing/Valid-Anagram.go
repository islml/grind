func isAnagram(s string, t string) bool {
    if len(s) != len(t) {
        return false
    }

    freq := make(map[rune]int)
    for _, i := range s {
        freq[i]++;
    }
    for _, i := range t {
        freq[i]--
        if freq[i] < 0 {
            return false
        }
    }
    return true
}