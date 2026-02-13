#include <iostream>
#include <vector>
using namespace std;
vector <int> n = {5,3,4,1,2,-1,-2,-5,-4,-3};
void output(vector<int> m){
    for (int i=0;i<m.size();i++){
        cout<<n.at(i)<<" ";
    }
    cout<<endl;
}
void outputN(vector <int> n){
    for (int i=0 ;i<n.size();i++){
        if(n.at(i)<0)
            cout<<n.at(i)<<" "<<endl;
    }
}
int search1(vector <int>d, int num){
    for(int i=0;i<d.size();i++){
        if(n.at(i)==num){
            cout<<"THE INTEGER IS FOUND AT LOCATION"<<" "<<i<<endl;
            return i;
        }
    }
    cout<<"NOT FOUND"<<endl;;
    return -1;
}
vector<int> sorter(vector <int> unsorted){
    vector <int> sorted={};
    int min=n.at(0);
    for(int j=0;j<unsorted.size();j++){
        for(int i=0;i<unsorted.size();i++){
            if(n.at(i)<min){
                min=n.at(i);
            }
        }
        sorted.push_back(min);
    }
    return sorted;
}

int main()
{
    output(n);
    outputN(n);
    search1(n,4);
    vector<int> newsorted=sorter(n);
    for(int i=0;i<newsorted.size();i++)
        cout<<newsorted.at(i);
    return 0;
}