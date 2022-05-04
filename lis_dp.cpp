// Longest Increase Subsequence (solved with Dynamic Programming)
// Note: this program returns the length of the LIS, not the LIS itself

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int lis(int seq[]){
    
    int N = std::size(seq);
    std::cout << "N = " << N << std::endl;
    int dp[N];
    for (int i = 0; i < N; i++){
        dp[i] = 1;
    }
    
    for(int i = 1; i < N; i++){
        int subproblems[i];
        std::cout << subproblems[0] << std::endl;
        for(int k = 0; k < i; k++){
            if(seq[k] < seq[i]){
                subproblems[k] = dp[k];
            }
        }
        dp[i] = *(1 + std::max_element(subproblems, subproblems + i));
        for(int j = 0; j < N; j++){
            std::cout << dp[j] << " ";
        }
        std::cout << std::endl;
    }

    return *(std::max_element(dp, dp + N));

}

int main(){

    // Note: edit so that it can take any input array

    int A[5]{3, 1, 8, 2, 5};
    int length = lis(A);
    std::cout << "LIS of sequence A is : " << length << std::endl;

}