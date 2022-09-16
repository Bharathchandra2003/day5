#include <iostream>
using namespace std;
 int main (){
 int num[20];
 int i, j, a, n;
 cout<<("enter number of elements in an array");
 cin>>n;
 cout<<("Enter the elements");
 for (i = 0; i < n; ++i)
 scanf("%d", &num[i]);
 for (i = 0; i < n; ++i){
 for (j = i + 1; j < n; ++j){
 if (num[i] < num[j]){
 a = num[i];
 num[i] = num[j];
 num[j] = a;
 }
 }
 }
 int nth;
 cout<<("N = ");
 cin>>nth;
 cout<<("%dth Largest number : %d",nth,num[nth-1]);
}
