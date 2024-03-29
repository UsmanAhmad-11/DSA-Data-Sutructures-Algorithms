// #include<iostream>
// using namespace std;

// class searching{
//     public:

//     int binarysearch(int arr[] ,int size,int high,int low, int element){
//         while (low <= high) {
//             int mid =( low + high )/ 2;

//             if (arr[mid] == element) {
//                 return mid; // Element found, return its index
//             } else if (arr[mid] < element) {
//                 low = mid + 1; // Search the right half
//             } else {
//                 high = mid - 1; // Search the left half
//             }
//         }

//         return -1; // Element not found
//      }

// };
// int main(){
//      searching obj;
//      int arr[] = {1,3,5,7,9,45,76,154,376,445,675,732,824,978,1002};
//      int size = sizeof(arr)/sizeof(int);
//      int high =size - 1;
//      int low = 0; 
//      int ele =76;
//      int searchNum = obj.binarysearch(arr,size,high,low,ele);
//      cout<<"The element "<<ele<<" is found at index "<<searchNum<<endl;
// }


#include<iostream>
using namespace std;
class searching{
    public:
    int binarySearch(int arr[],int high,int low,int size,int element)
    {
        while(low<=high)
        {
            int mid = (low + high)/2;
            if(arr[mid] == element)
            {
                return mid;
            }
            else if(arr[mid]<element)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
    }
};
int main(){
    searching obj;
    int arr[8] = {1,22,34,45,55,59,65,98};
    int size = sizeof(arr)/sizeof(int);
    int low = 0;
    int high = size - 1;
    int element = 65;
    int searchNum = obj.binarySearch(arr,high,low,size,element);
    cout<<"The element "<<element<<" is found at index "<<searchNum<<endl; 
}
