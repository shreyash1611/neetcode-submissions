func threeSum(nums []int) [][]int {
    res := make([][]int,0)
    sort.Ints(nums)
    for i:= 0;i<len(nums); i++{
        if i>0 && nums[i]==nums[i-1]{
            continue
        } 
        target := -nums[i]
        var j int = i+1
        var k int = len(nums)-1
        for j<k {
            if nums[j]+nums[k] == target{
                temp := make([]int,3)
                temp[0] = nums[i]
                temp[1] = nums[j]
                temp[2] = nums[k]
                res = append(res, temp)
                k--
                j++
                for j < k && nums[j] == nums[j-1] {
                    j++
                }
                for j < k && nums[k] == nums[k+1] {
                    k--
                }
            } else if nums[j]+nums[k]>target{
                k--
            } else{
                j++
            }
        } 
    }
    return res;
}
