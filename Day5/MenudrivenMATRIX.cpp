//Write a menu-driven C++ program to perform the following operations on a 3 × 3 matrix.
//1. Accept matrix elements from the user.
//2. Display the main diagonal elements.
//3. Calculate the sum of the main diagonal elements.
//4. Find the transpose of the matrix.
//5. Check whether the matrix is an identity matrix.
//6. Check whether the matrix is a symmetric matrix.
//7. Count the positive, negative, and zero elements.
//8. Search for a given element in the matrix.
//9. Replace a specified element at a given position.
//10. Interchange the first and third rows.
//11. Interchange the first and third columns.
//12. Exit.

#include<iostream>
using namespace std;

int a[3][3];

void AcceptElements();
void display();
void display_daigonal_elements();
void sumofmain_diagonal_elements();
void transpose_Matrix();
void check_Identity_Matrix();
void check_Symmetric_Matrix();
void check_Pos_Neg_Zero();
void search_Element();
void Replace_Element();
void Interchange_FIRST_Third_Rows();
void Interchange_FIRST_Third_Columns();

//Definitionss

void AcceptElements(){

    cout<<"\n Enter 9 elements of first matrix:";
    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
}

void display(){
    for(int i=0; i<3; i++){
        for(int j =0; j<3; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void display_daigonal_elements(){
    cout<<"Main Diagonal :";
    for(int i =0; i<3 ; i++){
        cout<<a[i][i]<<" ";
    }
    cout<<endl;
}


void sumofmain_diagonal_elements(){
     cout<<" Sum of Main Diagonal :";
     int sum=0;
    for(int i =0; i<3 ; i++){
            sum=sum+a[i][i];
    }
    cout<<sum<<endl;
}


void transpose_Matrix(){
    cout<<"Transpose matrix is: ";
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
}


void check_Identity_Matrix(){

 int flag = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && a[i][j] != 1)
                flag = 0;

            if (i != j && a[i][j] != 0)
                flag = 0;
        }
    }

    if (flag == 1)
        cout << "\n Identity matrix";
    else
        cout << "\n Not an identity matrix";
}


void check_Symmetric_Matrix(){

    int flag = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] != a[j][i])
                flag = 0;
        }
    }
    if (flag == 1)
        cout << "\n Symmetric matrix";
    else
        cout << "\n Not a symmetric matrix";
}


void check_Pos_Neg_Zero(){

    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > 0)
                pos++;
            else if (a[i][j] < 0)
                neg++;
            else
                zero++;
        }
    }
    cout << "\n Positive = " << pos << endl;
    cout << "\n Negative = " << neg << endl;
    cout << "\n Zero = " << zero << endl;
}


void search_Element(){

    int num, flag = 0;
    cout << "\n Enter element to search: ";
    cin >> num;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == num) {
                cout << "Found at row " << i + 1
                     << ", column " << j + 1 << endl;
                flag = 1;
            }
        }
    }
    if (flag == 0)
        cout << "\n Element not found";
}


void Replace_Element(){

    int row, col, num;
    cout << "Enter row and column (1 to 3): ";
    cin >> row >> col;
    if (row < 1 || row > 3 || col < 1 || col > 3) {
        cout << "\n Invalid position";
        return;
    }

    cout << "Enter new value: ";
    cin >> num;

    a[row - 1][col - 1] = num;
    cout << "\n Element replaced";
}

void Interchange_FIRST_Third_Rows(){

    for (int j = 0; j < 3; j++) {
        int temp = a[0][j];
        a[0][j] = a[2][j];
        a[2][j] = temp;
    }

    cout << "\n First and third rows interchanged ";

}


void Interchange_FIRST_Third_Columns(){
     for (int i = 0; i < 3; i++) {
        int temp = a[i][0];
        a[i][0] = a[i][2];
        a[i][2] = temp;
    }

    cout << "\n First and third columns interchanged";
}

int main(){
    int ch;

    do{
        cout<<"\n Menu";
        cout << "\n 1. Accept matrix";
        cout << "\n 2. Display main diagonal";
        cout << "\n 3. Sum of main diagonal";
        cout << "\n 4. Transpose matrix";
        cout << "\n 5. Check identity matrix";
        cout << "\n 6. Check symmetric matrix";
        cout << "\n 7. Count positive negative and zero";
        cout << "\n 8. Search element";
        cout << "\n 9. Replace element";
        cout << "\n 10. Interchange first and third rows";
        cout << "\n 11. Interchange first and third columns";
        cout << "\n 12. Exit";

        cout<<"\n Enter a choice:";
        cin>>ch;

        switch(ch){

        case 1:
            AcceptElements();
            break;

        case 2:
            display_daigonal_elements();
            break;

        case 3:
            sumofmain_diagonal_elements();
            break;
        case 4:
            transpose_Matrix();
            break;
        case 5:
            check_Identity_Matrix();
            break;
        case 6:
            check_Symmetric_Matrix();
            break;
        case 7:
            check_Pos_Neg_Zero();
            break;
        case 8:
            search_Element();
            break;
        case 9:
            Replace_Element();
            break;
        case 10:
            Interchange_FIRST_Third_Rows();
            break;
        case 11:
            Interchange_FIRST_Third_Columns();
            break;

        default:
            cout<<"Invalid Choice";

        }

        if (ch == 9 || ch == 10 || ch == 11) {
            if (ch == 9 || ch == 10 || ch == 11) {
                cout << "Updated matrix:\n";
                display();
            }
        }
    }
    while(ch != 12);
    return 0;
}










