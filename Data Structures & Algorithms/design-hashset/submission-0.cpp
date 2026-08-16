class MyHashSet {
private:
    vector<int>ans;
public:
    MyHashSet() {
        
    }    
    void add(int key) {
        if(find(ans.begin(),ans.end(),key)==ans.end()){
            ans.push_back(key);
        }
    }  
    void remove(int key) {
        auto it=find(ans.begin(),ans.end(),key);
        if(it!=ans.end()){
            ans.erase(it);
        }
    }
    
    bool contains(int key) {
        auto it=find(ans.begin(),ans.end(),key);
        if(it!=ans.end()){
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
//Suppose you want to delete 30:
// vector<int> nums = {10, 20, 30, 40, 50};
// auto it = find(nums.begin(), nums.end(), 30);
// if (it != nums.end()) {
//     nums.erase(it);
// }