//Hugo Monterrubio
//Sectior 04

#include "diamond.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

Diamond::Diamond(int s, char b, char f){
   if(s<1)
      s=1;
   else if(s>39)
      s=39;
   size= s;
   SetBorder(b);
   SetFill(f);
}

int Diamond::GetSize() const{
   return size;
}

int Diamond::Perimeter(){
   return size*4;
}

double Diamond::Area(){
   return ((size*size)/2)*sqrt(3);
}

bool Diamond::Grow(){
   if(size<39){
      size+=1;
      return true;
   }
   return false;
}

bool Diamond::Shrink(){
   if(size>1){
      size-=1;
      return true;
   }
   return false;
}

void Diamond::SetBorder(char b){
   if(b>='!' && b<='~'){
      border= b;
   }
   else{
      SetBorder('#');
   }
}

void Diamond::SetFill(char f){
   if(f>='!' && f<='~'){
      fill= f;
   }
   else{
      SetFill('*');
   }
}

void Diamond::Draw(){
   cout<<'\n';
   for(int i=1; i<=size; i++){
      for(int j=size-i; j>0; j--)
         cout<<" ";
      for(int k=0; k<i; k++){
         if(k==0||k==i-1){
	    cout<<border;
	    cout<<" ";
	 }
	 else{
	    cout<<fill;
	    cout<<" ";
	 }
      }
	 cout<<'\n';
   }
      for(int i= size-1; i>=1; i--){
         for(int j=0; j<size-i; j++)
	    cout<<" ";
	 for(int k=0; k<i; k++){
	    if(k==0||k==i-1){
	       cout<<border;
	       cout<<" ";
	    }
	    else{
	       cout<<fill;
	       cout<<" ";
	    }
	 }
	 cout<<'\n';
   }
}

void Diamond::Summary(){
   cout<<"Size of diamond's size = " << GetSize() << " units.\n";
   cout<<"Perimeter of diamond = " << Perimeter() <<" units.\n";
   cout<<"Area of diamond = " << fixed << setprecision (2) << Area() << " units.\n";
   cout<< "Diamond looks like:\n";
   Draw();
}

