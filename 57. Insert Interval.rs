impl Solution {
    pub fn insert(intervals: Vec<Vec<i32>>, new_interval: Vec<i32>) -> Vec<Vec<i32>> {
        
        let mut intervals = intervals;
        if intervals.len()==0
        {
            intervals.push(new_interval);
            return intervals;
        }
        let mut i = 0i32;
        while intervals.len() > i as usize && intervals[i as usize][0] <=new_interval[0]
        {
            i+=1;
        }

        i-=1;
        intervals.insert(i as usize+1,new_interval);
        println!("{:?}",intervals);
        if i<0
        {
            i=0;
        }
        while i<intervals.len() as i32-1
        {

            if intervals[i as usize][1] >= intervals[i as usize+1][0] && intervals[i as usize][1] >= intervals[i as usize +1][1]
            {
                let min = intervals[i as usize][0];
                let max = intervals[i as usize][1];
                intervals.remove(i as usize +1);

                intervals[i as usize][0] = min;
                intervals[i as usize][1] = max;
                i-=1;
                // count+=1;
            }
            else if intervals[i as usize][1] >= intervals[i as usize+1][0] && intervals[i as usize][1] <= intervals[i as usize+1][1]
            {
                let min = intervals[i as usize][0];
                let max = intervals[i as usize +1][1];
                intervals.remove(i as usize +1);

                intervals[i as usize][0] = min;
                intervals[i as usize][1] = max;

                i-=1;
                //count+=1;
            }


            i+=1;
        }

        intervals
    }
}