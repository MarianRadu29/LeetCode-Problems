impl Solution {
    pub fn find_disappeared_numbers(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len();
        let mut v = nums;
        let mut sir:Vec<i32> =Vec::new();
        for i in 1..=n
        {
            sir.push(i as i32);
        }
        
        let mut result:Vec<i32> = Vec::new();
        

        for i in sir
        {
            if let None = v.iter().find(|&&x| x == i)
            {
                result.push(i);
            }
        }

        result
    }
}