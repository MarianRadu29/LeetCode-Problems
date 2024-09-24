impl Solution {
    pub fn average(salary: Vec<i32>) -> f64 {
       let mut minn = i32::MAX;
       let mut maxx = i32::MIN;
       let mut sum = 0i64;
       let n = salary.len();
       for i in salary
       {
           sum+=i as i64;
           if i<minn
           {
               minn = i;
           }
           if i>maxx
           {
               maxx = i;
           }
       }
       
       sum = sum-minn as i64-maxx as i64;
       println!("{}",sum);
       return sum as f64/((n-2) as f64);

   }
}