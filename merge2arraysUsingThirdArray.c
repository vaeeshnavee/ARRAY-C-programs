 #include <conio.h>
print(int *a,int n)
 { 
    int i;
    
	
 
    for(i=0; i<n; i++)
    {
      
        	printf("%d  ",a[i]);
 
		 
    }
 	
 }
  
 
int main()
{
    int a[10000],b[10000],c[20000],i,n1,n2 ;
   
    printf("Enter size of the 1st array : ");
    scanf("%d", &n1);
    printf("Enter elements in array : ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of the 2nd array : ");
    scanf("%d",&n2);
 
    printf("Enter elements in array : ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0; i<n1+n2; i++)
    {
       if(i<n1)
          c[i]=a[i];
          else
            c[i]=b[i-n1];
 
    }
     
    printf(" 1st array :\n");
 
    print(a,n1);
                     
	printf("\n2nd array :\n");
 
    print(b,n2);
            
	printf("\n3rd array :\n");
 
    print(c,n1+n2);
  
    return 0;
}