#include<bits/stdc++.h>
using namespace std;
struct process{
	int at,bt,pr,pno,wt;
};

int main(){
	int n;
	cout<<"Enter the no of processes"<<":";
	cin>>n;
	if(n<0){
		cout<<""<<endl<<"**************************************"<<endl<<""<<endl;
		cout<<"Negative No of processes is not possible"<<endl;
		cout<<""<<endl<<"**************************************"<<endl;
		_exit(0);
		
	}
	struct process pro[n];
	int arr[n],bur[n],pri[n],prn[n];
	for(int k=1;k<=n;k++){
	cout<<"Enter the arrival time of the process"<<"P"<<k<<":";
	cin>>arr[k];
	if(arr[k]>=0){
	pro[k].at=arr[k];
	}
	else{
		cout<<""<<endl<<"**************************************"<<endl<<""<<endl;
		cout<<"Negative arrival is not possible"<<endl;
		cout<<""<<endl<<"**************************************"<<endl;
		_exit(0);
	}
	
}    
     	for(int i=1;i<=n;i++){
	int local=i;
	for(int k=i+1;k<=n;k++){
	if(pro[k].at<pro[local].at){
		local=k;
	}
	}	
	int temp;
		temp=pro[i].pr;
		pro[i].pr=pro[local].pr;
		pro[local].pr=pro[i].pr;
		
		temp=pro[i].at;
		pro[i].at=pro[local].at;
		pro[local].at=pro[i].at;
		
		temp=pro[i].bt;
		pro[i].bt=pro[local].bt;
		pro[local].bt=pro[i].bt;
		
		temp=pro[i].wt;
		pro[i].wt=pro[local].wt;
		pro[local].wt=pro[i].wt;
		
	
	
	}   

for(int k=1;k<=n;k++){
	cout<<"Enter the burst time of the process"<<"P"<<k<<":";
	cin>>bur[k];
	if(bur[k]>=0){
	
		pro[k].bt=bur[k];
	}
	else{
		cout<<""<<endl<<"**************************************"<<endl<<" "<<endl;
		cout<<"Negative burst is not possible"<<endl;
		cout<<""<<endl<<"**************************************"<<endl;
		_exit(0);
	}
	}   
for(int k=1;k<=n;k++){
		pro[k].pno=k;
	}
    int sum=0,sor;
    for(int k=1;k<=n;k++){
    sum+=pro[k].bt;
    }
	for(int k=1;k<sum;k++){
		for(int i=1;i<=n;i++){
			if(pro[i].at<=k){
				pro[i].wt=k-pro[i].at;
			    
			}
		}
		for(int k=1;k<=n;k++){
		pro[k].pr=(1+(pro[k].wt/pro[k].bt));
	}
    
}


	for(int i=1;i<=n;i++){
	int local=i;
	for(int k=1+i;k<=n;k++){
	if(pro[k].pr>pro[local].pr){
		local=k;
	}
	}	
     int temp;
		temp=pro[i].pr;
		pro[i].pr=pro[local].pr;
		pro[local].pr=pro[i].pr;
		
		temp=pro[i].at;
		pro[i].at=pro[local].at;
		pro[local].at=pro[i].at;
		
		temp=pro[i].bt;
		pro[i].bt=pro[local].bt;
		pro[local].bt=pro[i].bt;
		
		temp=pro[i].wt;
		pro[i].wt=pro[local].wt;
		pro[local].wt=pro[i].wt;
	}
	int avg_tat=pro[1].pr;
	int avg_wt;
	for(int i=1;i<=n;i++){
		
	avg_wt=pro[i].wt+pro[i+1].wt;
	}
	if(avg_wt>0){
		cout<<endl<<"Average waiting time of the processes is:"<avg_wt/n<<endl;
	}
	else{
	cout<<"Average waiting time of the processes is:"<<(-avg_wt)/n<<endl;
}
    
    if(avg_wt>0){
		cout<<"Average turn arround time of the processes is:"<<avg_tat<<endl;
	}
	else{
	cout<<"Average turn arround time of the processes is:"<<avg_tat<<endl;
}
    
}   
