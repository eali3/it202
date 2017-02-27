int main (int argc, char** argv)
{
int i=0;
int val;
int* darr;
int darrsize = 5;
int pos = 0;
int* temp;
darr = (int *) malloc (darrsize * sizeof(int) );

printf ("Enter a list of numbers followed by the terminal value of -999\n");

scanf ("%d", &val);

   while (val != -999)
     {
        darr[i] = val;
        i++;
        pos++;
        if ( pos < darrsize) {
        printf ("%d\n", darr[i]);
        }       
        if (pos >= darrsize)
        {
          temp = (int*) malloc (darrsize *2 *sizeof(int) );
          int j;
          for (j = 0; j < darrsize; j++){
                 temp[j] = darr[j]; }
           free(darr);
           darr = temp;
           darrsize = darrsize * 2;
           darr[pos] = temp[pos];
           printf("%d\n", darr[pos]); }
           scanf ("%d", &val);
}

return 1;
}
