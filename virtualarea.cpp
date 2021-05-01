#include<iostream>
using namespace std;
 class area
 {
 	protected :
 		int w,h;
 	public :
 		area(){}
 		~area(){}
 		void set()
 		{
 			cout<<"\nenter height : ";
 			cin>>h;
 			cout<<"\nenter width : ";
 			cin>>w;
 			return ;
 		}
 		void display()
 		{
 			cout<<"\nheight : "<<h;
 			cout<<"\nwidth : "<<w;
 			return ;
 		}
 		virtual void calcarea()
 		{
 			cout<<"\narea : 0";
 		}
 	
 };
 class square: public area
 {
 		public :
 		square(): area(){}
 		~square(){}
 		void calcarea()
 		{
 			cout<<"\narea of square : "<<w*w;
 			return ;
 		}	
 };
 class triangle : public square
 {
 		public :
 			triangle():square(){}
 			~triangle(){}
 			void calcarea()
 			{
 				int d=(w*h)/2;
 				cout <<"\n area of triangle : "<<d;
 				return ;
 			}
 };
 
 class rect: public square
 {
 		public :
 				rect (): square(){}
 				~rect(){}
 				void clacarea()
 				{
 				
 					cout<<"\narea of reactangle : "<< w*h;
 					return ;
 				}
 				
 };

int main()
{
	area *aptr;
	aptr->set();
	aptr->display();
	aptr->calcarea();
	
	return 0;
	
}
