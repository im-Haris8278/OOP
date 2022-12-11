#include <iostream>
using namespace std;

int ary[5];
int counter = 0;

Add(int num)
{
	
	ary[counter] = num;
	counter++;
	cout<<"Congratulations! Number Inserted Successfully."<<endl<<endl;
	
}

Del (int indx)
{
	if(counter == 0 )
	{
		cout<<"Empty ";
		return 0;
	}
	
	if(indx < 0 || indx >= counter)
	{
		cout<<"Invalid Index. ";
		return 0;
	}
	
	if(indx >= 0 && indx < counter)
	{
		ary[indx] = ary[counter - 1];
		counter--;
		cout<<"Number Deleted.";
		return 0;
	}
}

View()
{
	int i = 0;
	cout<<endl<<endl<<"Array Numbers are: ";
	for(i = 0; i < counter ; i++)
	{
		cout<<ary[i]<<", ";
	}//end for loop

}//end view()

int main()
{
	int opt = 1; 
	int num = 0;
	while(opt != 0)
	{
		cout<<endl<<"Press 1 to Add Number in Array"<<endl;
		cout<<endl<<"Press 2 to View Numbers"<<endl;
		cout<<endl<<"Press 3 to Delete Number"<<endl;
		cout<<endl<<"Press 0 to Exit"<<endl;
		cout<<endl<<"Press Enter Your Choice: ";
		cin>>opt;
		
		switch(opt)
			{
				case 1:
					cout<<"Please Enter Number: ";
					cin>>num;
					if(counter < 5)
					{
						Add(num);
					}
					else
					{
						cout<<"Sorry! Number Not Inserted ."<<endl<<endl;
					}
					
					break;
				case 2:
					cout<<"Numbers in Array are: ";
					View();
					break;
				case 3:
					cout<<"Enter Index to Delete: ";
					cin>>num;
					Del(num);
					break;
			}		
	}//end while
	
	return 0;
}//end main()

