#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

using namespace std;
int main()
{
  /*
   //array stl
     int arr[3]= {1,2,3};
    array<int,4>a ={1,2,3,4};
    int size = a.size();
    for(int i=0;i<size ;i++){
    cout<<a[i]<<endl ;
    }
 cout<<"element at the second index  -->  "<<a.at(2)<<endl ;
 cout<<"empty or not  "<<a.empty()<<endl;
 cout<<"the first element "<<a.front()<<endl;
 cout<<"last element "<<a.back()<<endl;
  */

//vector 



/* vector<int>v;
vector<int> a(5,1);
vector<int> last(a);
cout<<"print last"<<endl ;
for(int i:a){
cout<<i<<" " ;
}

cout<<"Size"<<v.capacity()<<endl ;
v.push_back(1);
cout<<"Size"<<v.capacity()<<endl ;
v.push_back(2);
cout<<"Size"<<v.capacity()<<endl ;
v.push_back(3);
cout<<"Size"<<v.capacity()<<endl ;
//capacity tells how many elements are assigned to vector
//size tells how many elements are there 
cout<<"Size"<<v.size()<<endl ;
cout<<"element at 2nd index  "<<v.at(2)<<endl;
cout<<"front "<<v.front()<<endl ;
cout<<"back  "<<v.back()<<endl ;
cout<<"before pop"<<endl;
for(int i:v){
cout<<i<<" " ;
}
cout<<endl;
v.pop_back();
cout<<"after pop"<<endl;
for(int i:v){
cout<<i<<" " ;
}
// when clear operation is runned capacity of the vector is not zero its 
 */
/* 




// Deque in deque element is to be inserted from both front and back end
deque<int> d;
d.push_back(1);
d.push_front(2);
/* for(int i:d){
cout<<i<<" ";
}
d.pop_back();
cout<<endl;
for(int i:d){
cout<<i<<" ";

} */
/* cout<<"element at the first index--> "<<d.at(1)<<endl;
cout<<"front"<<d.front()<<endl;
cout<<"back"<<d.back()<<endl;
cout<<"empty or not"<<d.empty()<<endl;
cout<<"before erase"<<d.size()<<endl ;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase"<<d.size()<<endl;
for(int i:d){

    cout<<i<<" ";
}  */



//list
/* list<int>l;
list<int> n(5,100);
cout<<" Printing n"<<endl ;
for(int i:n){
    cout<<i<<" ";
}
cout<<endl;
l.push_back(1);
l.push_front(2);
for(int i:l){
    cout<<i<<" " ;
}
cout<<endl;
l.erase(l.begin());
cout<<"after erase"<<endl;
for(int i:l){

    cout<<i<<" ";
} */


// stack is sililar to plates keep in the wedding 

/* stack<string>s;
s.push("mohit");
s.push("singh");
s.push("dobhal");
cout<<" Top Element --> "<<s.top()<<endl;
s.pop();
cout<<" Top Element --> "<<s.top()<<endl;
cout<<" size of stack --> "<<s.size()<<endl;
cout<<" empty or not --> "<<s.empty()<<endl; */

/* //QUEUE
queue<string>q;
q.push("mohit");
q.push("singh");
q.push("dobhal");
cout<<"size before pop "<<q.size()<<endl;
cout<<"First element "<<q.front()<<endl;
q.pop();
cout<<"First element "<<q.front()<<endl;
cout<<"size after pop "<<q.size()<<endl;
 */



//PRIORITY QUEUE = FIRST ELEMENT IS GREATEST OF THE PRIOORITY QUEUE
//max heap
/* priority_queue<int>maxi;
//min heap
priority_queue<int,vector<int> ,greater<int>>mini ;
maxi.push(1);
maxi.push(3);
maxi.push(2);
maxi.push(0);
//cout<<"size -->"<<maxi.size()<<endl;
int n = maxi.size();
for(int i=0;i<n;i++){
cout<<maxi.top()<<" ";
maxi.pop();
}
cout<<endl;

mini.push(1);
mini.push(3);
mini.push(2);
mini.push(0);
int m = mini.size();
for(int i=0;i<m;i++){
cout<<mini.top()<<" ";
mini.pop();
}
cout<<endl; */
/* set<int>s;
s.insert(5);
s.insert(5);
s.insert(5);
s.insert(6);
s.insert(6);
s.insert(1);
s.insert(1);
s.insert(0);
s.insert(0);
for(auto i:s){
cout<<i<<endl;
}
cout<<endl;
set<int>::iterator it = s.begin();
it++;
s.erase(it);
for(auto i:s){
cout<<i<<endl;
}
cout<<endl;
cout<<" 5 is present or not  "<<s.count(5)<<endl;
set<int>::iterator itr = s.find(5);
for(auto it = itr ; it!=s.end() ; it++){
cout<<*it<<" " ;
}
cout<<endl; */



//MAP complexity is o(logn)
// unordered map complexity is o(1)

/* map<int,string>m;
m[1]="mohit";
m[12]="singh";
m[13]="dobhal";
m.insert( {5,"kumar"});
cout<<"before erase"<<endl;
for(auto i:m){
cout<<i.first<<endl;}
cout<<"finding 13 "<<m.count(13)<<endl;
m.erase(13);
cout<<"after erase"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
auto it = m,find(1);
for(auto i=it;i!=m.end();i++){
 cout<<(*i).first<<endl;
} */

/* vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(4);
v.push_back(6);
cout<<"finding 4 -->  "<<binary_search(v.begin(),v.end(),4)<<endl;
cout<<"lower bound -->  "<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
cout<<"upper bound -->  "<<upper_bound(v.begin(),v.end(),1)-v.begin()<<endl;

int a = 3;
int b = 5;
cout<<"max of a,b  "<<max(a,b)<<endl;
cout<<"min of a,b  "<<min(a,b)<<endl;
swap(a,b);
cout<<endl<<" a -->"<<a<<endl ;
string abcd = "abcd";
reverse(abcd.begin(),abcd.end());
cout<<"string-->"<<abcd<<endl;

rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate"<<endl;
for(int i:v){
    cout<<i<<" ";
} */

return 0;
}