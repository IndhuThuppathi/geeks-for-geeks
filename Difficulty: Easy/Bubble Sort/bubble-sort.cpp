class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        for(int i=arr.size()-1;i>=1;i--)
        {
            for(int j=0;j<=i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
};