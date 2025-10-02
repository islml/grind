func sortString(s string) string {
    runes := []rune(s)
    sort.Slice(runes, func(i, j int) bool {
        return runes[i] < runes[j]
    })
    return string(runes)
}

func groupAnagrams(strs []string) [][]string {
    res := make(map[string][]string)

    for _, s := range strs {
        res[sortString(s)] = append(res[sortString(s)], s)
    }

    finRes := make([][]string, 0, len(res))
    for _, v := range res {
        finRes = append(finRes, v)
    }
    return finRes
}