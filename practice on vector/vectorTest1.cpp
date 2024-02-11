#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(8);

    cout << "v's size is: " << v.size() << endl; //5

    for(auto i : v){
        cout << i << endl;
    } // graph list
    


}