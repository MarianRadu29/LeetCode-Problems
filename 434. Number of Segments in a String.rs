impl Solution {
    pub fn count_segments(s: String) -> i32 {
        //separ intr o lista "cuvintele" si le aleg numai pe alea care nu sunt empty si le numar
        s.split(' ').filter(|s| s != &"").count() as i32
    }
}