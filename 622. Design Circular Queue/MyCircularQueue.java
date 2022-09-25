class MyCircularQueue {

    int[] queue;
    int front = 0;
    int back = -1;
    int len = 0;

    public MyCircularQueue(int k) {
        queue = new int[k];
        len = k;
        
        for(int i = 0 ; i < k ; i++){
            queue[i] = -1;
        }
    }
    
    public boolean enQueue(int value) {

        int tempI = (back+1)%len;

        if((tempI == front && queue[front] == -1) || (tempI != front)){

            back = tempI;
            queue[back] = value;

            return true;
        }

        return false;
    }
    
    public boolean deQueue() {
        
        if(queue[front] == -1){
            return false;
        }

        queue[front] = -1;
        front = (front+1)%len;
        return true;
    }
    
    public int Front() {
        
        if(front > back && queue[front] == -1){
            return -1;
        }

        return queue[front];
    }
    
    public int Rear() {
        
        if(front > back && queue[front] == -1){
            return -1;
        }
        
        return queue[back];
    }
    
    public boolean isEmpty() {
        
        // return ((front > back && queue[front] == -1) || (back == len && front == 0 && queue[front] == -1));

        return(((back+1)%len) == front && queue[front] == -1);
    }
    
    public boolean isFull() {
        
        // return ((front > back && queue[front] != -1) ||  (front == 0 && back == len && queue[front] != -1));

        return(((back+1)%len) == front && queue[front] != -1);
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