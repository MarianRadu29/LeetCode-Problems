impl Solution {
    pub fn to_goat_latin(sentence: String) -> String {
       let mut s = sentence;
       let mut v:Vec<&str> = s.split_whitespace().collect();
       let n = v.len();
       let mut result = String::new();
       let mut ma = "ma".to_string();
       let mut vv = Vec::new();

       for s in v
       {
           let mut ss = s.to_string();
           let c = ss.clone().chars().into_iter().next().unwrap();//primul caracter din string;
           if let Some(x) = "aeiouAEIOU".find(c)
           {
               ma.push('a');
               ss+=ma.as_str();
           }
           else {
              let cc =  ss.remove(0);
               ss.push(cc);
               ma.push('a');
               ss+=ma.as_str();
           }
           vv.push(ss);

       }
       for i in 0..n-1
       {
           result+=vv[i].as_str();
           result.push(' ');
       }
       result.push_str(vv[n-1].as_str());

       result
   }
}