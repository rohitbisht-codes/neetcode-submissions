class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(int i =0;i<n;i++)
        {
        int greatest = INT_MIN;
            for(int j = i+1;j<n;j++)
            {
                if(arr[j]>greatest)
                {
                    greatest=arr[j];
                }

            }
            arr[i] = greatest;
        }
        arr[n-1]=-1;
        return arr;
    }
};