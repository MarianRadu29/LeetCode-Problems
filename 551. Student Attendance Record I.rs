impl Solution {
    pub fn check_record(s: String) -> bool {
        if s.find('A')!=s.rfind('A') && s.find('A')!=None && s.rfind('A')!=None
        {
            return false;
        }
        if s.find("LLL") != None
        {
            return false;
        }
        true
    }
}