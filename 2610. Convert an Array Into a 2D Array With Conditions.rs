impl Solution {
    pub fn find_matrix(nums: Vec<i32>) -> Vec<Vec<i32>> {
        use std::collections::HashMap;
        let mut map = HashMap::new();
        for i in nums
        {
            if map.contains_key(&i)==false
            {
                map.insert(i,1);
            }
            else {
                map.entry(i).and_modify(|v| *v += 1);
            }
        }


        let mut result:Vec<Vec<i32>> = Vec::new();
        while map.is_empty() ==false
        {
            let mut aux:Vec<i32> = Vec::new();
            for p in map.iter_mut()
            {
                aux.push(*p.0);
                let a = *p.0;
                *p.1-=1;

            }
            map.retain(|_, &mut v| v != 0);//primul parametru din  closure este vb de cheia din aceea pereche,nu avem nevoie de cheie,de aia punem"_"
            result.push(aux);
        }

        result
    }
}