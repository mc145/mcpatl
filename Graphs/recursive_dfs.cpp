#include<bits/stdc++.h> 


using namespace std; 

char nl = '\n'; 


vector<vector<int>> adj = {{2,6}, {1, 3, 6}, {2, 4}, {3, 5}, {4, 6}, {1, 2, 5}}; 
vector<bool> visited(6, false); 


void dfs(vector<vector<int>> adj, int n){
	visited[n-1] = true; 
	cout << n << nl; 
	for(int neighbor: adj[n-1]){
		if(!visited[neighbor-1]){
			dfs(adj, neighbor); 
		}
	}
} 

int main(){
		
		
		//driver code
		
	for(int i = 1; i<=adj.size(); i++){
		if(!visited[i-1]){
		dfs(adj, i); 
		}

	}

} 
