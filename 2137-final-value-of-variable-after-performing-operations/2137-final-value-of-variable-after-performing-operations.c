int finalValueAfterOperations(char** operations, int operationsSize) {
    int n = 0;
 for(int i =0 ; i < operationsSize ; i++)
 {
    if(strcmp(operations[i],"X--") == 0 || strcmp(operations[i],"--X") == 0)
    {
        n-=1;
    }
  else if(strcmp(operations[i],"++X") == 0 || strcmp(operations[i],"X++") == 0)
    {
         n+=1;
    }
     }
      return n;
}   