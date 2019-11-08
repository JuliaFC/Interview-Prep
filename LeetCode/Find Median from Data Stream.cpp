class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> minq;
    priority_queue<int, vector<int>, greater<int>> maxq;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(minq.empty() || minq.top() > num) {
            minq.push(num);
        }
        else {
            maxq.push(num);
        }
        

        if(minq.size() > maxq.size()+1) {
            maxq.push(minq.top());
            minq.pop();
        }
        else if(maxq.size() > minq.size()+1) {
            minq.push(maxq.top());
            maxq.pop();
        }
                   
    }
    
    double findMedian() {
        if(maxq.size() == minq.size()) {
            return minq.empty()?0:( (minq.top()+maxq.top())/2.0);
        }
        return maxq.size() > minq.size() ? maxq.top() : minq.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */