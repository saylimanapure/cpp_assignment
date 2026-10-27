//Q-5. Using pointers, write your own functions for the following:
//i. String comparison
//ii. String concatenate
//iii. String copy
//iv. String length

#include<iostream>
using namespace std;

int mystrcmp(char* s1, char* s2){
    int i=0;
    int j=0;
    int res =0;
    while(s1[i]!='\0' && s2[j]!='\0'){
    if(s1[i]!=s2[j])
    break;
    i++;
    j++;
    }
    res = s1[i]-s2[j];
    return res;
}

int mystrlen(char* s3){
    int i;
    int l=0;
    for(i=0;s3[i]!='\0';i++){
        l=l+1;

    }
     return l;
}

char* mystrcpy(char*dest, char*sou){
    int i;
    for(i=0; sou[i]!='\0';i++){
        dest[i]=sou[i];
    }
    dest[i]='\0';
    return dest;
}

char* mystrcat(char* dest ,char* sou){
    int i,j;
    for(i =0;dest[i]!='\0'; i++);
    for(j=0; sou[j]!='\0';j++){
    dest[i]=sou[j];
    i++;
    }
    dest[i]='\0';
    return dest;

}

int main(){
//    char s1[10],s2[10];
//    cout<<"enter s1 and s2:";
//    cin>>s1;
//    cin>>s2;
//    cout<<"Comparing is : "<< mystrcmp(s1,s2);

//    char s3[10];
//    cout<<"Enter s3:";
//    cin>>s3;
//    cout<<"Length is :"<< mystrlen(s3);

//    char s4[10],s5[10];
//    cout<<"enter source string:";
//    cin>>s5;
//    mystrcpy(s4,s5);
//    cout<<"copied code is :"<<s4<<endl

    char s6[10], s7[10];
    cout << "Enter first string: ";
    cin >> s6;
    cout << "Enter second string: ";
    cin >> s7;

    mystrcat(s6, s7);
    cout << "Concatenated string: " << s6;

   return 0;
}
