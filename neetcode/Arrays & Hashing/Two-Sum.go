func twoSum(nums []int, target int) []int {
    freq := make(map[int]int)
    for idx, num := range nums {
        freq[num] = idx
    }
    for idx, num := range nums {
        if i, ok := freq[target - num]; ok && idx != i {
            return []int{idx, i}
        }
    }
    return nil
}