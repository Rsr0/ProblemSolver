class UndergroundSystem {
public:
    UndergroundSystem() {
        
    }
    unordered_map<int, pair<string, int>> mp;
    unordered_map<string, unordered_map<string, pair<int,int>>> v; // id->(start), end -> (time diff, count) 
    
    void checkIn(int id, string stationName, int t) {
        mp[id]={stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string st=mp[id].first;
        if(v[st].count(stationName)<=0){
            v[st][stationName].second=1;
             v[st][stationName].first=t-mp[id].second;
        }
        else{
             v[st][stationName].second++;
             v[st][stationName].first+=t-mp[id].second; // adding time diff
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        double ans=0;
        ans=(double)((double)(v[startStation][endStation].first) / (double)(v[startStation][endStation].second));
        return ans;
        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */