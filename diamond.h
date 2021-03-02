//Hugo Monterrubio
//Section 04

class Diamond{

public:
   //Constructor 
   Diamond(int, char b='#', char f='*');
   
   //getSize returns size of a size
   int GetSize() const;

   //returns parameter of diamond
   int Perimeter();

   //returns area of diamond
   double Area();

   //Grows diamond by 1 (unless it goes OOB)
   bool Grow();

   //Shrinks diamond by 1 (unless it goes OOB)
   bool Shrink();

   //sets the border to a char in between ASCII 33-126
   void SetBorder(char);

   //sets fill to a char in between ASCII 33-126
   void SetFill(char);

   //draws the diamond
   void Draw();

   //returns the size, parameter, area, and picture of diamond
   void Summary();

//private member data
private:
  int size;
  char border;
  char fill;

};
