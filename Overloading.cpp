//53_IT_Vendra
//Write C++ program to demonstrate function overloading for adding two integers, two floats and two arrays
#include <iostream>
using namespace std;
int add(int, int);
float add(float, float);
int arr();

int main()
{
  int a, b, x, first[20], second[20], sum[20], m, n, j;
  float c, d, y;

  cout << "Enter two integers:\n";
  cin >> a >> b;

  x = add(a, b);

  cout << "Sum of integers: " << x << endl;

  cout << "Enter two floating point numbers:\n";
  cin >> c >> d;

  y = add(c, d);

  cout << "Sum of floats: " << y << endl;

  cout << "Enter the number of elements in the array: ";
  cin >> n ;

  cout << "Enter elements of first array: " << endl;

  for (m = 0; m < n; m++)
    cin >> first[m];

  cout << "Enter elements of second array: " << endl;

  for (m = 0; m < n; m++)
    cin >> second[m];

  cout << "Sum of elements of the arrays: " << sum[m];

  for (m = 0; m < n; m++) {
    sum[m] = first[m] + second[m];
    cout << sum[m] << endl;
  return 0;
}
}

int add(int x, int y)
{
  int sum;

  sum = x + y;

  return sum;
}

float add(float x, float y)
{
  float sum;

  sum = x + y;

  return sum;
}
 
