/*********************************
* Author: Arul Srivastava        *
* Class: CSCI121-00N, Summer 2021*
* Assignment: Assignment 6       *
* Due Date: June 21, 2021        *
* Last Modified: June 21, 2021   *
*********************************/
#include<iostream>
#include <iomanip>
using namespace std;

class Movie
{
   //class variables
   public:
       string name;
       string ratingMPAA;
       int numRated1, numRated2, numRated3, numRated4, numRated5;
      
       //getter and setter methods
       string getName()
       {
           return this->name;
       }
      
       void setName(string name)
       {
           this->name = name;
       }
      
       string getRatingMPAA()
       {
           return this->ratingMPAA;
       }
      
       void setRatingMPAA(string mpaa)
       {
           this->ratingMPAA = mpaa;
       }
      
       //method to add a rating
       void addRatingMPAA(int rating)
       {
           //if rating is in correct range
           if(rating >= 1 && rating <= 5)
           {
               switch(rating)
               {
                   case 1:
                       numRated1 += 1;
                       break;
                   case 2:
                       numRated2 += 1;
                       break;
                   case 3:
                       numRated3 += 1;
                       break;
                   case 4:
                       numRated4 += 1;
                       break;
                   case 5:
                       numRated5 += 1;
                       break;
               }
           }
           else
           {//else print the error message
               cout << "Wrong Rating!!!" << endl;
           }
       }
       //method returns the avergae rating
       double getAverageRating(){
            double total = 0.0 + 1 * numRated1 + 2 * numRated2 + 3 * numRated3 + 4 * numRated4 + 5 * numRated5;
            return total/(numRated1 + numRated2 + numRated3 + numRated4 + numRated5);
       }
      
       //constructor
       Movie(string name, string mpaa)
       {
           setName(name);
           setRatingMPAA(mpaa);
           this->numRated1 = this->numRated2 = this->numRated3 = this->numRated4 = this->numRated5 = 0;
       }
};

int main()
{
   Movie m1 = Movie("Transformers", "PG-13");
   m1.addRatingMPAA(1);
   m1.addRatingMPAA(2);
   m1.addRatingMPAA(3);
   m1.addRatingMPAA(2);
   m1.addRatingMPAA(5);
   m1.addRatingMPAA(5);
   m1.addRatingMPAA(5);
   m1.addRatingMPAA(4);
   cout << "Name: " << m1.getName() << "\tMPAA: " << m1.getRatingMPAA() << "\tAverage Rating: " << fixed << setprecision(2) << m1.getAverageRating() << endl;
  
   Movie m2 = Movie("Terminator", "R");
   m2.addRatingMPAA(1);
   m2.addRatingMPAA(4);
   m2.addRatingMPAA(3);
   m2.addRatingMPAA(5);
   m2.addRatingMPAA(2);
   m2.addRatingMPAA(3);
   m2.addRatingMPAA(4);
   m2.addRatingMPAA(4);
   m2.addRatingMPAA(5);
   cout << "Name: " << m2.getName() << "\tMPAA: " << m2.getRatingMPAA() << "\t\tAverage Rating: " << fixed << setprecision(2) << m2.getAverageRating() << endl;

   Movie m3 = Movie("Avatar", "PG-13");
   m3.addRatingMPAA(1);
   m3.addRatingMPAA(5);
   m3.addRatingMPAA(4);
   m3.addRatingMPAA(3);
   m3.addRatingMPAA(2);
   m3.addRatingMPAA(1);
   m3.addRatingMPAA(5);
   m3.addRatingMPAA(4);
   m3.addRatingMPAA(5);
   cout << "Name: " << m3.getName() << "\t\tMPAA: " << m3.getRatingMPAA() << "\tAverage Rating: " << fixed << setprecision(2) << m3.getAverageRating() << endl;

   Movie m4 = Movie("The Avengers", "PG-13");
   m4.addRatingMPAA(5);
   m4.addRatingMPAA(5);
   m4.addRatingMPAA(4);
   m4.addRatingMPAA(3);
   m4.addRatingMPAA(2);
   m4.addRatingMPAA(1);
   m4.addRatingMPAA(5);
   m4.addRatingMPAA(5);
   m4.addRatingMPAA(5);
   cout << "Name: " << m4.getName() << "\tMPAA: " << m4.getRatingMPAA() << "\tAverage Rating: " << fixed << setprecision(2) << m4.getAverageRating() << endl;
   
   Movie m5 = Movie("Toy Story", "G");
   m5.addRatingMPAA(3);
   m5.addRatingMPAA(4);
   m5.addRatingMPAA(4);
   m5.addRatingMPAA(4);
   m5.addRatingMPAA(3);
   m5.addRatingMPAA(4);
   m5.addRatingMPAA(4);
   m5.addRatingMPAA(4);
   m5.addRatingMPAA(5);
   cout << "Name: " << m5.getName() << "\t\tMPAA: " << m5.getRatingMPAA() << "\t\tAverage Rating: " << fixed << setprecision(2) << m5.getAverageRating() << endl;

   return 0;
}