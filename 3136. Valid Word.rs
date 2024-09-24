impl Solution {
    pub fn is_valid(word: String) -> bool {
        if word.len()<3
        {
            return false;
        }

        let mut word = word;
        let n = word.len();
        word  = word.to_lowercase();
        let word:Vec<char> = word.chars().collect();
        let mut vowels = false;
        let mut consonants = false;
        for i in 0..n
        {
            if word[i]>='a' && word[i]<='z'
            {
                if word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'
                {
                    vowels = true;
                }
                else {
                    consonants = true;
                }
            }
            else if word[i]>='0' && word[i]<='9' {
                continue;
            }
            else {
                return false;
            }
        }
        if vowels==false || consonants==false
        {
            return false;
        }
        true
    }
}