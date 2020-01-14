// Pattern printing

#include <iostream>
using namespace std;
 
int main() {
	int t=0;
	scanf("%d",&t);
	while(t--){
		int n=0, x=1;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			for(int j=0;j<n-i;j++) printf(" ");
			if(i==1)printf("*\n");
			else{
				printf("@");
				for(int j=0;j<x;j++)printf("*");
				x+=2;
				printf("@\n");
			}
		}
	}
	return 0;
}
