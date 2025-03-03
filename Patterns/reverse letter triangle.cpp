void nLetterTriangle(int n) {
    for(int i=1;i<=n;i++){
        char x='A';
        for(int j=n-i+1;j>=1;j--){
            cout<<x<<" ";
            x+=1;
        }
        cout<<endl;
    }
}