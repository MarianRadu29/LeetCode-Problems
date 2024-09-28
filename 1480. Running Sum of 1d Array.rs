impl Solution {
    pub fn running_sum(nums: Vec<i32>) -> Vec<i32> {
        let mut result = vec![];
        let mut s = 0;
        for i in 0..nums.len(){
            s+=nums[i];
            result.push(s);
        }

        result
    }
}