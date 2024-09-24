impl Solution {
    pub fn prefix_count(words: Vec<String>, pref: String) -> i32 {
        let mut result = 0i32;
        for s in words
        {
            if let Some(x) = s.find(pref.clone().as_str())
            {
                if x==0
                {
                    result+=1;
                }
            }
        }
        result
    }
}