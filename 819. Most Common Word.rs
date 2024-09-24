impl Solution {
    pub fn most_common_word(paragraph: String, banned: Vec<String>) -> String {
        let mut paragraph = paragraph;
        paragraph = paragraph.to_ascii_lowercase();
        paragraph = paragraph.replace("."," ");
        paragraph = paragraph.replace(","," ");
        paragraph = paragraph.replace("?"," ");
        paragraph = paragraph.replace("!"," ");
        paragraph = paragraph.replace(";"," ");
        paragraph = paragraph.replace("'"," ");
        let mut v:Vec<&str> = paragraph.split_whitespace().collect();
        println!("{v:?}");
        for s in banned.iter()
        {
            v.retain(|&x| x.eq(s)==false);
        }
        let mut maxx = -1i32;
        let mut result = String::new();
        use std::collections::HashMap;
        let mut map:HashMap<String,i32> = HashMap::new();
        for s in v.iter()
        {
            if map.contains_key(&s.to_string())==true
            {
                let mut x = map.get_mut(&s.to_string()).unwrap();
                *x+=1;
                if maxx<=*x
                {
                    maxx = *x;
                    result = s.to_string();
                }
            }
            else {
                map.insert(s.to_string(), 1);
                if maxx<=1
                {
                    maxx = 1;
                    result = s.to_string();
                }
            }
        }
        result
    }
}