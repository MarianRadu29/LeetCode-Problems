impl Solution {
    pub fn is_monotonic(nums: Vec<i32>) -> bool {
        if nums.len()==1
        {
            return true;
        }

        let mut sw1 = true;
        let mut sw2 = true;
            let mut i = 0usize;
            while i<nums.len()-1 && sw1==true
            {
                if nums[i]<nums[i+1]
                {
                    sw1 = false;
                }
                i+=1;
            }


            let mut i = 0usize;
            while i<nums.len()-1 && sw2==true
            {
                if nums[i]>nums[i+1]
                {
                    sw2 = false;
                }
                i+=1;
            }

        sw1 || sw2
    }
}