a) if ( age >= 65 ){
  cout << "Age is greater than or equal to 65" << endl;
  }
  else
  {
  cout << "Age is less than 65 << endl";
  }

  Semicolon was removed from after the condition.

b) if ( age >= 65 ){
    cout << "Age is greater than or equal to 65" << endl;
  }
else{
    cout << "Age is less than 65 << endl";
}

  Semicolon was replaced with brackets.
  
c)  unsigned int x = 1;
    unsigned int total = 0;
    while ( x <= 10 )
    {
      total += x;
      ++x;
    }
  
  variable 'total' was not initialized.
  
  
d) int x = 0;
   int total = 0;
   While ( x <= 100 ){

   total += x;
   ++x;
   
   }
   
   Variable 'x' and 'total' were not intialized. 
   

e)

  int y = 1;
  while ( y > 0 && y <= 100 )
  {
   cout << y << endl;
   ++y;
  }
  
  Variable 'y' was not initialized and was an infinite loop. 
