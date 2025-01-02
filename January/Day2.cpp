bool isVowel(char ch){
        if(ch=='a'|| ch=='i' || ch=='e' ||ch=='o' ||ch=='u')return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>result(queries.size());
        vector<int>cmSum(words.size());
        int sum=0;
        for(int i=0;i<words.size();i++){
            if(isVowel(words[i][0])&& isVowel(words[i].back()))sum++;
            cmSum[i]=sum;
        }
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            result[i] = cmSum[r] - ((l > 0) ? cmSum[l-1] : 0);
        }
        return result;
    }
