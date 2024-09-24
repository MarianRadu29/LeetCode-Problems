impl Solution {
    pub fn sum_four_divisors(nums: Vec<i32>) -> i32 {
       fn conditie_divizori(number:i32) ->bool
       {
           let (mut count,mut d) = (2,2);
           while count<=4 && d<=number/2
           {
               if number%d==0
               {
                   count+=1;
               }
               d+=1;
           }
           if count>4 || count<4
           {
               return false;
           }
           true
       }
       fn sum_divizori(number:i32) ->i32
       {
           let mut sum = 1+ number;
           let mut sw = false;
           let mut d =2;
           while sw==false
           {
               if number%d==0
               {
                   sw = true;
                   sum = sum+d+number/d;
               }
               d+=1;
           }
           sum
       }
       let mut result = 0;
       for i in nums
       {
           if conditie_divizori(i)==true
           {
               result += sum_divizori(i);
           }

       }
       result
   }
}