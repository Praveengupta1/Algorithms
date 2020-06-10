#include <iostream>

using namespace std;

int main()
{
    int arr[] = {8,2,5,5,87,6}, i ,j, key, arraysize ; // sorting array

    arraysize = sizeof(arr)/sizeof(arr[0]);

    for( i = 1 ; i < arraysize ; i++)               //
        {

            key = arr[i];
            j = i-1;
            while(j >= 0 && arr[j] > key )
            {
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
        }

    for(i = 0 ; i < 6 ; i++)
        {
            std::cout<< " " << arr[i] ;
        }

    return 0;
}
