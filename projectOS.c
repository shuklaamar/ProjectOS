#include<bits/stdc++.h>
using namespace std;
struct process{
	int at,bt,pr,pno,wt;
};
int main(){
	int n;
	cout<<"enter the no of processes";
	cin>>n;
	struct process pro[n];
	int arr[n],bur[n],pri[n],prn[n];
	for(int k=1;k<=n;k++){
	cout<<"enter the arrival time of the process";
	cin>>arr[k];
	pro[k].at=arr[k];
}   
	for(int k=1;k<=n;k++){
	cout<<"enter the burst time of the process";
	cin>>bur[k];
	pro[k].bt=bur[k];
	
}   
    int sum=0,sor;
    for(int k=1;k<=n;k++){
    sum+=pro[k].bt;
    }
    cout<<"gantt chart"<<endl;
    cout<<"processes are in this order"<<"P:";
	for(int k=1;k<sum;k++){
		for(int i=1;i<=n;i++){
			if(pro[i].at<k){
				pro[i].wt=k-pro[i].at;
			    pro[i].pr=1+(pro[i].wt/pro[i].bt);
			}
		for(int i=1;i<=n;i++){
			if(pro[i].pr>pro[i+1].pr){
				sor=pro[i].pr;
				pro[i].pr=pro[i+1].pr;
				}
				}
			
		}
	}
	for(int i=1;i<=n;i++){
	
	}
}
