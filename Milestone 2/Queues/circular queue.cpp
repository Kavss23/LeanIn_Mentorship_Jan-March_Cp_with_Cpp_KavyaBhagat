class MyCircularQueue {
public:
  vector<int>v;
    int f;
    int r;
    MyCircularQueue(int k) {
        
        v = vector<int>(k);
        f = -1;
        r = -1;
    }
    
    bool enQueue(int value) {
        if(f == -1){
            v[0] = value;
            f = 0;
            r = 0;
            return true;
        }
        
        else{
            if((r+1)%v.size() != f){
                v[(r+1)%v.size()] = value;
                r = (r+1)%v.size();
                return true;
            }
            else
                return false;
        }
    }
    
    bool deQueue() {
        
        if(f == -1)
            return false;
        
        if(f == r)
        {
            f = -1;
            r = -1;
            return true;
        }
        
        f = (f+1)%v.size();
        return true;
        
    }
    
    int Front() {
        
        if(f == -1)
            return f;
        
        return v[f];
        
    }
    
    int Rear() {
        if(r == -1)
            return -1;
        
        return v[r];
    }
    
    bool isEmpty() {
        
        if(f == -1)
            return true;
        else
            return false;
        
    }
    
    bool isFull() {
        
        if(f == -1)
            return false;
        
        if((r+1) % v.size() == f)
            return true;
        
        return false;
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */