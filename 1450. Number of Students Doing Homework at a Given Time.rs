impl Solution {
    pub fn busy_student(start_time: Vec<i32>, end_time: Vec<i32>, query_time: i32) -> i32 {
         let n = end_time.len();
         let mut count = 0;
         for i in 0..n
         {
             if start_time[i]<=query_time
             {
                 if end_time[i]>=query_time
                 {
                     count+=1;
                 }
             }
         }
         count
     }
 }