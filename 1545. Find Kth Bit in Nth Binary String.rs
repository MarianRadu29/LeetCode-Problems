impl Solution {
    pub fn find_kth_bit(n: i32, k: i32) -> char {
         fn reverse(s:String) -> String
         {
             let mut aux :Vec<char>= s.chars().collect();
             aux.reverse();
             let mut aux:String = aux.into_iter().collect();
             aux
         }
        fn invert(s:String) ->String
         {
             let mut aux :Vec<char>= s.chars().collect();
             let result_string: String = aux.into_iter()
                 .map(|x| if x == '1' { '0' } else { '1' })
                 .collect();
 
             result_string
         }
         let mut s = "0".to_string();
         let mut i = 1i32;
         while i<n
         {
             let mut clone = s.as_str();
             s = format!("{}1{}",clone,reverse(invert(clone.to_string())));
             i+=1;
         }
         let v:Vec<char> = s.chars().collect();
         
         v[k as usize-1]
     }
 }