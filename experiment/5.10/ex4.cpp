//编写程序，实现输出一个2行3列矩阵的转置矩阵。
#include<bits/stdc++.h>
using namespace std;
class Matrix                                          //定义Matrix类

 {
public:
   Matrix(int a[6]) {
    int count = 0;
    for(int i = 0;i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            mat[i][j] = a[count++];
        }
    }
    };                                          //默认构造函数
   void transpose() {
    int * p = mat;
        for(int i = 0;i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            newMat[i][j] = ;
        }
    }
   };                                  //转置函数 
   void input();                                  //输入数据函数
   void display() {
    for(int i = 0; i < 2; i ++) {
        for(int j = 0; j < 3; j++) {
            cout<<newMat[i][j]<<" ";
        }
        cout<<endl;
    }
   };                                    //输出数据函数
private:
   int mat[2][3];
   int newMat[3][2];
 };

int main() {
    int a[6] = {1,2,3,4,5,6};
    Matrix matrix(a);
    matrix.transpose();
    matrix.display();
}
