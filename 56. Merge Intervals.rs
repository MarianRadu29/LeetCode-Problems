impl Solution {
    pub fn merge(intervals: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
       
         let mut intervals = intervals;

        for i in 0..intervals.len()-1
        {
            for j in i+1..intervals.len()
            {
                if intervals[i][0] > intervals[j][0]
                {
                    let  aux = intervals[i].clone();
                    intervals[i][0] = intervals[j][0];
                    intervals[i][1] = intervals[j][1];
                    intervals[j] = aux;
                }
                else if intervals[i][0] == intervals[j][0]
                {
                    if intervals[i][1] > intervals[j][1]
                    {
                        let aux = intervals[i].clone();
                        intervals[i][0] = intervals[j][0];
                        intervals[i][1] = intervals[j][1];
                        intervals[j] = aux;
                    }

                }
            }
        }//for sortare

        for i in 0..intervals.len()
        {
            println!("{:?}",intervals[i]);
        }

        let  count = intervals.len();

        let mut i = 0i32;

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