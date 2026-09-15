class MedianFinder {
public:
     
     priority_queue<int>mah;
      priority_queue<int,vector<int>,greater<int>>mih;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(mah.empty() || num<=mah.top())
        mah.push(num);
        else
        mih.push(num);

        if(mah.size() > mih.size() + 1){
        mih.push(mah.top());
        mah.pop();
        }

        if(mih.size() > mah.size()){
            mah.push(mih.top());
            mih.pop();
        }
    }
    
    double findMedian() {
        if(mah.size() > mih.size())
        return mah.top();
        else
        return (mah.top() + mih.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */