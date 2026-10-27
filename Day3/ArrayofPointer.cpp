//Assignments using pointers, arrays of pointers.

#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5] = {10,20,30,40,50};
    for(i=0; i<5; i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n";

    int* ptr[5];
    int arr1[5]={60,70,80,90,45};

    for(int j=0;j<5;j++){
            ptr[j]=&arr1[j];

    }
    for(int j = 0;j<5;j++){
        cout<<" "<<*ptr[j];

    }
    return 0;

}
