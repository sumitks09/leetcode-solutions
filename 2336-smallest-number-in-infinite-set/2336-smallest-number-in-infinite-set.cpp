class SmallestInfiniteSet {
public:
    set<int> set;
    int curr;
    
    SmallestInfiniteSet() {
        curr = 1;
    }
    
    int popSmallest() {
        if(set.size()>0)
        {
            int smallest = *(set.begin());
            set.erase(smallest);
            return smallest;
        }
        else
        {
            return curr++;
        }
    }
    
    void addBack(int num) {
        if(num<curr)
        {
            set.insert(num);
        }
    }
};