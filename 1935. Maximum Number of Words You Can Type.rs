impl Solution {
    pub fn can_be_typed_words(text: String, broken_letters: String) -> i32 {
       let mut result = 0i32;
       let v :Vec<&str>= text.split(' ').collect();
       for s in v
       {
           let mut sw = true;
           for c in broken_letters.chars()
           {
               if s.find(c)!=None
               {
                   sw = false;
               }
           }
           if sw==true
           {
               result+=1;
           }
       }

       result
   }
}