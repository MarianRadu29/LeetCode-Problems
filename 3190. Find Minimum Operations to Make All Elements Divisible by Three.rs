impl Solution {
    pub fn minimum_operations(nums: Vec<i32>) -> i32 {
       let mut result = 0i32;

       for i in nums
       {
           if i%3!=0{
               result+=1;
           }
       }

       result
   }
}