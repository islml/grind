type Solution struct{}

func (s *Solution) Encode(strs []string) string {
    encodedString := ""

    for _, str := range strs {
        encodedString += strconv.Itoa(len(str)) + "#" + str
    }

    return encodedString
}

func (s *Solution) Decode(strs string) []string {
    decodedStrings := []string{}

    for i := 0; i < len(strs); {
        j := i
        for strs[j] != '#' {
            j++
        }
        length, _ := strconv.Atoi(strs[i:j])
        decodedStrings = append(decodedStrings, strs[j + 1 : j + 1 + length])
        i = j + 1 + length
    }

    return decodedStrings
}