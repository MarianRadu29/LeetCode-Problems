impl Solution {
    pub fn find_numbers(nums: Vec<i32>) -> i32 {
       let mut result = 0i32;
       for i in nums
       {
           if i.to_string().len()%2==0
           {
               result+=1;
           }
       }
       result
   }
}