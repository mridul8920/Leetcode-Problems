class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            //REMOVE IF OUT OF BOUND
            if(!dq.empty() and dq.front()==i-k) 
                    dq.pop_front();
       //REMOVE IF NOT IN DEC ORDER
      // Now we are ready to push our new element nums[left]'s index into the queue.
     // But before that, we should clear elements which is smaller then nums[left].
    // Why? Because if nums[left] is bigger then nums[i], 
   // there will be no way for nums[i] be selected as the max number in range (left-k, left]
            while(!dq.empty() and nums[dq.back()]<=nums[i]) 
                    dq.pop_back();
            //PUSH THE INDEX
            dq.push_back(i);    
            //PUSH THE ANS IF THE MAX WINDOW SIZE REACHED
            if(i>=k-1)  ans.push_back(nums[dq.front()]);    
        }
        return ans;
    }
};