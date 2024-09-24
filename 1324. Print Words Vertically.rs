impl Solution {
    pub fn print_vertically(s: String) -> Vec<String> {
        let mut v:Vec<&str> = s.split_whitespace().collect();
        let mut maxx = -1;



        let n = v.len();

        let mut i = 0usize;
        let mut vv :Vec<Vec<char>> = Vec::new();
        for i in v
        {
            let aux:Vec<char> = i.chars().collect();
            vv.push(aux);

            if maxx<i.len() as i32
            {
                maxx = i.len() as i32;
            }
        }

        let mut result:Vec<Vec<char>> = vec![Vec::new(); maxx as usize];
        for i in 0..maxx as usize
        {
            for v in vv.iter()
            {
                if v.len()>i as usize
                {
                    result[i].push(v[i]);
                }
                else {
                    result[i].push(' ');
                }
            }
        }
        let mut solution:Vec<String> = Vec::new();
        for v in result
        {
            let mut aux:String = v.into_iter().collect();
            aux = aux.trim_end_matches(' ').to_string();
            solution.push(aux);
        }

        solution
    }
}