#include "iostream"
using namespace std;

int totalSols=0;

bool found=false;

bool isSafe(bool** &grid,int row,int col,int n){

    for(int i=row;i>=0;i--){
        if(grid[i][col]) return false;
    }

    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(grid[i][j]) return false;
    }

    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(grid[i][j]) return false;
    }

    return true;
}




void printGrid(bool** &grid,int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]){
                cout<<"Q ";
            }else{
                cout<<"_ ";
            }
        }
            cout<<endl;
    }cout<<"\n\n";

}

void NQueensSol(bool** grid,int r,int n){

    if(r==n){
        printGrid(grid,n);
        found=true;
        totalSols++;
        return ;
    }

    // if(found) return; //uncomment if you want only one solution

    for(int i=0;i<n;i++){
        if(isSafe(grid,r,i,n)){  //before placing check is it safe to place
            grid[r][i]=true;
            NQueensSol(grid,r+1,n); //go to next row and solve for rest grid
            grid[r][i]=false; //backtracking step 
        }
    }



}





int main(int argc, char const *argv[])
{
    int n;
    cout<<"No of rows: \n";
    cin>>n;

    bool** grid=new bool*[n];

    for(int i=0; i<n; i++){
        grid[i]=new bool[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            grid[i][j]=false;
        }
    }

    NQueensSol(grid,0,n);
    cout<<"total solutions: "<<totalSols;
    return 0;
}
