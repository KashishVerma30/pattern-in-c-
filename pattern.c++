using namespace std;
#include<iostream>
int main(){
   int i,j,n;
   cout<<"Enter the number of rows:";
   cin>>n;
   for(i=1;i<=n;i++){
	    for(j=1;j<i;j++){
	    	cout<<" ";
	    } 
        for(j=i;j<=n;j++){
	     cout<<j<<" ";
	    }
		   cout<<"\n";
    }
    for(i=n-1;i>=1;i--){
     	for(j=1;j<=i;j++){
    		cout<<" ";
    	}
    	for(j=i;j<=n;j++){
    		cout<<j<<" ";
    	}
	    cout<<"\n";
	}
}
