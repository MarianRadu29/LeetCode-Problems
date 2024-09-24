impl Solution {
    pub fn longest_increasing_path(matrix: Vec<Vec<i32>>) -> i32 {
        fn run(matrix: &Vec<Vec<i32>>, memory: &mut Vec<Vec<i32>>, i: i32, j: i32, n: i32, m: i32) -> i32 {
            if memory[i as usize][j as usize] != -1 {
                return memory[i as usize][j as usize];
            }
            
            let dx = [0, 1, 0, -1];
            let dy = [-1, 0, 1, 0];
            let mut max_len = 1;
    
            for ii in 0..4 {
                let x = i + dx[ii];
                let y = j + dy[ii];
                if x >= 0 && x < n && y >= 0 && y < m {
                    if matrix[x as usize][y as usize] > matrix[i as usize][j as usize] {
                        max_len = max_len.max(1 + run(matrix, memory, x, y, n, m));
                    }
                }
            }
    
            memory[i as usize][j as usize] = max_len;
            max_len
        }
    
        let n = matrix.len() as i32;
        let m = matrix[0].len() as i32;
        let mut result = 0;
        let mut memory = vec![vec![-1; m as usize]; n as usize];
    
        for i in 0..n {
            for j in 0..m {
                result = result.max(run(&matrix, &mut memory, i, j, n, m));
            }
        }
    
        result
    }
 
 }