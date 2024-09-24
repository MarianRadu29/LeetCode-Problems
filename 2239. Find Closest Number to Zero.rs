impl Solution {
    pub fn find_closest_number(nums: Vec<i32>) -> i32 {
        let mut result = i32::MAX;
        let sum = 0;
        nums.iter().for_each(|x|
            if x.abs()<=result.abs()
            {   
                if x.abs()==result.abs()
                    {
                        if *x>result
                        {
                            result = *x;
                        }
                    }
                else
                {
                        result = *x;
                }
            });
        result

    }
}