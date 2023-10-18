#include<stdio.h>
#include<string.h>
void swap(char *x, char*y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char* a,int l, int r)
{
	int i;
	if(l == r)
		printf("%s\n",a);
	else
	{
		for(i=0; i<=r; i++)
		{

            // Swapping done
            swap((a+l), (a+i));
 
            // Recursion called
            permute(a, l+1, r);
 
            //backtrack
            swap(a[l], a[i]);			
		}
	}

}


int main()
{
	char str = "ABC";
	int n = strlen(str);
	permute(str, 0, n-1);
    return 0;

}