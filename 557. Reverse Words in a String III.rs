impl Solution {
    pub fn reverse_string(s: String) ->String
   {
       let mut result = String::new();
       for i in s.chars()
       {
           result.insert(0,i);
       }
       result
   }
   pub fn reverse_words(s: String) -> String {
       let mut result = String::new();
       let mut array: Vec<String> = s.split(' ')
           .map(|s| s.to_string())
           .collect();
       let n = array.len();
       for i in 0..n-1
       {
           result.push_str(Self::reverse_string(array[i].clone()).as_str());
           result.push(' ');
       }
       result.push_str(Self::reverse_string(array[n-1].clone()).as_str());

       result
   }
}