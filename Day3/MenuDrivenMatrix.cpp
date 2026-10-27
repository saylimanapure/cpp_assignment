// Q-3. Write a menu-driven C++ program to perform the following operations on a matrix of size (3 X 3).
//  1. Accept matrix elements from the user.
//  2. Display the matrix.
//  3. Calculate the sum of all elements.
//  4. Calculate the sum of each row.
//  5. Calculate the sum of each column.
//  6. Find the largest element.
//  7. Find the smallest element.
//  8. Subtract the second matrix from the first.
//  9. Multiply two matrices.
//  10. Exit.

#include<iostream>
using namespace std;

int a[3][3];
int b[3][3];
int res[3][3];

//Function declaration

void AcceptElements();
void DisplayMAtrix();
void SumofallElements();
void Sumofrow();
void SumofColumn();
void FindLargest();
void FindSmallest();
void Subtractmatrix();
void MultiplyMatrix();

//Function Definition

void AcceptElements()
{
    cout<<"\n Enter 9 elements of first matrix:";

    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
}

void DisplayMAtrix()
{
    for(int i=0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void SumofallElements()
{
    int sum=0;
    for(int i =0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum +=a[i][j];
        }
    }
    cout<<"\n sum of elements is :"<<sum<<endl;
}


void Sumofrow()
{
    for(int i =0; i<3; i++)
    {
        int sum=0;

        for(int j=0; j<3; j++)
        {
            sum += a[i][j];
        }
        cout<<"\n sum of row"<<i+1<<" ="<<sum<<endl;
    }
}
void SumofColumn()
{
    for(int j =0; j<3; j++)
    {
        int sum=0;

        for(int i=0; i<3; i++)
        {
            sum += a[i][j];
        }
        cout<<"\n sum of row"<<j+1<<" = "<<sum<<endl;
    }
}


void FindLargest()
{
    int largest = a[0][0];

    for(int i =0; i<3 ; i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            if(a[i][j]> largest)
            {
                largest=a[i][j];
            }
        }
    }
    cout<<"largest element is : "<<largest<<endl;
}
void FindSmallest()
{
    int smallest = a[0][0];

    for(int i =0; i<3 ; i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            if(a[i][j] < smallest)
            {
                smallest=a[i][j];
            }
        }
    }
    cout<<"smallest element is : "<<smallest<<endl;
}


void Subtractmatrix()
{

    cout<<"\n enter 9 elements of second matrix:";

    for(int i =0; i<3; i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Subtraction result(A-B):";

    for(int i =0; i<3 ; i++)
    {
        for(int j=0; j<3; j++)
        {
            res[i][j] = a[i][j] - b[i][j];
            cout<< res[i][j]<<"\t";
        }
        cout<<endl;
    }
}


void MultiplyMatrix()
{
    cout<<"\n enter 9 elements of second matrix:";

    for(int i =0; i<3; i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            cin>>b[i][j];
        }
    }

    for(int i = 0; i<3 ; i++)
    {
        for(int j=0; j<3; j++)
        {
            res[i][j] = a[i][j] * b[i][j];
            cout<< res[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    int ch=0;

    do
    {

        cout<<"\n Menu \n";
        cout<<"\n 1. Accept matrix elements from the user ";
        cout<<"\n  2. Display the matrix.";
        cout<<"\n  3. Calculate the sum of all elements.";
        cout<<"\n  4. Calculate the sum of each row. ";
        cout<<"\n  5. Calculate the sum of each column.";
        cout<<"\n  6. Find the largest element. ";
        cout<<"\n  7. Find the smallest element. ";
        cout<<"\n  8. Subtract the second matrix from the first.";
        cout<<"\n  9. Multiply two matrices. ";
        cout<<"\n  10. Exit. ";

        cout<<"\n Enter a choice";
        cin>>ch;
        switch (ch)
        {
        case 1:
            AcceptElements();
            break;

        case 2:
            DisplayMAtrix();
            break;

        case 3:
            SumofallElements();
            break;

        case 4:
            Sumofrow();
            break;

        case 5:
            SumofColumn();
            break;

        case 6:
            FindLargest();
            break;

        case 7:
            FindSmallest();
            break;

        case 8:
            Subtractmatrix();
            break;

        case 9:
            MultiplyMatrix();
            break;

        case 10:
            cout<<"\n Exit";
            break;

        default:
            cout<<"enter a valid choice:"<<endl;
        }

    }
    while(ch!=10);


    return 0;
};





