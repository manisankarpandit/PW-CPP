#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the rows of 1st matrix :";
    cin>>m;
    int n;
    cout<<"Enter the columns of 1st matrix :";
    cin>>n;

    int p;
    cout<<"Enter the rows of 2nd matrix :";
    cin>>p;
    int q;
    cout<<"Enter the columns of 2nd matrix :";
    cin>>q;
    if(n==p)
    {
        int a[m][n];
        cout<<"Enter the element of 1st matrix "<<endl;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter the element of 2nd matrix "<<endl;
        for(int i = 0;i<p;i++){
            for(int j = 0;j<q;j++){
                cin>>b[i][j];
            }
        }
        //resultant matrix
        int res[m][q];
        for(int i = 0;i<m;i++){;
            for(int j=0;j<q;j++){
                //multiply
                res[i][j]=0; //initial
                //res[i][j] = a[i][k]*b[k][j] + a[i][k]*b[k][j] + a[i][k]*b[k][j]
                //k = 0 to q-1
                for(int k = 0;k<n;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }

            }
        }
        cout<<endl;
        //print
        for(int i = 0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else // n!=p
    cout<<"The matrix can not be multiplied ";
}
