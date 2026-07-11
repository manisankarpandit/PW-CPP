#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&nums)
{
    int n = nums.size();
    int no0 = 0;
    int no1 = 0;
    int no2 = 0;
    for(int i = 0;i<n;i++)
    {
        if(nums[i] == 0) no0++;
        else if(nums[i] == 1) no1++;
        else if(nums[i] == 2) no2++;                                   // Leet Code 75
    }
    //filling element                                               Eg:- [2,0,2,1,1,0]
    for(int i = 0;i<n;i++)
    {
        if(i<no0) nums[i] = 0;
        else if (i<(no0+no1)) nums[i] = 1;
        else nums[i] = 2;
    }
    return;
}
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//          int n = nums.size();
//     int low = 0;
//     int mid = 0;                                                      // Leet Code 75
//     int high = n-1;
//     while(mid<=high)                                                 // using 3 pointer method
//     {
//         if(nums[mid] == 2){
//             int temp = nums[mid];
//             nums[mid] = nums[high];
//             nums[high] = temp;
//             high--;
//         }
//         else if(nums[mid] == 0){
//             int temp = nums[mid];
//             nums[mid] = nums[low];
//             nums[low] = temp;   
//             low++;
//             mid++;
//         }
//         else mid++;
//     }
//     return;
//     }
// };
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