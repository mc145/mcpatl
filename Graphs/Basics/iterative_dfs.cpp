#include<bits/stdc++.h> 

using namespace std; 

vector<vector<int>> adj = {{2,6}, {1, 3, 6}, {2, 4}, {3, 5}, {4, 6}, {1, 2, 5}}; 


char nl = '\n'; 

void iterative_dfs(){
		
	stack<int> s; 
	vector<bool> visited(6, false); 
	 
	s.push(1); 
	
	while(s.size() != 0){
		int a = s.top(); 
		s.pop(); 
		
		
		if(!visited[a-1]){
			visited[a-1] = true; 
			cout << a << nl;
			
		} 
		
		for(int b: adj[a-1]){
			if(!visited[b-1]){
				s.push(b); 
			} 
		} 
		
	} 
} 


int main(){
	
	
	//driver code
	

iterative_dfs(); 
	 
} 
