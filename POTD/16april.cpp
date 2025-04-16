// 2537. Count the Number of Good Subarrays 
/*
class Solution {
    public:
        long long countGood(vector<int>& nums, int k) {
            long long int n = nums.size();
             long long left = 0, right =0; 
           long long good_subarrays =0;
            unordered_map<long long, long long> freq;
           long long equal_pairs =0;
            
            while(left<n){
                while(right<n and equal_pairs<k){
                    freq[nums[right]]++;
                    if(freq[nums[right]]>= 2)
                        equal_pairs += freq[nums[right]]-1;
                        right++;
                    }
                    if(equal_pairs>=k)
                        good_subarrays += n-right+1;
                    
                    //remove left item 
                    freq[nums[left]]--;
                    if(freq[nums[left]]>0)
                       equal_pairs -= freq[nums[left]];
                    left++;
            }
            return good_subarrays ;
            
        }
    };


    */