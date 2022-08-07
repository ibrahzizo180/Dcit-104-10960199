# include<iostream> 
using namespace std;
void AvgOfPrimeNum(){
	int number;    int sum;   float count;   float avgnum;
	sum = 0;      count = 0;
	cout<<"Enter positive integer: ";
	cin>>number;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Prime numbers below "<<number<<" are"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
    for(int x=2;x<number;x++){
    	int flag=0;
    	for(int i=2;i<=x/2;i++){
    		if(x%i==0){
    			flag=1; break;
	    	}
		}
		if (flag==0){
		cout<<x<<endl;
		sum+=x;
		count+=1;
	    }
	}
	avgnum = sum/count;
	cout<<"The sum of the the printed prime numbers above is "<<sum<<endl;
	cout<<"The count of the prime numbers is "<<count<<endl;
	cout<<"The average the of the sum of the prime numbers above is "<<avgnum<<endl;
}
int main(){
	AvgOfPrimeNum();
	return 0;
}
