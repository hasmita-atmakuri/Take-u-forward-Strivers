void nLetterTriangle(int n) {
    for(int i=1;i<=n;i++){
        char x='A';
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x+=1;
        }
        cout<<endl;
    }
}