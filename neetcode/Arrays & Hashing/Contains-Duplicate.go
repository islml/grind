func containsDuplicate(nums []int) bool {
    freq := make(map[int]int)
    for i := 0; i < len(nums); i++ {
        freq[nums[i]]++
        if freq[nums[i]] > 1 {
            return true
        }
    }
    return false
}