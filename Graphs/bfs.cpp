#include<bits/stdc++.h> 

using namespace std; 

vector<vector<int>> adj = {{2,6}, {1, 3, 6}, {2, 4}, {3, 5}, {4, 6}, {1, 2, 5}}; 


char nl = '\n'; 



void bfs(){
	
	queue<int> q; 
	
	q.push(1); 
	
	vector<bool> visited(6, false); 
	
	while(q.size() != 0){
		int a = q.front(); 
		q.pop(); 
		
		if(visited[a-1] == false){
			cout << a << nl; 
			visited[a-1] = true; 
		} 
		
		for(int b: adj[a-1]){
			if(!visited[b-1]){
				q.push(b); 
			}
		} 
	} 
	
} 



int main(){
	
	
	//driver code
	

bfs();  
	 
} 
