#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			if(j<=5-i){
				cout<<" ";
			}
			else{
				cout<<char(65+i);
			}
		}
			cout<<endl;
		}
	return 0;

}

