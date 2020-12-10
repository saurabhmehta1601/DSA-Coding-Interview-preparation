#include <iostream> //run program and see for test cases to know how spiral matrix looks like 
using namespace std;


int main(){
	
	int n; // spiral matrix dimensions
	cin>>n;
	
	int spiralMatrix[n][n];
	
	int start_row=0,end_row=n-1,start_column=0,end_column=n-1;
	int counter=1;
	
	while(start_column<=end_column && start_row<=end_row){
		
		for(int j=start_column;j<=end_column;j++){
			spiralMatrix[start_row][j]=counter;
			counter++;
		}
		start_row++;
		
		for(int i=start_row;i<=end_row;i++){
			spiralMatrix[i][end_column]=counter;
			counter++;
		}
		end_column--;
		
		for(int j=end_column;j>=start_column;j--){
			spiralMatrix[end_row][j]=counter;
			counter++;
		}
		end_row--;
		
		for(int i=end_row;i>=start_row;i--){
			spiralMatrix[i][start_column]=counter;
			counter++;
		}
		start_column++;
		
		
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<spiralMatrix[i][j]<<" ";
		}cout<<'\n';
	}
	
}


