//============================================================================
// Name        : STL_Vector.cpp
// Author      : Machine Minds /Mohamed Gasser
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <assert.h>
#include <algorithm>
using namespace std;

int main() {


	vector<int> num{3,2,3,2,3};

	vector<int>::iterator i1=num.end();
	int k=0;
	///another solution
	//	num.erase( std::remove( num.begin(), num.end(), 2 ), num.end() );
	//    for(int i=0;i<num.size();i++)
	//    {
	//    	cout<<num[i];
	//    }

	//	for(int i=0; i<num.size();i++)
	//	{
	//
	//		if(num[i]==2)
	//		{
	//		  //  i1[i]=0;
	//		    num.erase((num.begin())+i);
	//			 i--;
	//
	//		}
	//		else
	//		{
	//			cout<<num.at(i);
	//			k++;
	//	}
	//
	//	// cout<<"k="<<k;
	//	}

//
//	for(int i=0; i<num.size();i++)
//	{
//
//		if(num[i]!=2)
//		{
//			num[k]=num[i];
//			cout<<num.at(i);
//		}
//		else
//		{
//
//			k++;
//		}
//
//		// cout<<"k="<<k;
//	}

	//another solution

	for(int i=num.size()-1; i>=0;i--)
	{


		if(num[i]==2)
		{
			num.erase(num.end()-k);

		}
		else
		{
			cout<<num.at(i);
			k++;
		}

		// cout<<"k="<<k;
	}

	return 0;
}



//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
//	vector <int>  num{10,20,30,40};
//    int operand =*num.begin();
//    vector <int>::iterator i1=num.begin();
//	cout<< operand<<"   "<<*i1 ;

//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val) {
//
//       return
//    }
//};
//  std::vector<int> days_in_each_month = {
//    31,  // January
//    28,  // February
//    31,  // March
//    30,  // April
//    31,  // May
//    30,  // June
//    31,  // July
//    31,  // August
//    30,  // September
//    31,  // October
//    30,  // November
//    31   // December
//  };
//
//  std::cout << "There are "
//            << std::to_string(days_in_each_month[0])
//            << " days in January.\n";
//  return 0;



