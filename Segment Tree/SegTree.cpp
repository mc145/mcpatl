#include<bits/stdc++.h> 

using namespace std; 

vector<int> SegTree(40); 

void PointUpdate(int cur, int start, int end, int index, int val){
    //Check if index is in the appropriate range 
    
    if(index < start || index > end) return; 

    if(start == end){
        SegTree[cur] = val; 
        return; 
    }

    PointUpdate(2*cur + 1, start, (start + end)/2, index, val); 
    PointUpdate(2*cur + 2, (start + end)/2 + 1, end, index, val); 
    
    SegTree[cur] = SegTree[2*cur + 1] + SegTree[2*cur + 2]; 
}


int RangeSum(int cur, int start, int end, int l, int r){
    if(l > end || r < start) return 0; 

    if(l <= start && r >= end){
        return SegTree[cur]; 
    }
    return RangeSum(2*cur + 1, start, (start + end)/2, l, r) + RangeSum(2*cur + 2, (start + end)/2 + 1, end, l, r); 
}


void PointUpdate(int index, int val){
    PointUpdate(0, 0, 8, index, val); 
}

int RangeSum(int l, int r){
    return RangeSum(0, 0, 8, l, r); 

} 
int main(){

    vector<int> ins{3, 4, 5, 6, 7, 8, 9, 10}; 
 
    for(int i = 0; i<9; i++){
        PointUpdate(i, ins[i]); 
    }

    cout << RangeSum(0, 8) << endl; 
  

   






    
}
