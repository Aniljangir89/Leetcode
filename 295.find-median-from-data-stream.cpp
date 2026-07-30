/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

class MedianFinder {
public:

    priority_queue<int>pq1;// max 
    priority_queue<int,vector<int>,greater<int>>pq2;// min 
    MedianFinder() {
        
    }
    
    void addNum(int num){
      int top1 = pq1.top();
      int top2 = pq2.top();
      if(num <= top1){
        pq1.push(num);
      }else{
        pq2.push(num);
      }
      // then we have to balance both the pqs 
      
      if(pq2.size() > 1  + pq1.size()){
          int val = pq2.top();
          pq2.pop();
          pq1.push(val);
      }

      if(pq1.size() > 1 + pq2.size()){
         int val = pq1.top();
         pq1.pop();
         pq2.push(val);
      }
      
    }
    
    double findMedian() {
        int n = pq2.size();
        int m = pq1.size();
        if(n==m)return double((pq1.top() + pq2.top())/2.0);
        return double(pq1.top());
         
    }
};


