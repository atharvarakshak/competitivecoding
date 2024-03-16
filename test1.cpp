#include<bits/stdc++.h>
using namespace std;
    
    bool isValid(int i,int j,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m){
            return true;
        }
        return false;
    }
int main(){
        int i=0,j=0,n=4,m=3;
         if(isValid(i+1,j-1,n,m)){
                      cout<<"yes";
                       
                    }
                    else{
                      cout<<"No";

                    }
    }
    // void gameOfLife(vector<vector<int>>& board) {
    //         int n= board.size();
    //         int m=board[0].size();
    //         vector<vector<int>> comp(n,vector<int>(m));
            
    //         for(int i=0;i<n;i++){
    //             for(int j=0;j<m;j++){
    //                 comp[i][j]=board[i][j];
    //             }
    //         }
    //           for(int i=0;i<n;i++){
    //             for(int j=0;j<m;j++){
    //                 int c=0;
    //                 if(isValid(i-1,j-1,n,m)){
    //                     if(comp[i][j]==1){
    //                         c++;
    //                         // cout<<"1";
    //                     }
    //                     //  cout<<comp[i][j];
    //                 }
    //                  if(isValid(i-1,j,n,m)){
    //                     if(comp[i][j]==1){
    //                         c++;
    //                         // cout<<"2";
    //                     }
    //                     // cout<<comp[i][j];
    //                 }
    //                  if(isValid(i-1,j+1,n,m)){
    //                     if(comp[i][j]==1){
    //                         c++;
    //                         // cout<<"3";
    //                     }
    //                 //    cout<<comp[i][j];
    //                 }
    //                  if(isValid(i,j+1,n,m)){
    //                     if(comp[i][j]==1){
    //                         c++;
    //                         // cout<<"4";
    //                     }
    //                     // cout<<comp[i][j];
    //                 }
    //                  if(isValid(i+1,j+1,n,m)){
    //                     if(comp[i][j]==1){
    //                         c++;
    //                         // cout<<"5";
    //                     }
    //                     // cout<<comp[i][j];
    //                 }
    //                  if(isValid(i+1,j,n,m)){
    //                     if(comp[i][j]==1){
    //                         c++;
    //                         // cout<<"6";
    //                     }
    //                     // cout<<comp[i][j];
    //                 }
    //                  if(isValid(i+1,j-1,n,m)){
    //                     if(comp[i][j]==1){
    //                         c++;
    //                         // cout<<"7";
    //                     }
    //                     // cout<<comp[i][j];
    //                 }
    //                  if(isValid(i,j-1,n,m)){
    //                     if(comp[i][j]==1){
    //                         c++;
    //                         // cout<<"8";
    //                     }
    //                     // cout<<comp[i][j];
    //                 }
    //                 if()
    //                if(c<2){
    //                 board[i][j]=0;
    //                }
    //                else if(board[i][j]==1 && (c==2 || c==3)){
    //                     board[i][j]=1;
    //                }
    //                else if(board[i][j]==1  && c>3){
    //                  board[i][j]=0;
    //                }
    //                else if(board[i][j]=0 && c==3){
    //                  board[i][j]=1;
    //                }

    //             }
    //         }
            
    // }
