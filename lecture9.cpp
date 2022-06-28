
// ARRAY...........



/*

# include<iostream>
using namespace std;
int main()
{
	int a[5]={2,4,6,3,7};
	cout<<"Array elements: "<<a[2];
}

*/














/*

# include<iostream>
using namespace std;
int main()
{
	int a[5]={2,1,3,5,4};
	int i;
	for(i=0;i<5;i++)
	{
		// cout<<a[i]<<" ";    // for printing value of array
		// cout<<i;              // for printing index value of array
	}
}

*/











// Sum of array

/*


# include<iostream>
using namespace std;
int main()
{
    int i,arr[5]={1,2,3,4,5};
    int sum=0;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
        sum=sum+arr[i];
    }
    cout<<"\n";
    cout<<sum;

}

*/










/*

# include<iostream>
using namespace std;
int main()
{
	int a[30];
	int i,n;
	
	cout<<"Enter array size maximum 30= ";
	cin>>n;
	
	cout<<"Enter "<<n<<" array elemenst= "<<" ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	cout<<"Array elements: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}

*/











// Minimum Element in array


/*

# include<iostream>
using namespace std;
int main()
{
	int a[30];
	int i,n;
	int min;
	
	cout<<"Enter the elements maximum 30: ";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	min=a[0];
	
	cout<<"Array elements: ";
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		cout<<a[i]<<" ";
	}
	
	cout<<"\nminimum element: ";
	cout<<"\n"<<min;	
} 

*/















// Maximum element in array


/*


# include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,n;
	int max;
	cout<<"Enter array maximum size 10: ";
	cin>>n;
	
	cout<<"Enter "<<n<<" array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	
	max=a[0];
	
	cout<<"Array elements:";
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		
		cout<<a[i]<<" ";
	}
	cout<<"\nmax elements ";
	cout<<max;
	
}


*/









// linear search element 

/*


# include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,n;
	int s,count=0;
	
	cout<<"Enter array maximum size 10: ";
	cin>>n;
	
	cout<<"Enter "<<n<<" array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter element u want to search: ";
	cin>>s;
	
	cout<<"Array Elements: ";
	for(i=0;i<n;i++)
	{
	if(s==a[i])
	{
	cout<<"Find at "<<i<<endl;
	count++;
	}
	}
	
	if(count==0)
	{
		cout<<"Number not found";
	}
	
	else {
		cout<<s<<" is present "<<count<<" times";
	}
}


*/

















// Binary search

/*

# include<iostream>
using namespace std;
int main()
{
	int n,i,num,first=0,last,loc=-1,middle;
	int arr[50];
	
	cout<<"Enter array size maximum 50: ";
	cin>>n;
	
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter a number to find: ";
	cin>>num;
	last=n-1;
	
	while(first<=last && loc==-1)
	{
		middle=(first+last)/2;
		
		if(arr[middle]>num)
		{
			last=middle-1;
		}
		
		else if(arr[middle]==num)
		{
			loc=middle;
			cout<<num<<" found at location "<<middle;
		}
		else {
			first=middle+1;
		}
	}
		if(loc==-1)
		{
			cout<<" NOt found ! "<<num<<" is not present";
		}	
}


*/














// Bubble sort


/*


# include<iostream>
using namespace std;
int main()
{
	int n,i,j,arr[10],temp;
	
	cout<<"Enter n: ";
	cin>>n;
	
	cout<<"Enter "<<n<<" elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	cout<<"Sorting array";
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	cout<<"\nsorted array in ascending order\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
}




*/
















// Selection sort

/*

# include<iostream>
using namespace std;
int main()
{
	int size,arr[50],i,j,small,temp;
	
	cout<<"Enter size: ";
	cin>>size;
	
	cout<<"Array elements: ";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Sorting array using selection sort\n";
	
	for(i=0;i<size-1;i++)
	{
		small=i;
		
		for(j=(i+1);j<size;j++)
		{
			if(arr[small]>arr[j])
			{
				small=j;
						}			
		}
		
		if(small!=i)
	{
		temp=arr[i];
		arr[i]=arr[small];
		arr[small]=temp;
		
	}
	}
	
	cout<<"array after sorting\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
		}	
}


*/





















// insertion sort

/*

# include<iostream>
using namespace std;
int main()
{
	
	int arr[10];
	int i,temp,j,n;
	
	cout<<"Enter n: ";
	cin>>n;
	
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nSorting array using insertion sort";
	
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(temp<arr[j] && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	
	cout<<"\nArray after sorting\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
		
}

*/


































// 2D Array..............

/*

# include<iostream>
using namespace std;
int main()
{
	int a[4][2]={ {3,4},{1,2},{2,7},{9,6}},i,j;                                                           
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
		
	}
}

*/







// Take matrix from user

/*

# include<iostream>
using namespace std;
int main()
{
	int a[20][20],i,j,r,c;
	cout<<"Enter number of rows and columns: ";
	cin>>r>>c;
	
	cout<<"Enter "<<(r*c)<<" elements: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"Matrix is:\n";
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}		
}


*/










// Transpose of a matrix

/*


# include<iostream>
using namespace std;
int main()
{
	int a[20][20],i,j,r,c;
	cout<<"Enter number of rows and columns: ";
	cin>>r>>c;
	
		cout<<"Enter "<<(r*c)<<" elements: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Matrix is:\n";
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"Transpose matrix is:\n";
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<a[j][i]<<"\t";
		}
		cout<<"\n";
	}
	
}

*/

















// Sum of a Matrix

/*

# include<iostream>
using namespace std;
int main()
{
	int a[20][20],b[20][20],i,j,r,c,sum;
	
	cout<<"Enter number of rows and columns: ";
	cin>>r>>c;
	cout<<"Enter "<<(r*c)<<" elements: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	
		cout<<"Matrix is:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"Enter "<<(r*c)<<" elements: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	
	
	cout<<"Matrix is:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"Sum of Matrix:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=a[i][j]+b[i][j];
			cout<<sum<<"\t";
		}
		cout<<"\n";
	}
	
}

*/

