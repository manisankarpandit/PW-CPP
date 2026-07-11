#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&nums)
{
    int n = nums.size();
    int low = 0;
    int mid = 0;                                                      // Leet Code 75
    int high = n-1;
    while(mid<=high)                                                 // using 3 pointer method
    {
        
        if(nums[mid] == 2){
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
        else if(nums[mid] == 0){
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;   
            low++;
            mid++;
        }
        else if(nums[mid == 1]) 
            mid++;
    }
    return;
}
int main()
{
    vector<int>nums;
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter the element of array :";
    for(int i = 0;i<n;i++)
    {
        int p;
        cin>>p;
        nums.push_back(p);
    }
    sort(nums);
    for(int i=0;i<n;i++)
    cout<<nums[i]<<" ";

}