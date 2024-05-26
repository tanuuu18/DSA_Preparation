class Solution
{
public:
    // Brute Approach
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(),arr.end());
        return arr[n-1];
    }

    // Optimal Approach
    int largest(vector<int> &arr, int n)
    {
        int largest = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return largest;
    }
};
