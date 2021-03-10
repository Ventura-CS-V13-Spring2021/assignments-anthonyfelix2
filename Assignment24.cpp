#include <iostream>
using namespace std;
int main()
{
  int i, z;
  i = 65;
  z = 0;
// If i declare z inside the while loop it does not work, why?
	
	// If you declare the z inside of loop, the var z can be used inside of the loop block.
	// Normally, when the variable that is declared in a block,
	// the var can be used only in that block.
	// block means {, }

  while(i <= 90)
  { 
	// For the better efficiency, instead of z, we can handle with "newline" probelm by using the var i.
	if ( i % 5 == 0) 
    // if(z == 5)
    {
		// z = z - 5;  // Keep the indentation rule
		cout<<endl;
    }
	// I recommned those two lines are removed
	// because of the simplicity
    // else
    // {
	cout<<static_cast<char>(i)<<" ";
	i++;

	// z++;
    // }
  }
}
// int main()
// {
//   int i, z;
//   i = 65;
//   z = 0;
// // If i declare z inside the while loop it does not work, why?
//   while(i <= 90)
//   { 

//     if(z == 5)
//     {
//     z = z - 5;  
//     cout<<endl;
//     }

//     else
//     {
//     cout<<static_cast<char>(i)<<" ";
//     i++;
//     z++;
//     }
//   }
// }