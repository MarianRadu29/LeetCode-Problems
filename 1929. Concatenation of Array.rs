impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
            let mut result = nums.clone();
            let mut aux1 = nums;
            result.append(&mut aux1);
            return result;
    }
}