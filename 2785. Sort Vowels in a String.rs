impl Solution {
    pub fn sort_vowels(s: String) -> String {
           let mut vs:Vec<char> = s.chars().collect();
           let mut result = String::new();
           let n = vs.len();
           let mut v1: Vec<usize> = Vec::new();
           let mut v2: Vec<char> = Vec::new();
           for i in 0..n
           {
               if vs[i].to_lowercase().next().unwrap().eq(&'a') ||
                   vs[i].to_lowercase().next().unwrap().eq(&'e') ||
                   vs[i].to_lowercase().next().unwrap().eq(&'i') ||
                   vs[i].to_lowercase().next().unwrap().eq(&'o') ||
                   vs[i].to_lowercase().next().unwrap().eq(&'u')
               {
                   v1.push(i);
                   v2.push(vs[i]);
               }
           }
           v2.sort();
           for i in 0..v1.len() {
               vs[v1[i]] = v2[i];
           }

           result = vs.into_iter().collect();
           result
       }
}