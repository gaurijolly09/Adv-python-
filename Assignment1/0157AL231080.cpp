//Name:GAURI JOLLY
//Enrollnment no.-0157AL231080
//BATCH-19 Advance python batch
//Branch- CSE-AIML LNCTS


//question 1 
#include <iostream>
using namespace std;

int main() {
     int arr[]={1,2,8,10};
     int temp=0;
     int i=0;
    int n= sizeof(arr) / sizeof(arr[0]);
    int j=n-1;
    while(i<j)
    {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    }
    for(int k = 0; k < n; k++)
        cout << arr[k] << " ";
    return 0;
//question 2  // Find the Maximum & Minimum Element
#include <iostream>
#include<climits>
using namespace std;
int main() 
{
 int arr[]={3,7,4,5,8};
  int max=INT_MIN;
  int min=INT_MAX;
 int n=sizeof(arr)/sizeof(arr[0]);//for size
 for(int i=0;i<n;i++)
 {
     if(max<arr[i])
     {
         max=arr[i];
     }
     if(min>arr[i])
     {
         min=arr[i];
     }
 }
 cout<<max<<min;
    

    return 0;
}    
//question3// sum of array  of all elements 
#include <iostream>
using namespace std;

int main() 
{
int sum=0;
int arr[]={4,5,8,7};
int n=sizeof(arr)/sizeof(arr[0]);
for (int i=0;i<n;i++)
{
   sum=sum+arr[i];
}
cout<<sum<<endl;
    
    return 0;
}
//question4 
#include <iostream>
using namespace std;

int main() 
{
    int arr[]={2,2,2,2}; 
    int max=arr[0];
    int smax=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++)
    {
        if (arr[i]> max)
        {   smax=max;
            max=arr[i];
        }
        else if ( arr[i]>smax && arr[i]!=max)
            {
                smax=arr[i];
            }
        
    }
    cout<<max<<endl;
    cout<<smax<<endl;
   
    return 0;
}
//question5  
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int arr[] = {1,2,2,3,1,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int,int> freq;

    // Counting frequency
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    cout << "Sorted Map Output:\n";

    for(const auto &it : freq)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
//question6
#include <iostream>
using namespace std;

int main() {
    int arr[]={5,7,8,9,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    bool sorted = true;
    
    for(int i=0;i<n-1;i++)
    {
        if (arr[i]>arr[i+1])
    {
        sorted = false;
        break;
    }
       
       
    }
    if (sorted==true)
    {
        cout<<"sorted";
    }
    else 
    {
        cout<<"unsorted";
    }
   

    return 0;
}
//question7 
#include <iostream>
using namespace std;
int main() 
{ 
int arr[]={5,8,9,3,7};
int k=10;
int n=sizeof(arr)/sizeof(arr[0]);
k=k % n;

int temp[n];
for(int i=0;i<n;i++)
{
    temp[(i+k)%n]=arr[i];
}
for (int i=0;i<n;i++)
{
    arr[i]=temp[i];
}
    
    return 0;
}
//question 8
#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> target;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }

    cout << "No pair";
    return 0;
}
//question9
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++) {
        bool duplicate = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
            cout << arr[i] << " ";
    }

    return 0;
}
//question10
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    int a[100];
    for(int i = 0; i < n1; i++)
        cin >> a[i];

    cin >> n2;

    int b[100];
    for(int i = 0; i < n2; i++)
        cin >> b[i];

    int i = 0, j = 0;

    while(i < n1 && j < n2) {
        if(a[i] < b[j])
            cout << a[i++] << " ";
        else
            cout << b[j++] << " ";
    }

    while(i < n1)
        cout << a[i++] << " ";

    while(j < n2)
        cout << b[j++] << " ";

    return 0;
}
//question11
#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;

    for(int i = 0; i < n; i++) {
        if(arr[i] != x)
            cout << arr[i] << " ";
    }

    return 0;
}
//question12
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int sum = 0;

    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    cout << total - sum;

    return 0;
}
//question13
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Duplicates: ";

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}
//question14
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    int arr1[100];
    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;

    int arr2[100];
    for(int i = 0; i < m; i++)
        cin >> arr2[i];

    cout << "Intersection: ";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}
