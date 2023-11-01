#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* A code to read the file elephant_seal_data and convert the string to the integer
 finally avaerge them
 Kazem Bazesefidpar
 October 26, 2023
*/


int main(void){
  const int size= 10000;
  int array[size]; // array to read the data with size chosen with the knowledge of the given data
  double sum=0; // The sum of elements
  int count=0; // number of elements read during; note that it will be one more than the numbers in the file
  int new_number=0; // A check to be sure we count the number of data correctly
  FILE* file_elephant;
  char char_in;
  
  file_elephant = fopen("elephant_seal_data", "r"); // Open the elephant_seal_data in the read mode
  
  if (NULL == file_elephant) {
    printf("elephant_seal_data can't be opened.\n");
    return 0;
  }
  
  array[0]=0; // initialize to zero
  while((char_in = fgetc(file_elephant))!=EOF) {
    if(isdigit(char_in)){
      new_number = 1;
      array[count] = 10 * array[count] + (char_in - '0'); // conver char to int according to ASCCI tabel
    }else{
      if(new_number==1){
	count+=1; // count the number of elements in the file; it will be one more than the data!
	array[count] = 0; // to correctly convert char to int
	new_number = 0; // to sure we will enter this portition of code just one when we have a new number
      }
    }
  }
  for(int i=0;i<count;i++)
    sum+=array[i]; // sum the data

  printf("The average weight for the set of the elephant seals is %lf\n",(sum/(count))); // averge and print them
  // Closing the file
  fclose(file_elephant);
  return 0;
}
