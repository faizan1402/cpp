#include<iostream>
using namespace std;
  int main(){
  	    for(int i=65;i<=70;i++){
  	    	for(int j=65;j<=70;j++){
  	    		if(j<=6-i){
  	    			cout<<j;
				} 
				  else
				  {
				  	cout<<" ";
				  }
			  }
			  cout<<endl;
		  }
		  return 0;
  }

