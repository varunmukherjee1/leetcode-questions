class MyCircularQueue {

    int[] queue;
    int front = 0;
    int back = 0;
    int len = 0;

    public MyCircularQueue(int k) {
        queue = new int[k];
        len = k;
    }
    
    public boolean enQueue(int value) {
        
    }
    
    public boolean deQueue() {
        
    }
    
    public int Front() {
        
        if(front == back){
            return -1;
        }

        return queue[front];
    }
    
    public int Rear() {
        
        if(front == back){
            return -1;
        }
        
        return queue[back];
    }
    
    public boolean isEmpty() {
        
        return (front == back);
    }
    
    public boolean isFull() {
        
    }
}

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * boolean param_1 = obj.enQueue(value);
 * boolean param_2 = obj.deQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * boolean param_5 = obj.isEmpty();
 * boolean param_6 = obj.isFull();
 */