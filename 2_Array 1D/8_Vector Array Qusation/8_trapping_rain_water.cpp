#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
        int n = height.size();
        if(n==0) return 0;
        // privious gratest element                      //leet code42
        vector<int> prev(n);
        prev[0] = -1;
        int leftmax = height[0];
        for (int i = 1; i < n; i++) {
            prev[i] = leftmax;
            if (leftmax < height[i])
                leftmax = height[i];
        }
        // next gratest element
        vector<int> next(n);
        next[n - 1] = -1;
        int rightmax = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            next[i] = rightmax;
            if (rightmax < height[i])
                rightmax = height[i];
        }
        // minimum array
        vector<int> mini(n);
        for (int i = 0; i < n; i++) {
            mini[i] = min(prev[i], next[i]);
        }
        // calculating water
        int water = 0;
        for (int i = 1; i < n - 1; i++) {
            if (height[i] < mini[i]) {
                water += (mini[i] - height[i]);
            } // problem
        }
        return water;
    }
int main()
    {
        vector<int>v;
        int n;
        cout<<"Enter the size of array :";
        cin>>n;
        cout<<"Enter the element of array :";
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            v.push_back(p);
        }
        trap(v);
        for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    }
