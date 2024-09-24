impl Solution {
    pub fn search(nums: Vec<i32>, target: i32) -> bool {
    for i in nums
    {
        if target==i
        {
            return true;
        }
    }
    false
}
}