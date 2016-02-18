#include<iostream>
using namespace std;

int a[1000001];

void sieve(){
	int i, j;

	for(i=0; i<=1000000; i++)	a[i] = 1;

	for(i=4; i<=1000000; i+=2)	a[i] = 0;

	for(i=3; i*i<=1000000; i+=2){
		if(a[i]==1){
			for(j=i*i; j<=1000000; j+=i){
				if(a[j]==1)	a[j]=0;
			}
		}
	}
}

void print_prime_factors(int n){
	int i;
	for(i=2; i<=n/2; i++){
		if(n%i == 0){
			if(a[i]==1){
				cout<<i<<endl;
			}
		}
	}
}

int main(){
	sieve();

	int n;
	cin>>n;

	print_prime_factors(n);

	return 0;
}
