#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		for(int j=65;j<=70;j++){
			if(j<=6-i){
				cout<<" ";
			}
		
		else{
			cout<<char(j);
		}
	}
		cout<<endl;
	}
	return 0;
}
