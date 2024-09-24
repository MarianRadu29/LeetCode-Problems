impl Solution {
    pub fn number_of_pairs(nums1: Vec<i32>, nums2: Vec<i32>, k: i32) -> i32 {
       let mut result = 0i32;
       for i in nums1
       {
           for j in nums2.iter()
           {
               if i%((*j)*k)==0 {
                   //println!("{} {}",i,*j);
                   result+=1;
               }
           }
       }

       result
   }
}