
use std::collections::HashSet;

struct WordDictionary {
    map : HashSet<String>
}

impl WordDictionary {

    fn new() -> Self {
        WordDictionary {
            map : HashSet::new()
        }
    }
    
    fn add_word(&mut self, word: String) {
        self.map.insert(word);
    }

    fn solve(index: usize, map: &HashSet<String>, mut s: Vec<char>) -> bool {

    if map.contains(&s.iter().collect::<String>()) {
        return true;
    }

    let mut flag = false;

    for (i, c) in s.iter().enumerate() {
        if i < index {
            continue;
        }

        if *c == '.' {
            for k in 'a'..='z' {
                let mut s = s.to_owned();
                s[i] = k;
                flag = flag || Self::solve(i + 1, map, s.clone());
                if flag {
                    return true;
                }
            }
        }
    }

    false
}
    
    fn search(&self, word: String) -> bool {
       let mut s : Vec<char> = word.chars().collect();
       return Self::solve(0,&self.map,s);
        
    }
}

/**
 * Your WordDictionary object will be instantiated and called as such:
 * let obj = WordDictionary::new();
 * obj.add_word(word);
 * let ret_2: bool = obj.search(word);
 */