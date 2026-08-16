func isValid(s string) bool {
    stack := make([]rune,0)
    for _,x := range s{
        if x=='{' || x =='(' || x == '['{
            stack = append(stack,x)
        } else if len(stack)>0 && (x == stack[len(stack)-1]+1 || x == stack[len(stack)-1]+2){
            stack = stack[:len(stack)-1]
        } else{
            return false
        }
    }

    return len(stack)==0;
}
