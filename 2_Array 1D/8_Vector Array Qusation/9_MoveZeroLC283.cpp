#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
//     int noz=0;
//     int n=nums.size();
//     vector<int>v;
//     for(int i = 0;i<n;i++){
//         if(nums[i]!=0) v.push_back(nums[i]);                 //le283
//         else noz++;
//     }
//     for(int i = 1;i<=noz;i++){
//         v.push_back(0);
//     }
//     for(int i = 0;i<n;i++){
//         nums[i] = v[i];
//     }
// }

//                                Another Solution without using exta array
int n=nums.size();
        int i = 0;
        int j = 0;
        while(i<n && j<n){
            if(nums[i]==0 && nums[j]!=0){
                if(j>i) swap(nums[i],nums[j]);
                else j++;
            }
            else if (nums[i]!=0) i++;
            else if (nums[j]==0) j++;
        }
    }
    int main(){
        int a;
        cout<<"Enter the size of array :";
        cin>>a;
        cout<<"Enter the element of array :"<<endl;
        vector<int>v;
        for(int i = 0;i<a;i++){
            int p;
            cin>>p;
            v.push_back(p);
        }
        moveZeroes(v);
        for(int i=0;i<a;i++)
        cout<<v[i]<<" ";
    }