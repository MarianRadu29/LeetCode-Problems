impl Solution {
    pub fn get_min_distance(nums: Vec<i32>, target: i32, start: i32) -> i32 {
        let mut i = start;
        let mut j = start;
        'loopa: loop {
            if i>=0
            {
                if nums[i as usize]==target {
                    break 'loopa;
                }
            }
            if j<nums.len() as i32
            {
                if nums[j as usize]==target
                {
                    break 'loopa;
                }
            }
            i-=1;
            j+=1;
        }
        let mut d1 = i-start;
        let mut d2 = j-start;
        d1 = d1.abs();
        d2 = d2.abs();
        if d1<d2
        {
            return d1;
        }
        d2

    }
}