impl Solution {
    pub fn modified_matrix(matrix: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let mut answer = matrix;
        let n = answer.len();
        let m = answer[0].len();
        for i in 0..n
        {
            for j in 0..m
            {
                if answer[i][j]==-1
                {
                    let mut aux = -1;
                    for k in 0..n
                    {
                        if answer[k][j] > aux
                        {
                            aux = answer[k][j];
                        }
                    }
                    answer[i][j] = aux;
                }
            }
        }

        answer
    }
}