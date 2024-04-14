#include <iostream>
using namespace std;

class solution {
    public:
    static int findMaster(int array[],int length)
    {
        int newArray[length] = {0};
        for(int i = 0; i < length; i ++) {
            for(int j = 0; j < length; j ++){
                if(array[i] == array[j])
                newArray[i]++;
            }
        }
        int max = findMax(newArray,length);
        int count = 0;
        for(int i = 0; i < length; i ++) {
            if(newArray[i] == max) newArray[count++] = array[i];
        }
        return findMin(newArray,count + 1);
    }

    static int findMax(int array[],int length) {
        int max = array[0];
        for(int i = 0;i < length; i ++) {
            if(array[i] > max) max = array[i];
        }
        return max;
    }
     static int findMin(int array[],int length) {
        int min = array[0];
        for(int i = 0;i < length; i ++) {
            if(array[i] > min) min = array[i];
        }
        return min;
     }

};
int main() 
{
    int newArray[] = {6,5,9,8,7,4,9,4,4};
    cout<<solution::findMaster(newArray,9);

}