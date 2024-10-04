impl Solution {
    pub fn num_jewels_in_stones(jewels: String, stones: String) -> i32 {
         let mut count = 0;
         for c in jewels.chars(){
             for cc in stones.chars(){
                 if c==cc{
                     count+=1;
                 }
             }
         }
 
         count
     }
 }