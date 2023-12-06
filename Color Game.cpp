
#include <iostream>
#include <string>

using namespace std;

int
main ()
{
  system ("clear");
  int choice, i, c_index, c_ind, match = 0, red = 0, ylw = 0, blu = 0, grn =
    0, wht = 0, blk = 0;
  string cpick[6] =
    { "Red", "Yellow", "Blue", "Green", "White", "Black" }, temp;
  float bet, int_earn = 0, total_earn = 0, temp_value;
  char repeat;

  do				//program rerun
    {
      srand(time(0));
      string cpick[6] =
	{ "Red", "Yellow", "Blue", "Green", "White", "Black" };
      i = 0;
      c_index = 0;
      c_ind = 0;
      match = 0;
      /*re-initialize for program rerun*/

      //Disclaimer notice
      cout << "Disclaimer:\n";
      cout << "This game is not intended to promote gambling.\n";
      cout << "This is for algorithmic thinking & coding purposes only.\n";
      cout << "Prizes have no real value.\n\n";

      //display prizes
      cout << "Prices:\n";
      cout << "3 Color Matches = Bet x P10\n";
      cout << "2 Color Matches = Bet x P5\n";
      cout << "1 Color Matches = Bet X P3\n";
      cout << "No Match = Bet X 0\n";
      
      //display introduction
	  cout << "\n------------------------------\n";
	  cout << "Welcome to the COLOR GAME!";
	  cout << "\n------------------------------\n";


      do //player choosing color 
	{
	  cout << "\nChoose your color!\n";
	  cout << "[1]Red [2]Yellow [3]Blue [4]Green [5]White [6]Black\n";
	  cout << "Choice: ";
	  cin >> choice;

	  //input validation for choice 
	  if (!cin)
	    {
	      cout << "\n\tInvalid. Please enter an integer!\n";
	      cin.clear ();
	      cin.ignore ();
	    }
	  else if (choice < 1 || choice > 6)
	    {
	      cout << "\n\tPlease Choose from Color(s) 1 to 6 Only.\n";
	    }
	}
      while ((choice < 1 || choice > 6) || (!cin));
      

      if (choice == 1)		//if user chooses Red
	{

	  cout << "\nYour Color is Red.\n";

	  do			//input validation
	    {
	      cout << "\nBet (minimum of 1 peso): ";
	      cin >> bet;

	      if (!cin)
		{
		  cout << "\n\tInvalid. Please enter an integer!\n";
		  cin.clear ();
		  cin.ignore ();
		}
	      else if (bet < 1)
		{
		  cout << "\n\tInvalid. Minimum amount is 1 peso!\n";
		}
	    }
	  while ((bet < 1) || (!cin));

	  c_ind = 1;
	  //display computer color 
	  for (i = 0; i < 3; i++)
	    {
	      c_index = (rand () % 5) + 1;

	      cout << "\nComputer Color " << c_ind << " is " << cpick[c_index] <<
		".";
	      c_ind++;
	      
	    temp=cpick[c_index];
	    cpick[c_index]=cpick[i];
	    cpick[i]=temp;
	    }
	  
	  for (i = 0; i < 3; i++)
	    {
    	      if (cpick[i] == "Red")
    		{
    		  match++;
    		}
	    }
	}
      else if (choice == 2)	//if user chooses Yellow
	{
	  cout << "\nYour Color is Yellow.\n";

	  do			//input validation
	    {
	      cout << "\nBet (minimum of 1 peso): ";
	      cin >> bet;

	      if (!cin)
		{
		  cout << "\n\tInvalid. Please enter an integer!\n";
		  cin.clear ();
		  cin.ignore ();
		}
	      else if (bet < 1)
		{
		  cout << "\n\tInvalid. Minimum amount is 1 peso!\n";
		}
	    }
	  while ((bet < 1) || (!cin));

	  c_ind = 1;
	  //display computer color 
        for (i = 0; i < 3; i++)
	    {
	      c_index = (rand () % 5) + 1;

	      cout << "\nComputer Color " << c_ind << " is " << cpick[c_index] <<
		".";
	      c_ind++;
	      
	    temp=cpick[c_index];
	    cpick[c_index]=cpick[i];
	    cpick[i]=temp;
	    }
	  for (i = 0; i < 3; i++)
	    {
    	      if (cpick[i] == "Yellow")
    		{
    		  match++;
    		}
	    }
	}
      else if (choice == 3)	//if user chooses Blue
	{
	  cout << "\nYour Color is Blue.\n";

	  do			//input validation
	    {
	      cout << "\nBet (minimum of 1 peso): ";
	      cin >> bet;

	      if (!cin)
		{
		  cout << "\n\tInvalid. Please enter an integer!\n";
		  cin.clear ();
		  cin.ignore ();
		}
	      else if (bet < 1)
		{
		  cout << "\n\tInvalid. Minimum amount is 1 peso!\n";
		}
	    }
	  while ((bet < 1) || (!cin));

	  c_ind = 1;
	  //display computer color 
        for (i = 0; i < 3; i++)
	    {
	      c_index = (rand () % 5) + 1;

	      cout << "\nComputer Color " << c_ind << " is " << cpick[c_index] <<
		".";
	      c_ind++;
	      
	    temp=cpick[c_index];
	    cpick[c_index]=cpick[i];
	    cpick[i]=temp;
	    }
	  for (i = 0; i < 3; i++)
	    {
    	      if (cpick[i] == "Blue")
    		{
    		  match++;
    		}
	    }
	    
	    
	}
      else if (choice == 4)	//if user chooses Green
	{
	  cout << "\nYour Color is Green.\n";

	  do			//input validation
	    {
	      cout << "\nBet (minimum of 1 peso): ";
	      cin >> bet;

	      if (!cin)
		{
		  cout << "\n\tInvalid. Please enter an integer!\n";
		  cin.clear ();
		  cin.ignore ();
		}
	      else if (bet < 1)
		{
		  cout << "\n\tInvalid. Minimum amount is 1 peso!\n";
		}
	    }
	  while ((bet < 1) || (!cin));

	  c_ind = 1;
	  //display computer color 
        for (i = 0; i < 3; i++)
	    {
	      c_index = (rand () % 5) + 1;

	      cout << "\nComputer Color " << c_ind << " is " << cpick[c_index] <<
		".";
	      c_ind++;
	      
	    temp=cpick[c_index];
	    cpick[c_index]=cpick[i];
	    cpick[i]=temp;
	    }
	  for (i = 0; i < 3; i++)
	    {
    	      if (cpick[i] == "Green")
    		{
    		  match++;
    		}
	    }
	
	}
      else if (choice == 5)	//if user chooses White
	{
	  cout << "\nYour Color is White.\n";

	  do			//input validation
	    {
	      cout << "\nBet (minimum of 1 peso): ";
	      cin >> bet;

	      if (!cin)
		{
		  cout << "\n\tInvalid. Please enter an integer!\n";
		  cin.clear ();
		  cin.ignore ();
		}
	      else if (bet < 1)
		{
		  cout << "\n\tInvalid. Minimum amount is 1 peso!\n";
		}
	    }
	  while ((bet < 1) || (!cin));

	  c_ind = 1;
	  //display computer color 
        for (i = 0; i < 3; i++)
	    {
	      c_index = (rand () % 5) + 1;

	      cout << "\nComputer Color " << c_ind << " is " << cpick[c_index] <<
		".";
	      c_ind++;
	      
	    temp=cpick[c_index];
	    cpick[c_index]=cpick[i];
	    cpick[i]=temp;
	    }
	      
	  for (i = 0; i < 3; i++)
	    {
    	      if (cpick[i] == "White")
    		{
    		  match++;
    		}
	    }
	
	}
      else if (choice == 6)	//if user chooses Black
	{
	  cout << "\nYour Color is Black.\n";

	  do			//input validation
	    {
	      cout << "\nBet (minimum of 1 peso): ";
	      cin >> bet;

	      if (!cin)
		{
		  cout << "\n\tInvalid. Please enter an integer!\n";
		  cin.clear ();
		  cin.ignore ();
		}
	      else if (bet < 1)
		{
		  cout << "\n\tInvalid. Minimum amount is 1 peso!\n";
		}
	    }
	  while ((bet < 1) || (!cin));

	  c_ind = 1;
	  //display computer color 
        for (i = 0; i < 3; i++)
	    {
	      c_index = (rand () % 5) + 1;

	      cout << "\nComputer Color " << c_ind << " is " << cpick[c_index] <<
		".";
	      c_ind++;
	      
	    temp=cpick[c_index];
	    cpick[c_index]=cpick[i];
	    cpick[i]=temp;
	    }
	      
	  for (i = 0; i < 3; i++)
	    {
    	      if (cpick[i] == "Black")
    		{
    		  match++;
    		}
	    }
	
	}
	
	
    //comparing strings and counting how many were used
    for (i = 0; i < 3; i++)
	{
	  if (cpick[i] == "Red")
	    red++;
	  else if (cpick[i] == "Yellow")
	    ylw++;
	  else if (cpick[i] == "Blue")
	    blu++;
	  else if (cpick[i] == "Green")
	    grn++;
	  else if (cpick[i] == "White")
	    wht++;
	  else if (cpick[i] == "Black")
	    blk++;
	}
	
	
    //computing the amount got 
    if (match == 1)
	{
	  int_earn = bet * 3;
	  cout << "\n\nYou got: " << int_earn << " pesos.\n\n";
	}
    else if (match == 2)
	{
	  int_earn = bet * 5;
	  cout << "\n\nYou got: " << int_earn << " pesos.\n\n";
	}
    else if (match == 3)
	{
	  int_earn = bet * 10;
	  cout << "\n\nYou got: " << int_earn << " pesos.\n\n";
	}
    else
	{
	  int_earn = bet * 0;
	  cout << "\n\nYou got: " << int_earn << " pesos.\n\n";
	}
	
	
    //storing of amount got 
      temp_value = int_earn;
      total_earn += temp_value;
      
      
    //ask the user to repeat the program
    do
	{
	  cout << "\n\nPlay again? [Y]es [N]o: ";
	  cin >> repeat;
	  cout << "\n";

	if (!
	      (repeat == 'Y' || repeat == 'y' || repeat == 'N'
	       || repeat == 'n'))
	    cout << "\n\tInvalid choice. Please choose between Y or N only.\n";
	}
    while (!
	     (repeat == 'Y' || repeat == 'y' || repeat == 'N'
	      || repeat == 'n'));

      cout << "------------------------------\n\n";

    }
  while (repeat == 'Y' || repeat == 'y');
  
  
//display summary 
  cout << "Thank you for playing!\n";
  cout << "\nHere is the summary of the colors used:\n\n";
  cout << "Red: " << red << "\n";
  cout << "Yellow: " << ylw << "\n";
  cout << "Blue: " << blu << "\n";
  cout << "Green: " << grn << "\n";
  cout << "White: " << wht << "\n";
  cout << "Black: " << blk << "\n";
  cout << "\nTotal Earnings: " << total_earn << " pesos.";


  return 0;
}

