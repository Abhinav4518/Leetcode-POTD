int maxScore(string s) {
        int ones=0;
        int zeroes=0;
        int maxs=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')ones++;
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1')ones--;
            else zeroes++;
            maxs=max(maxs,ones+zeroes);
        }
        return maxs;
    }
