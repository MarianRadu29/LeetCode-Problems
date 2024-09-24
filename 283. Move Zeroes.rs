impl Solution {
    pub fn move_zeroes(nums: &mut Vec<i32>) {
       let mut nums = nums;
       let mut index = 0i32;
       let mut count = 0i32;
       while index<nums.len() as i32
       {
           if nums[index as usize]==0
           {
               count+=1;
               nums.remove(index as usize);
               index-=1;

           }

           index+=1;
       }

       for i in 0..count
       {
           nums.push(0);
       }
   }
}