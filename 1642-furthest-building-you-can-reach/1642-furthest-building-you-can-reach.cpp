// class Solution {
// public:
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
//         int n=heights.size(),cnt=0;
//         for(int i=1;i<n;i++){
//             if(heights[i-1]>=heights[i]){
//                 cnt++;
//             }else{
//                 if(ladders<=0 and bricks<=0)
//                         break;
//                 if((heights[i] - heights[i-1])<=bricks and bricks>0){
//                     bricks=bricks-(heights[i] - heights[i-1]);
//                     cnt++;
//                 }else if(ladders>0){
//                     if(ladders<=0 and bricks<=0)
//                         break;
//                     ladders--;
//                     cnt++;
//                 }
//             }
                
//         }
//         return cnt;
//     }
// };

class Solution {
public:
    int furthestBuilding(vector<int>& A, int bricks, int ladders) {
           priority_queue<int> pq;
        for (int i = 0; i < A.size() - 1; i++) {
            int d = A[i + 1] - A[i];
            if (d > 0)
                pq.push(-d);
            if (pq.size() > ladders) {
                bricks += pq.top();
                pq.pop();
            }
            if (bricks < 0)
                return i;
        }
        return A.size() - 1;
    }
};