#include <iostream>
#include<bits/stdc++.h> 
#include <string>
using namespace std;


int main() {
	// your code goes here
	int num_of_strings;

	cin>>num_of_strings;
	string str[num_of_strings];
	
	for(int i = 0;i<num_of_strings;i++){
	    cin >> str[i];
	}
	
	for(int i = 0;i<num_of_strings;i++){
	    int n = str[i].size();

	    if (n%2 == 0){
	        
	        string a = str[i].substr(0,(n/2));
	      
	        string b = str[i].substr(n/2,n/2);
	        
	        sort(a.begin(),a.end());
	        sort(b.begin(),b.end());
	        
	        if(a.compare(b) == 0 ){
	            cout << "YES"<<endl;
	        }
	        else{
	            cout <<"NO"<<endl;
	        }
	    }
	     else if (n%2 != 0){
	        
	        string a = str[i].substr(0,(n-1)/2);
	       
	        string b = str[i].substr((n+1)/2,(n-1)/2);
	     
	        sort(a.begin(),a.end());
	        sort(b.begin(),b.end());
	             
	        if(a.compare(b) == 0 ){
	            cout << "YES"<<endl;
	        }
	        else{
	            cout <<"NO"<<endl;
	        }
	    }
	}
	
	return 0;
}
