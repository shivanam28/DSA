 for(int i = 0;i<n; i++){
        for(int sp = n-i-1; sp>0; sp--){
            cout<<" ";
        }
        for(int j=i+1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }