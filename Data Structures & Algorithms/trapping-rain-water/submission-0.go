import "slices"
func trap(height []int) int {
	n := len(height)
	suf := make([]int ,0)
	pre := make([]int,0)
	for x,i := range height {
		if x>0{
			pre = append(pre,max(pre[x-1],i))
		} else{
			pre = append(pre,i)
		}
	}
	slices.Reverse(height)
	for x,i := range height {
		if x>0{
			suf = append(suf,max(suf[x-1],i))
		} else{
			suf = append(suf,i)
		}
	} 
	slices.Reverse(height)
	slices.Reverse(suf)

	// fmt.Println(pre)
	// fmt.Println(suf)	
	res := 0
	for i:=0;i<n;i++{
		res += max(0,min(pre[i],suf[i])-height[i])
	}
	return res
}
