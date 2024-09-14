vector<int> pos, neg;

for(int x : arr){
    if(x < 0) neg.push_back(x);
    else pos.push_back(x);
}

if(pos.size() >= neg.size()){
    
    int y = neg.size();
    
    for(int i = 0; i < y; i++){
        
        arr[2*i] = pos[i];
        arr[2*i + 1] = neg[i];
        
    }
    
    int indx = 2*y;
    
    for(int i = y; i < pos.size(); i++){
        arr[indx] = pos[i];
        indx++;
    }
    
}
else{
    
    int y = pos.size();
    
    for(int i = 0; i < y; i++){
        
        arr[2*i] = pos[i];
        arr[2*i + 1] = neg[i];
        
    }
    
    int indx = 2*y;
    
    for(int i = y; i < neg.size(); i++){
        arr[indx] = neg[i];
        indx++;
    }
    
}

}