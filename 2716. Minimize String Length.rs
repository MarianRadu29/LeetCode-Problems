impl Solution {
    pub fn minimized_string_length(s: String) -> i32 {
        use std::collections::HashMap;
        let mut map:HashMap<char,i32> = HashMap::new();
            for c in s.chars()
            {
            if  map.contains_key(&c)==true
                {
                    map.entry(c).and_modify(|v| *v += 1);
                }
                else {
                    map.insert(c,1);
                }
            }
            map.len() as i32
            
    }
}