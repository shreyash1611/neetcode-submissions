func maxProfit(nums []int) int {
	// basically maximise the profit
	// sell - buy to be maxed means sell as high and buy as low
	// scan l to r
	bestbuy := nums[0]
	profit := 0
	for _,x:= range nums{
		bestbuy = min(bestbuy,x)
		profit = max(profit, x-bestbuy)
	}
	return profit
}
