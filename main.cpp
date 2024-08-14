#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector <int> linear, int search){
    for(int num : linear) {
        if(num > search) {
            return num;
        }
    }
    return -1;
};

int main() {
    vector <int> linear = {5,2,9,7,4,6};
    int search = 5;
    int result = linearSearch(linear, search);

    if(result==-1) {
        cout << "No se encuentra" << endl;

    }else {
        cout << "El numero mayor al " << search << " es " << result;
    }
    return 0;
}
