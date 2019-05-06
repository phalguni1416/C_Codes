/* Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. 
More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. 
All numbers at input are integers of one or two digits.
Example
Input:
1
2
88
42
99

Output:
1
2
88
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int key = 42;
    int in = 0;
    while(in!=key)
    {
        scanf("%d",&in);
        if(in==key)
        {
            break;
        }
        printf("%d\n",in);
    }
    return 0;
}
