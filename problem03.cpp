#include <iostream>
using namespace std;
int main()
{
    int i, j,r,c;
    
    cout << "Enter row:";
    cin>>r;

    cout << "Enter coloum:";
    cin>>c;
    int mat[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter" << i+1 << " " << j+1 << "Value:";
            cin >>mat[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout <<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}