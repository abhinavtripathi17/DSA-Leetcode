// Last updated: 8/4/2026, 7:17:26 PM
class MedianFinder {
public:

    priority_queue<double>maxH;
    priority_queue<double ,vector<double>, greater<double>>minH;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxH.empty() || maxH.top() > num){
            maxH.push(num);
        }else{
            minH.push(num);
        }

        if(maxH.size() > minH.size() + 1){
            minH.push(maxH.top());
            maxH.pop();
        }
        else if(minH.size() > maxH.size()){
            maxH.push(minH.top());
            minH.pop();
        }
    }
    
    double findMedian() {
        if(maxH.size() != minH.size()){
            return maxH.top();
        }
        else{
            return (minH.top() + maxH.top()) /2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */