class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map< int, int > myMap;
        vector<int> vectResult; 

        for( int i = 0; i < nums.size(); ++i){
            int differences = target - nums[i]; 
            if ( myMap. find( differences ) != myMap.end() ) 
            {
                vectResult.push_back( myMap[differences]);
                vectResult.push_back( i);
                return vectResult;
            }
            else
            {
                myMap[nums[i]] = i; 
            }
        }

        return vectResult; 
    }
}; 
