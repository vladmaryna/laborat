#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));
    int n, i, max_pos, min_pos, j=0, max, min;
    cin >> n ;

    int A[n];
    int B[n];
    for (i=0; i<n; i++) {
        A[i]=rand()%20-10;
        cout<<A[i]<<" ";

    }
    cout<< endl;

    max=A[0];
    min=A[0];
    for(i=1; i<n; i++){
        if(A[i]>max)
        {max=A[i];
            max_pos=i;
        }
        if(A[i]<min)
        {min=A[i];
            min_pos=i;
        }
    }
    cout<<min_pos;
    cout<<endl;
    cout<<max_pos<<endl;;
    if (min_pos>max_pos){
        for(i=0; i<max_pos; i++){
            B[j]=A[i];
            j++;
        }
        for(i=min_pos+1; i<n; i++){
            B[j]=A[i];
            j++;
        }
    }
    else{
        for(i=0; i<min_pos; i++){
            B[j]=A[i];
            j++;
        }
        for(i=max_pos+1; i<n; i++){
            B[j]=A[i];
            j++;
        }

    }
    for (i=0;i<j;i++)
    { cout<<B[i]<<" ";}





    return 0;
}