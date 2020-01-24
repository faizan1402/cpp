#include<iostream>
using namespace std;
int main(){
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=10;j++){
			if(j<=i||j>=11-i){ // condition j<=i or j>=11-i because  when dry run the program and maximum condition  5>=6 (j=5 or j<=11-i ,i=5)
				cout<<"*";
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
