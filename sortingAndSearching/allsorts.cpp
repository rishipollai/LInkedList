Binary search - 0(logn)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int s;cin>>s;
    int st=0,nd=n-1;
    int md=(st+nd)/2;
    while(st<=nd){
        if(a[md]==s)
        {
            cout<<md<<endl;
            break;
        }
        if(a[md]<s)
           st=md+1;
        if(a[md]>s)
           nd=md-1;
        
       md=(st+nd)/2;
    }
    if(st>nd)
      cout<<"Element is not there";
}


==========================================
bubble sort 0(n^2)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(auto x:a)
       cout<<x<<" ";
}

================================================
Insertion sort 0(logN)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int fst=a[0];
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(temp<a[j] and j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(auto x:a)
       cout<<x<<" ";
}

==========================================================
selection sort 0(logN)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        int pos=i;
        for(int j=i+1;j<n;j++){
            if(a[pos]>a[j])
                pos=j;
        }
        if(pos!=i)
        {
            int temp=a[pos];
            a[pos]=a[i];
            a[i]=temp;
        }
    }
    for(auto x:a)
       cout<<x<<" ";
}


============================================================================
Merge Sort 0(nlogN) 

#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int i1,int j1,int i2,int j2){
    int i,j,k;i=i1;j=i2;
    int arr[50];int p=0;
    while(i<=i1 and j<=j2){
        if(a[i]<a[j])
           arr[p++]=a[i++];
        else
           arr[p++]=a[j++];
    }
   while(i<=j1){
       arr[p++]=a[i++];
   }
   while(j<=j2){
       arr[p++]=a[j++];
   }
   for(int i=i1,j=0;i<=j2;i++,j++){
       a[i]=arr[j];
   }
//   for(auto x:arr)
//       cout<<x<<" ";
//   cout<<endl;
    
}
void merge_sort(int a[],int s,int e){
    if(s<e){
        int m=(s+e)/2;
        merge_sort(a,s,m);
        merge_sort(a,m+1,e);
        merge(a,s,m,m+1,e);
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    merge_sort(a,0,n-1);
    
    for(auto x:a)
      cout<<x<<" ";
}


=====================================================================
quick sort 0(NlogN)

#include<bits/stdc++.h>
using namespace std;

int partision(int a[],int s,int e){
    int pivat=a[e];
    int pindex=s;
    for(int i=s;i<e;i++){
        if(a[i]<pivat){
            int temp=a[i];
            a[i]=a[pindex];
            a[pindex]=temp;
            pindex++;
        }
    }
    int temp=a[e];
    a[e]=a[pindex];
    a[pindex]=temp;
    
    return pindex;
}

void quick_sort(int a[],int s,int e){
    if(s<e){
        int p=partision(a,s,e);
        quick_sort(a,s,(p-1));
        quick_sort(a,(p+1),e);
    }
}

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    
    quick_sort(a,0,n-1);
    
    for(auto x:a)
       cout<<x<<" ";

}

======================================================================





