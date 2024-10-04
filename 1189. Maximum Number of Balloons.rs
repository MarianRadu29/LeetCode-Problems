impl Solution {
    pub fn max_number_of_balloons(text: String) -> i32 {
        const d: [char; 5] = ['a','b','l','o','n'];
        const f:[i32;5] = [1,1,2,2,1];
        let mut count:[i32;5] = [0;5];
        for c in text.chars(){
            if d.contains(&c)==true{
                count[d.iter().position(|&r| r==c).unwrap()]+=1;
            }
        }
        //println!("{:?}",count);
        for i in 0..5{
            count[i] = count[i]/f[i];
        }
        

        *count.iter().min().unwrap()
    }
}