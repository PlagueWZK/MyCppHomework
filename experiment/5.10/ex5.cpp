#include <iostream>  
  
class Matrix {  
public:  
    Matrix() {} // 默认构造函数，这里不需要初始化数组，因为它们是局部对象，会在创建时自动初始化  
  
    void transpose() {  
        int temp;  
        for (int i = 0; i < 2; ++i) {  
            for (int j = i; j < 3; ++j) { // 注意内层循环从i开始，避免重复交换  
                temp = mat[i][j];  
                mat[i][j] = mat[j][i];  
                mat[j][i] = temp;  
            }  
        }  
    }  
  
    void input() {  
        std::cout << "请输入矩阵的元素（按行输入）：" << std::endl;  
        for (int i = 0; i < 2; ++i) {  
            for (int j = 0; j < 3; ++j) {  
                std::cin >> mat[i][j];  
            }  
        }  
    }  
  
    void display() {  
        std::cout << "当前矩阵：" << std::endl;  
        for (int i = 0; i < 2; ++i) {  
            for (int j = 0; j < 3; ++j) {  
                std::cout << mat[i][j] << " ";  
            }  
            std::cout << std::endl;  
        }  
    }  
  
private:  
    int mat[2][3];  
};  
  
int main() {  
    Matrix m;  
  
    m.input();  
    m.display();  
  
    m.transpose();  
    std::cout << "转置后的矩阵：" << std::endl;  
    m.display();  
  
    return 0;  
}