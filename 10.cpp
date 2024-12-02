#include <iostream>
using namespace std;

int main(){
    int arr[7] = {7, 1, -2, -6, 5, 3, -4};
    cout<<"Find the subarray for sum : ";
    int findsum;
    cin>>findsum;
    int flag=0;
    for (int k = 7; k > 0; k--){
        for (int i = 0; i < 7 - k + 1; i++){
            int sum = 0;
            for (int j = i; j < i + k; j++){
                sum+=arr[j];
            }

            if (sum == findsum){
                cout<<"Subarray length : "<<k<<" \n";
                for (int j = i; j < i + k; j++){
                    cout<<arr[j]<<" ";
                }
                flag=1;
            }
        }
        if(flag==1){
            break;
        }
    }
}
