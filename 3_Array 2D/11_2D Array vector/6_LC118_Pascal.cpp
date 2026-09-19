#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>pascal(int numRows){                        //Leet code 118
    int m = numRows;
    vector<vector<int>>v;
    for(int i = 1;i<=m;i++){
        vector<int>a(i);
        v.push_back(a);       //vector array create
    }
    //generate
    for(int i = 0;i<m;i++){
        for(int j = 0;j<=i;j++){                                     //Leet Code 118 correct ans(function)
            if(j==0 || j==i){
                v[i][j]=1;
            }
            else
                v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
    return v;
}
int main()
{
    int n;
    cout<<"Enter the no of rows :";
    cin>>n;
    vector<vector<int>>v;    
     pascal(n);              
    //print                                           
    for(int i = 0;i<v.size();i++){ 
        for(int j = 0;j<=i;j++){
           cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}