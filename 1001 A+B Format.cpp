#include<iostream>
#include<string>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int c = a + b;
	string sum =to_string(c);
	int realLength;
	//数据是否正负 
	bool negetive = false;
	if(sum[0]=='-'){
		realLength = sum.length()-1;
		negetive = true;
	}
	else{
		realLength = sum.length();
	}
	int firstLength = realLength%3;
	if(negetive){
		cout<<sum[0];
		if(firstLength==0){
			for(firstLength;firstLength!=realLength;firstLength+=3){
				for(int i=firstLength+1;i<firstLength+4;i++){
					cout<<sum[i];
				}
				if(firstLength!=realLength-3&&sum.length()>3)
					cout<<",";
		}
	}else{
		for(int i=0;i<firstLength;i++){
			cout<<sum[i+1];
		}
		if(sum.length()>3)
			cout<<","; 
		for(firstLength;firstLength!=realLength;firstLength+=3){
			for(int i=firstLength+1;i<firstLength+4;i++){
				cout<<sum[i];
			}
			if(firstLength!=realLength-3)
				cout<<",";
		}
	}
		}else{
			if(firstLength==0){
				for(firstLength;firstLength!=realLength;firstLength+=3){
					for(int i=firstLength;i<firstLength+3;i++){
						cout<<sum[i];
					}
					if(firstLength!=realLength-3)
						cout<<",";
				}
		}else{
				for(int i=0;i<firstLength;i++){
					cout<<sum[i];
				}
				if(sum.length()>3)
					cout<<","; 
				for(firstLength;firstLength!=realLength;firstLength+=3){
					for(int i=firstLength;i<firstLength+3;i++){
						cout<<sum[i];
					}
					if(firstLength!=realLength-3&&sum.length()>3)
						cout<<",";
				}
			}
	}
	return 0;
}
