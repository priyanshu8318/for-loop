 #include <iostream>
using namespace std;
int main() {
   int n;
  cout << "Enter the value of n" << endl;
  cin >> n;
  int a = 0 ;
  int b = 1 ;
  //int next = a+b;
  cout << a << " " <<b <<" ";
  //cout << b << endl;
  for (int i=1;i<=n;i++){
    int nextNumber = a+b;
    cout << a+b << " ";
    a =b; 
    b = nextNumber;
  }
}