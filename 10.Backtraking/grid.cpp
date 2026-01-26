#include<iostream>
#include<string>
using namespace std;

int grid_ways(int r,int c,int m,int n){
    if(r==m-1 && c==n-1){ //baseCase
        return 1;
    }
    if(r>=n || c>=m){
        return 0;
    }
     
     //right
    int v1=grid_ways(r,c+1,m,n);

    //down
    int v2=grid_ways(r+1,c,m,n);


    return v1+v2;

    

}

int main (){
    int n=3;
    int m=3;
    cout<<grid_ways(0,0,m,n);
    
    
    
    



    return 0;
}