impl Solution {
    pub fn reverse_only_letters(s: String) -> String {
       let mut v:Vec<char> = s.chars().collect();
       let (mut l,mut r) = (0,v.len()-1);
       while l<r
       {
           if (v[l]>='a' && v[l]<='z') || (v[l]>='A' && v[l]<='Z')
           {
               if (v[r] >= 'a' && v[r] <= 'z') || (v[r] >= 'A' && v[r] <= 'Z')
               {
                   (v[l],v[r]) = (v[r],v[l]);
                   l+=1;
                   r-=1;
               }
               else { r-=1; }
           }
           else { l+=1; }
       }

       v.into_iter().collect()
   }
}