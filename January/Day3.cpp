int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        long long leftsum=0;
        long long rightsum=0;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            leftsum+=nums[i];
            rightsum=sum-leftsum;
            if(leftsum>=rightsum)count++;
        }
        return count;
    }
