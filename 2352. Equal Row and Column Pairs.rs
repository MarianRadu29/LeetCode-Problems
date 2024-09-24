impl Solution {
    pub fn equal_pairs(grid: Vec<Vec<i32>>) -> i32 {
        let mut count = 0i32;
        let n = grid.len();
        let m = grid[0].len();
        for j in 0..m
        {
            let mut aux:Vec<i32> = Vec::new();
            for i in 0..n
            {
                aux.push(grid[i][j]);
            }
            for i in 0..n
            {
                if aux==grid[i]
                {
                    count+=1;
                }
            }
        }
        count
    }
}