//question15
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    int arr1[100];
    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;

    int arr2[100];
    for(int i = 0; i < m; i++)
        cin >> arr2[i];

    cout << "Union: ";
    for(int i = 0; i < n; i++)
        cout << arr1[i] << " ";

    for(int i = 0; i < m; i++) {
        bool found = false;

        for(int j = 0; j < n; j++) {
            if(arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }

        if(!found)
            cout << arr2[i] << " ";
    }

    return 0;
}
//question16
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr1[100], arr2[100];

    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    for(int i = 0; i < n; i++)
        cin >> arr2[i];

    bool equal = true;

    for(int i = 0; i < n; i++) {
        if(arr1[i] != arr2[i]) {
            equal = false;
            break;
        }
    }

    if(equal)
        cout << "Arrays equal";
    else
        cout << "Arraysnot equal";

    return 0;
}
//question17
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max = arr[n-1];

    cout << "Leaders: " << max << " ";

    for(int i = n-2; i >= 0; i--) {
        if(arr[i] > max) {
            max = arr[i];
            cout << max << " ";
        }
    }

    return 0;
}
//question18
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int index = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    while(index < n) {
        arr[index] = 0;
        index++;
    }

    cout << "Result: ";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
//question 19           
#include<iostream.h>
#include<vector>
using namespace std;

int main(){
int subarray(vector<int>&nums,int m)
{
int sum=0;
int low=0;int high=0;
int n=nums.size();
while(high<n)
 {
     sum=sum+nums[high];
  while(sum>m)
     {
         sum=sum-nums[low];
     low++;
     }
    if(sum==m)
        {
            return high-low+1;
        }
        high++;
    } return 0;

 }
 }
//question20
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;
    k = k % n;

    for(int i = k; i < n; i++)
        cout << arr[i] << " ";

    for(int i = 0; i < k; i++)
        cout << arr[i] << " ";

    return 0;
}
//question21
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;

    sort(arr, arr + n);

    cout << arr[k - 1];

    return 0;
}
//question22
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            for(int k = i; k <= j; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
    }

    return 0;
}
//question23
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int maxSum = arr[0];
    int currSum = arr[0];

    for(int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum;

    return 0;
}
//question24
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int i = 0, j = n - 1;

    while(i <= j) {
        if(i != j)
            cout << arr[j--] << " ";
        cout << arr[i++] << " ";
    }

    return 0;
}
//question25
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > n / 2) {
            cout << arr[i];
            return 0;
        }
    }

    cout << "No Majority Element";

    return 0;
}
//question26
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++) {
        if((i == 0 || arr[i] >= arr[i-1]) &&
           (i == n-1 || arr[i] >= arr[i+1])) {
            cout << arr[i];
            break;
        }
    }

    return 0;
}
//question27
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int num = 1; num <= n; num++) {
        bool found = false;

        for(int i = 0; i < n; i++) {
            if(arr[i] == num) {
                found = true;
                break;
            }
        }

        if(!found) {
            cout << num;
            return 0;
        }
    }

    cout << n + 1;

    return 0;
}
//question28
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0, mid = 0, high = n - 1;

    while(mid <= high) {
        if(arr[mid] == 0)
            swap(arr[low++], arr[mid++]);
        else if(arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[high--]);
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
//question29
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int longest = 1, count = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1] + 1) {
            count++;
            longest = max(longest, count);
        }
        else if(arr[i] != arr[i-1]) {
            count = 1;
        }
    }

    cout << longest;

    return 0;
}
//question30
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100], result[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    result[0] = 1;
    for(int i = 1; i < n; i++)
        result[i] = result[i-1] * arr[i-1];
    int right = 1;
    for(int i = n-1; i >= 0; i--) {
        result[i] = result[i] * right;
        right = right * arr[i];
    }

    for(int i = 0; i < n; i++)
        cout << result[i] << " ";

    return 0;
}
//question31
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int total = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < n; i++) {

        total -= arr[i];   

        if(leftSum == total) {
            cout << i;     
            return 0;
        }

        leftSum += arr[i];
    }

    cout << -1;  

    return 0;
}

//question32
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int prod1 = arr[n-1] * arr[n-2];   // two largest
    int prod2 = arr[0] * arr[1];       // two smallest

    if(prod1 > prod2)
        cout << arr[n-2] << " " << arr[n-1];
    else
        cout << arr[0] << " " << arr[1];

    return 0;
}
//question33
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int minVal = arr[0];
    int maxDiff = arr[1] - arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] - minVal > maxDiff)
            maxDiff = arr[i] - minVal;

        if(arr[i] < minVal)
            minVal = arr[i];
    }

    cout << maxDiff;

    return 0;
}
