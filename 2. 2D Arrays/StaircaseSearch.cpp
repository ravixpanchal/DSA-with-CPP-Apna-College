#include<iostream>
using namespace std;

bool search(int mat[][4],int n,int m,int key){
    int i=0,j=m-1;
    while(i<n && j>=0){
        int cell=mat[i][j];
        if(cell==key){
            cout<<"found at cell ("<<i<<","<<j<<")\n";
            return true;

        }
        else if (cell>key){
            j--;

        }
        else{
            i++;
        }

    }

    cout<<"key not found\n";
    return false;

}

int main (){
    int matrix [4][4]={{10,20,30,40},
                       {15,25,35,45},
                       {27,29,37,48},
                       {32,33,39,50}};

    search(matrix,4,4,33);



    return 0;
}