
//program to arrange positive at start and negative at end
#inclde <iostream>

using namespace std;

int main()
{
    int arr[10]={1,-5,-6,-3,2,8,-4,7,9,-7};
    
    int i=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<" size is "<< size<<endl;
    int j=size-1;
    cout<<"before arranging array"<< endl;
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(i<=j)
    {
        if(arr[j]<0)
        {
            j--;
        }
        else if(arr[i]<0)
        {
            int a=arr[i];
            int b=arr[j];
            int c=a;
            arr[i]=b;
            arr[j]=c;
            j--;
            i++;
        }
        else if(arr[i]>=0)
        {
            i++;
        }
        
    }
    
    cout<<"after arranging array" << endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
