class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     std::vector<int> seen;
     for (int i : nums) {
        if (std::find_if(seen.begin(),seen.end(),[&i](const auto& item){
            return item == i;
        }) != seen.end()) return true;
        seen.push_back(i);
     }  
     return false;
    }
};