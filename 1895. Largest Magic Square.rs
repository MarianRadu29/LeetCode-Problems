pub fn largest_magic_square(grid: Vec<Vec<i32>>) -> i32 {
    let n = grid.len();
    let m = grid[0].len();
    let mut k = n.min(m);

    while k > 1 {
        for i in 0..=n - k {
            for j in 0..=m - k {
                let mut sum = 0;

                for jj in j..j + k {
                    sum += grid[i][jj];
                }

                let mut valid = true;
                for ii in i..i + k {
                    let mut sumR = 0;
                    for jj in j..j + k {
                        sumR += grid[ii][jj];
                    }
                    if sumR != sum {
                        valid = false;
                        break;
                    }
                }
                if !valid {
                    continue;
                }

                for jj in j..j + k {
                    let mut sumC = 0;
                    for ii in i..i + k {
                        sumC += grid[ii][jj];
                    }
                    if sumC != sum {
                        valid = false;
                        break;
                    }
                }
                if !valid {
                    continue;
                }

                let mut sumD1 = 0;
                for d in 0..k {
                    sumD1 += grid[i + d][j + d];
                }
                if sumD1 != sum {
                    continue;
                }

                let mut sumD2 = 0;
                for d in 0..k {
                    sumD2 += grid[i + d][j + k - d - 1];
                }
                if sumD2 != sum {
                    continue;
                }

                return k as i32;
            }
        }
        k -= 1;
    }

    1
}