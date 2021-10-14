#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	
	for(int x=0;x<5;x++){
		for(int y=0;y<x;y++){
			cout<<"* ";
		}
		cout<<endl;		
	}
	
	for(int x=0;x<5;x++){
		for(int y=x;y<5;y++){
			cout<<"* ";
		}
		cout<<endl;
		
	}
	
	for(int x=0;x<5;x++){
		for(int y=x;y<5;y++){
			cout<<"  ";
		}
		for(int y=0;y<x;y++){
			cout<<"* ";
		}
		cout<<endl;		
	}
	
	
	for(int x=0;x<5;x++){
	
		for(int y=0;y<x;y++){
			cout<<"  ";
		}
			for(int y=x;y<5;y++){
			cout<<"* ";
		}
		cout<<endl;		
	}
	return 0;
}
