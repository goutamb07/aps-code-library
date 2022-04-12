class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,right=n,top=0,bottom=n;
        vector<vector<int>>ans(n,vector<int>(n));
        int k=1;
        while(left<right && top<bottom)
        {
            for(int i=left;i<right;i++) ans[top][i]=k++;
            top++;
            for(int i=top;i<bottom;i++) ans[i][right-1]=k++;
            right--;
            
            if(left>=right && top>=bottom) break;
            
            for(int i=right-1;i>left-1;i--) ans[bottom-1][i]=k++;
            bottom--;
            for(int i=bottom-1;i>top-1;i--) ans[i][left]=k++;
            left++;
        }
        return ans;
    }
};
