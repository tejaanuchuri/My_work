#include<iostream>
using namespace std;

/* nenu rasina code brute force so efficient kadhu edi
manam konni modifications cheyalee e code loo
 array lo value e range lo vuteney 1<=arr[i]<=9 because cnt array size 10 echanu kabbatti
 oka veylaa arr[i] range ela vuntey -1<=arr[i]<=1000000 appudhu hash array size entha estam cheputhav gud code modify ki try cheyii
 manam only hash array marchalee based on arr[i] value ni  array size(n) base chesi kadhu
*/
void sort_by_freq(long long int arr[100],int n){
	long long int cnt[1000000] = {0};	//direct ga range batti size mention cheyalee like(1000000-1)+1 <= is size of cnt
									// in case range ela vuntey -1000<=arr[i]<=1000 apudhu hash size mention cheyii  ? place 
									// l<=arr[i]<=r ==> size = (r-l)+1 <== so e formula vesthey size entha vindalo hash di vasthadhi k na k
									
									// -1000<=arr[i]<=1000 = total elements -1000 to -1 is 1000
									//												0   is 	  1
									//										 1 to 1000  is 1000
																			//total		is 2001  
									
	long long int b[1000000]={0};
	for(int i=0;i<n;i++)	// find freq  o(n-0) = o(n) right
		cnt[arr[i]]++;
	
	for(int i=0;i<cnt_size;i++)	// number of iteration in loop is o(cnt_size-0) = o(cnt_size)	
			b[i]=i;                  //o(10)
		
	
	for(int i=0;i<cnt_size-1;i++){			// o(cnt_size-1-0) = o(cnt_size) + o(-1) - o(0)= o(cnt_size) + o(1) + o(1) =o(cnt_size) 
											// time complexcity lo entha number vunna danini o(1) ga consider cheyalle
		for(int j=0;j<cnt_size-i-1;j++){    // same e loop ki try cheyi
		                                      //o(cnt_size-i-1-0) = o(cnt_size)-o(0)-0(1)-o(0)=o(cnt_size) antey
			if(cnt[j]<cnt[j+1]){
				//freq swap
				int temp = cnt[j];
				cnt[j] = cnt[j+1];
				cnt[j+1] = temp;
				
				//elements swap
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
	for(int i=0;i<10;i++){//o(10) edi crt ey (in terms of variable) == > here 10 is cnt array size so o(cnt size)
		for(int j=0;j<cnt[i];j++){  // max value of counnt ha k nuv ba anakysus chesavu  gud coing to point 
									// manam time complexity ni number lo chepakudadu in terms value variables lo chepaleeok
			cout<<b[i]<<" ";
		}
	}
	return ;
}
int main(){
	int n;	//size of array
	cin>>n;	// read size of array
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	sort_by_freq(arr,n);
	return 0;
}
