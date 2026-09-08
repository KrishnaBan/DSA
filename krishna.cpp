# include<bits/stdc++.h>
using namespace std;

int main(){
     
    int pin,tpin,bal,amt;
    
    tpin=6969;
    bal=2000;
     
    cout<<"ENTER YOUR PIN : ";
    cin>>pin;
    
    if(pin==tpin){
    	cout<<"\nENTER YOU AMOUT : ";
    	cin>>amt;
    	if(amt<=bal){
    		cout<<"\nCOLLECT YOUR CASH";
    		
		}
		else{
			cout<<"\nINSUFFICENT BALANCE!!";
			
		}
	}
    else{
    	cout<<"\nWRONG PIN";
	}
    
    
    
}
	
	
	
	

