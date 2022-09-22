#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long int nn;
    float f;
    double d;
    char c;
    bool d=true;
    string s="Don";
    int arr[100];'''static in nature'''
    vector<int>ds;'''dynamic in nature'''
    ds.push_back(10);
    ds.emplace_back(20);
    //input 10 20
    int m;
    cin >> n >> m;
    //output
    cout << n << " " << m << endl <<"\n";

}

//Array

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
    cin>>n;
    int arr[n];
    // declare an array of length n
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n";
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

//Vector

vector<int>ds(n,10);
    // makes all values as 10
    int x;
    // ways of for loop on vector
    //way-1 : using range n
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ds.emplace_back(x);
    }
    //way-1  -using size() of vector
    for(int i=0;i<ds.size();i++){
        cout<<ds[i]<<endl;
    }
    //way-2 - 
    for(auto it:ds){
        cout<<it;
    }
    // way -3 - iterator loop 
    for(vector<int>it = ds.begin();it!=ds.end();it++){
        cout<<*it    
    }//way -4
    for (auto i:ds){
        cout<<i<<" ";
    }

    rbegin() and rend()--reverse vector--it++


//functions on vectors

  sort(ds.begin(),ds.end());//ascending order
  sort(ds.begin(),ds.end(),greater<int>());//descending order
  sort(arr,arr+n)//for array sort
  auto it=find(ds.begin(),ds.end(),target);//find in vector
  if (it!=ds.end()){
  }
  int ind=lower_bound(ds.begin(),ds.end(),X)-ds.begin();
  ds.pop_back();//remove the last element in vector
  //v1={1,2}
  //v2={4,5}
  v1.swap(v2);//swap data of two elements
  ds.clear();//erase all elements in vector
  cout<<ds.empty();//gives true if vector is empty
  v.erase(v.begin());
    // erasing data  based on its address
    v.erase(v.begin+1,v.begin+3);
    //{10,20,30,40}=>{10,40}
    v.insert(v.begin(),300);
    // 300 inserted at begin
    v.insert(v.begin()+1,2,10);
    // inserting tw0 10's at second
    v.insert(v.begin(),copy.begin(),copy.end());
    // to insert a vector into current vector

//pair

#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p={1,2};
    cout<<p.first << " " <<p.second;
    vector<pair<int,int>>vp={{1,2},{3,4},{5,6}};
    for(auto it:vp){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    //map:
    //map will have key with value
    int arr[6]={1,2,1,3,4,3}
    map<int,int>mpp;
    for(int i=0; i<6;i++){
        mpp[arr[i]]++;
    }
    for(auto itt:mpp){
        cout<<itt.first<<" "<<itt.second<<"\n";
    }
    unordered_map<int,int>umpp;
    map<int,pair<int,int>mp={1,{2,5}};
    for (auto i:ip){
        cout<<i.first<<" "<<i.second.first<<i.second.second
    }
    mp.emplace()
    mp.insert()
    auto it =mp.find(3)
}

//Prime Number

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool flag=true;
	if(n==0 or n==1)
		flag=false;
	for(int i=2;i<n/2+1;i++){
		if(n%i==0)
			flag=false;
			break;
	}
	if(flag)
		cout<<"Prime number";
	else
		cout<<"Not a prime number";
}
