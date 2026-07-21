class MyHashSet {
public:
    MyHashSet() {
        
    }
    unordered_map<int,int>set;
    
    void add(int key) {
        if(set[key] == 0){
            set[key] = 1;
        }
    }
    
    void remove(int key) {
        set[key] = 0;
    }
    
    bool contains(int key) {
        if(set[key]){
            return true;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */