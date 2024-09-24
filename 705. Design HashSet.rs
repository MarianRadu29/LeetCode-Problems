struct MyHashSet {
    hash_set:Vec<i32>
}

impl MyHashSet {

    fn new() -> Self {
        Self{
            hash_set:Vec::new()
        }
    }

    fn add(&mut self, key: i32) {
        if self.hash_set.contains(&key)==false {
            self.hash_set.push(key);
        }
    }

    fn remove(&mut self, key: i32) {
        if self.hash_set.contains(&key)==true {
            let i = self.hash_set.iter().position(|&x| x==key).unwrap();
            self.hash_set.remove(i);
        }
    }

    fn contains(&self, key: i32) -> bool {
        self.hash_set.contains(&key)==true
    }
}