impl Solution {
    pub fn find_min_difference(time_points: Vec<String>) -> i32 {
        let mut minutes = Vec::new();
        //12 ore = 720 minute
        for hour in time_points{
            let x = hour.split(":").collect::<Vec<&str>>();
            minutes.push(x[0].parse::<i32>().unwrap()*60 + x[1].parse::<i32>().unwrap());
        }

        let mut result = 1440;//24 de ore
        let n = minutes.len();
        for i in 0..n-1{
            for j in i+1..n{
                let mut x = minutes[i].abs_diff(minutes[j]);
                if minutes[i].abs_diff(minutes[j])>720{
                    x = 1440-x;
                }
                if result>x{
                    result =x;
                }
            }
        }
        result as i32
    }
}