// #include<iostream>
// using namespace std;

// int diagonalSum(int matrix[][3],int n){
//     int sum=0;
    
//     //Time Complexity is O(n^2)

//     for(int i=0;i<n;i++)//rows
//     {
//         for(int j=0;j<n;j++)//coloums
//         {
//               //primary diagonal
//               if(i==j){
//                 sum+=matrix[i][j];
//               }
//               else if(j==n-i-1)
//               {
//                 sum+=matrix[i][j];
//               }
//         }

// }
// cout<<"sum ="<<sum<<endl;
// return sum;
// }

// int main (){
//     // int matrix [4][4]={{1,2,3,4},
//     //                    {5,6,7,8},
//     //                    {9,10,11,12},
//     //                    {13,14,15,16}};

//     // diagonalSum(matrix,4);

//       int matrix [3][3]={{1,2,3},
//                        {4,5,6},
//                        {7,8,9}};
//     diagonalSum(matrix,3);





//     return 0;
// }

                //TimeComplexity

#include<iostream>
using namespace std;

int diagonalSum(int mat [][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i];//pd
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];
        }
    }
    cout<<"sum="<<sum<<endl;
    return sum;
}


int main (){
    int matrix [4][4]={{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16}};
    diagonalSum(matrix,4);  
                    



    return 0;
}