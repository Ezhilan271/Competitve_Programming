class RecentCounter {
public:
    queue<int> result;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        result.push(t);
        while(result.front()<t-3000)   result.pop();
        return result.size();
    }
};
