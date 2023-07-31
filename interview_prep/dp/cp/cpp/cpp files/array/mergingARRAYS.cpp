 int arr1[]={1,3,5};
    int arr2[]={2,4,6};
    int n1=sizeof(arr1)/sizeof(int);
     int n2=sizeof(arr2)/sizeof(int);
     int arr3[n1+n2];
     int i=0,j=0,k=0;

    while(i<n1 && j<n2){
     if(arr1[i]<arr2[j]){
        arr3[k++]=arr1[i++];
     }
    else if(arr1[i]>arr2[j]){
        arr3[k++]=arr2[j++];
     }
    }

    for(;i<n1;i++) {arr3[k++]=arr1[i];}
    for(;j<n2;j++) {arr3[k++]=arr2[j];}
    for(auto x: arr3) cout<<x<<" ";