#include<iostream>
using namespace std;
 int main(){
 	   for(int i=1;i<=5;i++){
 	   	for(int j=65;j<=70;j++){
 	   		cout<<char(j+i-1)<<" ";
			}
			cout<<endl;
		}
		return 0;
 }
