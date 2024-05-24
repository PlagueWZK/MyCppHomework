#include<iostream>
using namespace std;
class Matrix {
public:
    Matrix() {
        Max[2][3] = {0};
    }
    Matrix(int *m) {
        for(int i = 0;i <2; i++) {
            for(int j =0; j < 3; j++) {
                Max[i][j] = *m++;
            }
        }
    }
    void display() {
        cout<<"{";
        for(int i = 0; i < 2;i++){
             for(int j =0; j < 3; j++) {
                cout<<Max[i][j]<<" ";
            }
            cout<<"}";
            if(i!=1){
                cout<<endl<<"{";
            }
        }
        cout<<endl<<endl;
    }
    Matrix operator+ (Matrix other) {
        Matrix newM;
        for(int i = 0; i < 2; i ++) {
            for(int j = 0; j < 3;j++) {
                newM.Max[i][j] = Max[i][j]+other.Max[i][j];
            }
        }
        return newM;
    }
private:
    double Max[2][3];
};
int main() {
    int a[] = {1,2,3,4,5,6};
    int b[] = {7,8,9,10,11,12};
    Matrix A(a);
    Matrix B(b);
    A.display();
    B.display();
    Matrix C = A + B;
    C.display();
}