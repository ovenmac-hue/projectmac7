#include<iostream>
using namespace std;
#include<ctime>

long long int fibonacci(long long int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(long long int x){
    if (x == 0){
        x = 0;
    }else if(x == 1){
        x = 1;
    }else if(x > 1){
        x = fibonacci(x-1)+fibonacci(x-2);
    }
    return x;
}
