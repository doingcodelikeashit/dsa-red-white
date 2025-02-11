#include<bits/stdc++.h>
using namespace std;
int main(){
    //Q-1
    int rowSize,colSize,sum=0;
    cout<<"Enter Row size :: ";
    cin >> rowSize;
    cout<<"Enter Col size :: ";
    cin >> colSize;
    int a[rowSize][colSize];
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << "a["<<i<<"]["<<j<<"] = ";
            cin >> a[i][j];
            sum+=a[i][j];
        }
    }
    float avg = (float)sum/(rowSize*colSize);
    cout<<"\n Avg of matrix is :: "<<avg<<endl;
    //Q-2
    rowSize=0;
    colSize=0;
    cout<<"Enter Row size :: ";
    cin >> rowSize;
    cout<<"Enter Col size :: ";
    cin >> colSize;
    int a1[rowSize][colSize];
    int a2[rowSize][colSize];
    cout<<"\n Enter first matrix :: \n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << "a1["<<i<<"]["<<j<<"] = ";
            cin >> a1[i][j];
        }
    }
    cout<<"\n Enter Secound matrix :: \n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << "a2["<<i<<"]["<<j<<"] = ";
            cin >> a2[i][j];
        }
    }
    cout<<"\n Addition of matrix is :: \n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout<<"["<<i<<"]["<<j<<"] = "<<(a1[i][j]+a2[i][j])<<endl;
        }
        
    }
    //Q-4
    int matrixSize;
    sum=0;
    cout<<"Enter matrix dimantions :: ";
    cin >> matrixSize;
    int a3[matrixSize][matrixSize];
    cout<<"\n Enter  matrix :: \n";
    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            cout << "a3["<<i<<"]["<<j<<"] = ";
            cin >> a3[i][j];
        }
    }
    for (int i = 0; i < matrixSize; i++)
    {
        sum+=a3[i][i];
    }
    cout<<"\n Sum of diagonal is :: "<<sum<<endl;
    //Q-5
    rowSize=0;
    colSize=0;
    sum=0;
    cout<<"Enter Row size :: ";
    cin >> rowSize;
    cout<<"Enter Col size :: ";
    cin >> colSize;
    int a4[rowSize][colSize];
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << "a4["<<i<<"]["<<j<<"] = ";
            cin >> a4[i][j];
            if (i==0||j==0||i==(colSize-1)||j==(colSize-1))
            {
                sum+=a4[i][j];
            }
        }
    }
    cout<<"\n sum of boundry is :: "<<sum<<endl;
}