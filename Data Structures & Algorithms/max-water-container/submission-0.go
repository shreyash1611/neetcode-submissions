func maxArea(nums []int) int {
    l := 0
    r := len(nums) - 1 
    maxarea := 0
    for l<r{
        width := r-l
        maxarea = max(maxarea, width*min(nums[l],nums[r]))
        if nums[l] > nums[r]{
            r--
        } else{
            l++
        }
    }
    return maxarea
}
