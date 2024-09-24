impl Solution {
    pub fn palindrome(s: String) -> bool
   {
       let n  = s.len();
       let ss:Vec<char> = s.chars().collect();
       for i in 0..=n/2
       {
           if ss[i]!=ss[n-i-1]
           {
               return false;
           }
       }
       true
   }
   pub fn first_palindrome(words: Vec<String>) -> String {
       let mut result = String::new();
       'forr: for i in words{
           if Self::palindrome(i.clone())==true
           {
               result = i;
               break 'forr;
           }
       }

       result
   }
}