#include<bits/stdc++.h>
using namespace std;
class abc{
    static int a;
    public:
    abc(){
        a++;
    }
    void get(){
        cout<<a;
    }
};
int abc::a=10;
int main(){
    abc x;abc y;
    y.get();
}