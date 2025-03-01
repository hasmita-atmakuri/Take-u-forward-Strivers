bool checkArmstrong(int n){
	int a=n,sum=0;
	int cnt=log10(n)+1;
	if(n==0)
		return true;
	while(n!=0){
		sum+=pow((n%10),cnt);
		n/=10;
	}
	if(a==sum)
		return true;
	else
		return false;
}
