void alphaRamp(int n) {
    char x='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            cout<<x<<" ";
        cout<<endl;
        x+=1;
    }
}
