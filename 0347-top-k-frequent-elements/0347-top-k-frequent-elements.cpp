class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(auto i:nums)
        {
            mp[i]++;
        }

        vector<pair<int,int>> A;
        for(auto i: mp){
            A.push_back(i);
        }

        sort(A.begin(), A.end(), cmp);

        int counter =0;
        vector<int> v;
        for(auto i:A){
            v.push_back(i.first);
            counter++;
            if(counter == k)
                break;
        }
        return v;
    }
};