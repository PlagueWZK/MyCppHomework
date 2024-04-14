#include<iostream>
using namespace std;
class Animal{
public:
    string name;
    string species;
    void coutName() {
        cout<<"name="<<name<<endl;
    }
    void coutSpecies() {
        cout<<"species="<<species<<endl;
    }
};
int main() {
    Animal a,b;
    cout<<"动物a"<<endl;
    cin>>a.name>>a.species;
    cout<<"动物b"<<endl;
    cin>>b.name>>b.species;
    a.coutName();
    a.coutSpecies();
    b.coutName();
    b.coutSpecies();
    return 0;
}
