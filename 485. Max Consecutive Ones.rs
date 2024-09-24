impl Solution {
    pub fn find_max_consecutive_ones(nums: Vec<i32>) -> i32 {
        let mut result = 0i32;
        let mut count = 0i32;
        for i in nums{
            if i==1
            {
                count+=1;
            }
            else if count>result {
                result = count;
                count = 0;
            }
            else {
                count = 0;
            }
        }
         if count>result{
            result = count;
        }
        result
    }
}