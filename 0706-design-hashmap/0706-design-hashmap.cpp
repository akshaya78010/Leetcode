class MyHashMap {
public:
    MyHashMap() {
        
    }
    unordered_map<int,int>mpp;
    void put(int key, int value) {
        mpp[key] = value+1;
    }
    
    int get(int key) {
        if(mpp[key] > 0){
        return mpp[key]-1;
        }
        else{
            return -1;
        }
    }
    
    void remove(int key) {
        if(mpp[key] > 0){
        mpp[key] = -1;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */