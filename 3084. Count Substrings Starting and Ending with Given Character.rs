impl Solution {
    pub fn count_substrings(s: String, c: char) -> i64 {
         let mut count = 0i64;
         for cc in s.chars()
         {
             if cc==c
             {
                 count+=1;
             }
         }
         
         if count<2
         {
             return count;
         }
 
         (count * (count + 1) / 2)
     }
 }