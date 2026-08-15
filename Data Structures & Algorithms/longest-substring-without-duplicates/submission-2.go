func lengthOfLongestSubstring(s string) int {
	if s=="" {
		return 0
	}
	ascii := make([]int, 512)
	l := 0
	maxlen := 1
	for i, x := range s{
		ascii[x]++
		for ascii[x]>=2{
			ascii[s[l]]--
			l++
		}
		maxlen = max(maxlen, i-l+1)
	}
	return maxlen;
}
