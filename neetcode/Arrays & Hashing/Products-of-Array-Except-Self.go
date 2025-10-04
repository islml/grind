func productExceptSelf(nums []int) []int {
    n := len(nums)
    pref, suff := make([]int, n), make([]int, n)
    for i := 0; i < n; i++ {
        if i == 0 {
            pref[i] = nums[i]
            continue
        }
        pref[i] = pref[i - 1] * nums[i]
    }
    for i := n - 1; i >= 0; i-- {
        if i == n - 1 {
            suff[i] = nums[i]
            continue
        }
        suff[i] = suff[i + 1] * nums[i]
    }

    res := make([]int, n)
    for i := 0; i < n; i++ {
        x, y := 1, 1
        if i > 0 {
            x = pref[i-1]
        }
        if i < n-1 {
            y = suff[i+1]
        }
        res[i] = x * y
    }

    return res
}