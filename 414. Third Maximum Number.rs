impl Solution {
    pub fn third_max(nums: Vec<i32>) -> i32 {
        if nums.len() <3
        {
            return *nums.iter().max().unwrap();
        }

        let mut v = nums;
        v.sort();
        v.dedup();
        if v.len()>=3 {
            return v[v.len() - 3];
        }

        *v.iter().max().unwrap()


    }
}