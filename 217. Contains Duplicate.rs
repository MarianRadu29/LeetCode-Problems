impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        use std::collections::HashSet;
        let mut set:HashSet<i32> = HashSet::new();
        for i in nums
        {
            if set.insert(i)==false
            {
                return true;
            }
        }

        false
    }
}