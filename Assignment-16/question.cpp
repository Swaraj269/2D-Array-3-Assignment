// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<< "Enter the rows of the matrix: ";
    cin>>n;
    int m;
    cout<< "Enter the columns of the matrix: ";
    cin>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    cout<< "Enter the elements of the matrix: "<< endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    bool br = false;
    bool bc = false;

    for(int i=0; i<n; i++){
        if(matrix[i][0]==0){
            br=true;
            break;
        }
    }
    for(int j=0; j<m; j++){
        if(matrix[0][j]==0){
            bc=true;
            break;
        }
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    for(int i=1; i<n; i++){
        if(matrix[i][0]==0){
            for(int j=1; j<m; j++){
                matrix[i][j]=0;
            }
        }
    }
    for(int j=1; j<m; j++){
        if(matrix[0][j]==0){
            for(int i=1; i<n; i++){
                matrix[i][j]=0;
            }
        }
    }
    if(bc == true){
        for(int j=0; j<m; j++){
            matrix[0][j]=0;
        }
    }
    if(br == true){
        for(int i=0; i<n; i++){
            matrix[i][0]=0;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}