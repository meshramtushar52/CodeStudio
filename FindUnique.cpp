#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int size) {
  int ans = 0;

  for (int i = 0; i < size; i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main() {

  int size;
  cout << "Enter Size :";
  cin >> size;

  int arr[100];

  for (int i = 0; i < size; i++) {

    cin >> arr[i];
  }

  int a = findUnique(arr, size);

  cout << a << endl;
}