#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void reverse(vector<int>&nums,int i,int j)
// {
//     while(i<j)
//     {
//         int temp = nums[i];
//         nums[i] = nums[j];
//         nums[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
void nextpermutation(vector<int>&nums)
{
    int n = nums.size();
    // finding the pivot element      step 1
    int idx = -1;
    for(int i = n-2; i>= 0;i--)
    {
        if (nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == -1)
    {
        // reverse(nums,0,n-1);
        reverse(nums.begin(),nums.end());
        return;
    }

    //sorting/reverse after pivot                   step 2
    reverse(nums.begin()+(idx+1),nums.end());

    //find the just greater element then idx    step 3
    int j = -1;
    for(int i = idx+1;i<n;i++)
    {
        if(nums[i]>nums[idx]){ 
            j = i;
            break;
        }
    }

    // swaping idx and j    step 4
    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;
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
    cout<<"next permutaion of the following array is :";
    nextpermutation(nums);
    for(int i=0;i<n;i++)
    cout<<nums[i]<<" ";


}