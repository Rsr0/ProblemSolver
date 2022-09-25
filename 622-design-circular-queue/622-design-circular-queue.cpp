class MyCircularQueue {
public:
    
    int front,cnt,size;
    vector<int> v;
    
    MyCircularQueue(int k) {
        v.resize(k);
        cnt=0, size=k, front=0;
    }
    
    bool enQueue(int value) {
        if(isFull())    return 0;
        
        v[(front+cnt)%size]=value;
        cnt++;
        return 1;
    }
    
    bool deQueue() {
        if(isEmpty())   return 0;
       
        front=(front+1)%size;
        cnt--;
        return 1;
    }
    
    int Front() {
        if(isEmpty())return -1;
        return v[front];
    }
    
    int Rear() {
        if(isEmpty())   return -1;
        return v[(front+cnt-1)%size];
    }
    
    bool isEmpty() {
        return (cnt==0);
    }
    
    bool isFull() {
        return (cnt==size);
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