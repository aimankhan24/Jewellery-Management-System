#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class customer
{
	public:
		int price;
		int quantity;
		string category;
		string Name;
	    int pay, ID;
	    int money;
	    string number;
	    int get;
	    string adress;
			
		
	public:
		void selectCategory()
		{
			cout<<"Select category:\n\n 1.Earrings \n 2.Tie chain \n 3.Ring \n 4.Bracelet \n 5.Earrings"<<endl;
			cin>>category;
		}
		
	void productInfo()
	{
		cout<<"Enter product info:" <<endl;
		cout<<"Product ID: ";
		cin>>ID;
		cout<<"Product name: ";
		cin>>Name;
	    cout<<"quantity: ";
	    cin>>quantity;
	    cout<<"price: " ;
	    cin>>price;
	    
		
		
	}
	
	void request_order()
	{
		cout<<"Enter customer info"<<endl;
		cout<<"Enter your name: ";
		cin>>Name;
		cout<<"Enter adress: ";
		cin>>adress;
		cout<<"Enter phone number: ";
		cin>>number;		
	}
	
	
	void payment()  
	{
		cout<<"Choose your way of payment: \n 1.online \n 2.offline\n\nEnter your choice(1-2): ";
		cin>>pay;
		
		if (pay==1)
		{
			int choice;
			//cout<<"\n select way of online payment: \n 1.easy paisa \n 2.Jazz Cash \n 3.credit\debit card \n 4.bank transfer\n";
		    cin>>choice;
		    switch(choice)
		    {
		    	case 1: cout<<"Send RS "<<money<<" on this easy paisa number: 1232456789";
		    	break;
		    	case 2: cout<<"Send RS "<<money<<" on this easy paisa number: 1232456789";
		    	break;
		    	case 3: cout<<"Enter your debit/credit card no: ";;
		    	cin>>number;
		    	break;
		    	case 4: cout<<"Depoist money in this bank account: 154649878891";
		    	break;
		    	default: cout<<"INVALID CHOICE.";
			}
		    
		}
		
		else if(pay==2)
		{
			cout<<"Enter money";
			cin>>money;
			
		}
		
		else
		{
			cout<<"Invalid option";
		}
		
    }
		
		void getProduct()
		{
			
			cout<<"Choose your way of get product(1-2): \n\n1.Home delivery\n2. Get from shop keeper\n";
			cin>>get;
			
			
			
		}
			
};



	

	
	
class shopkeeper
{

	private:
        int code;
		float price,discount;
		string jew_name;
        char shopkeeper_name[30];
		int id, phoneNo;
		
		
	public:
		void input();
		void searchproduct();
		
	   
		
			
		   
			
		
};

        void shopkeeper::input()
        {
        	cout<<"Shopkeeper_Name: ";
        	cin>>shopkeeper_name;
        	cout<<"ID: " ;
        	cin>>id;
        	cout<<"phone number: ";
        	cin>>phoneNo;     
		
		  	
		}
		
		void shopkeeper::searchproduct()
		 {
         system("cls");
		 fstream file;
		int p_c,found=0;
		cout<<"\n\n\t\t\tSearch Record";
		cout<<"\n\n Product Code : ";
		cin>>p_c;
		file.open("product.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Openning Error...";
		}
		else
		{
			file>>code>>jew_name>>price>>discount;
			while(!file.eof())
			{
				if(p_c == code)
				{
					system("cls");
					cout<<"\n\n\t\t\tSearch Record";
					cout<<"\n\n Product Code : "<<code;
					cout<<"\n\n Name : "<<jew_name;
					cout<<"\n\n Price : "<<price;
					cout<<"\n\n Discount : "<<discount<<"%";
					found++;
				}
				file>>code>>jew_name>>price>>discount;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n Record Can't Found...";
		}
	
		
	};
			
	
   
   class Login
{
	customer objc;     
	shopkeeper s;
public:

    int choice;
    string email;
    string password;

public:

void description(){

    cout<<"\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\t                                            \n";
    cout<<"\t\t\t\t              SHOP MAIN MENU                \n";
    cout<<"\t\t\t\t                                            \n";
    cout<<"\t\t\t\t--------------------------------------------\n";
    cout<<"\t\t\t\t                                            \n";
 
  /* cout<<"\t\t\t\t|           1)Shopkeeper                     \n";
    cout<<"\t\t\t\t|                                            \n";
    cout<<"\t\t\t\t|           2)Customer                       \n";
    cout<<"\t\t\t\t|                                            \n";
    cout<<"\t\t\t\t|           3)Exit                           \n";
    cout<<"\t\t\t\t         Please Select!";
    cin>>choice;  */
}
void display(){
m:
	char ch;
  do{
		int choice;

     cout<<"ENTER CHOICE\n"<<"1.Shopkeeper\n"<<"2.Customer\n"<<"3.Exit\n";
     cout<<"Make a choice: ";
     cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"\t\t\t Please Login  \n";
        cout<<"\t\t\t Enter Email   \n";
        cin>>email;
        cout<<"\t\t\t Enter Password  \n";
        cin>>password;

        if(email=="farooqkhan@gmail.com" && password=="farooq@0300")
        {
            cout<<"shopkeeper\n";
            s.input();
            s.searchproduct();
            
            
        }
        else
        {
            cout<<"Invalid email/password";
        }
        break;
    
    case 2:
    {
        cout<<"customer\n";
        objc.selectCategory();
        objc.productInfo();
        objc.request_order();
        objc.payment();
        objc.getProduct();
        
    }
    
    case 3:
    {
        exit(0);     //successfull termination of program
    }
    default:
    {
        cout<<"Please select from the given options";
    }
	
	}
	goto m;
	cout<<"Do you want to continue ? : ";
     cin>>choice;
 
     }while(choice=='Y'||choice=='y');
  
};

};





class stock// class of stock
{
	public: // variables
		int code;
		float price,discount;
		string name;
		
		
	public: // functions
		
		void add();
		void edit();
		void del();
		void show();
		void enter_choice();
		
};
void stock::add() // Add Product function in bill class
	{
		p:
		fstream file,file1;
		int c,found=0;
		float p,d;
		string n;
		cout<<"\n\n\t\t\tAdd New Product";
		cout<<"\n\n Product Code : ";
		cin>>code;
		cout<<"\n\n Name : ";
		cin>>name;
		cout<<"\n\n Price : ";
		cin>>price;
		cout<<"\n\n Discount in % : ";
		cin>>discount;
		file.open("product.txt",ios::in);
		if(!file)
		{
			file.open("product.txt",ios::app|ios::out);
			file<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";
			file.close();
		}
		else
		{
			file>>c>>n>>p>>d;
			while(!file.eof())
			{
				if(c == code)
				{
					found++;
				}
				file>>c>>n>>p>>d;
			}
			file.close();
			if(found == 1)
			goto p;
			else
			{
				file.open("product.txt",ios::app|ios::out);
				file<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";
				file.close();	
			}
		}
		cout<<"\n\n\t\t Record Inserted Successfully...";
	}
	
	void stock::edit() // edit function of bill class
	{
		
		fstream file,file1;
		int p_c,found=0,c;
		float p,d;
		string n;
		cout<<"\n\n\t\t\tEdit Record";
		cout<<"\n\n Product Code : ";
		cin>>p_c;
		file.open("product.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Openning Error...";
		}
		else
		{
			file1.open("product1.txt",ios::app|ios::out);
			file>>code>>name>>price>>discount;
			while(!file.eof())
			{
				if(p_c == code)
				{
					cout<<"\n\n Product New Code : ";
					cin>>c;
					cout<<"\n\n Name : ";
					cin>>n;
					cout<<"\n\n Price : ";
					cin>>p;
					cout<<"\n\n Discount in % : ";
					cin>>d;
					file1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
					cout<<"\n\n\n\t\tRecord Edit Successfully...";
					found++;
				}
				else
				{
					file1<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";
				}
				file>>code>>name>>price>>discount;
			}
			file.close();
			file1.close();
			remove("product.txt");
			rename("product1.txt","product.txt");
			if(found == 0)
			cout<<"\n\n Record Can't Found...";
		}
	}
	void stock::del() // delete function of bill class
	{
		
		fstream file,file1;
		int p_c,found=0;
		cout<<"\n\n\t\t\tDelete Product";
		cout<<"\n\n Product Code : ";
		cin>>p_c;
		file.open("product.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File openning error...";
		}
		else
		{
			file1.open("product1.txt",ios::app|ios::out);
			file>>code>>name>>price>>discount;
			while(!file.eof())
			{
				if(code == p_c)
				{
					cout<<"\n\n Product Deleted Successfully...";
					found++;	
				}
				else
				{
					file1<<" "<<code<<" "<<name<<" "<<price<<" "<<discount<<"\n";
				}
				file>>code>>name>>price>>discount;
			}
			file.close();
			file1.close();
			remove("product.txt");
			rename("product1.txt","product.txt");
			if(found == 0)
			cout<<"\n\n Record Can't Found...";
		}
	}
	void stock::show() // show function of bill class
	{
		
		fstream file;
		cout<<"\n\n\t\t\tShow Products";
		file.open("product.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File openning error...";
		}
		else
		{
			cout<<"\n\n Code\tName\t\tPrice\t\tDiscount %";
			file>>code>>name>>price>>discount;
			while(!file.eof())
			{
				cout<<"\n "<<code<<"\t "<<name<<"\t   "<<price<<"\t\t\t"<<discount;
				file>>code>>name>>price>>discount;
			}
			file.close();
		}
	}
	
	void stock::enter_choice(){
	char ch;
 
    
     do{
     int n;
 
     cout<<"ENTER CHOICE\n"<<"1.ADD THE JEWELLERY\n"<<"2.EDIT THE JEWELLERY\n"<<"3.DELETE THE JEWELLERY\n"<<"4.LIST OF THE JEWELLERY\n"<<"5.ENETR CHOICE";
     cout<<"Make a choice: ";
     cin>>n;
 
     switch(n){
          case 1:
		  {
            add();
            break;
		  }
          case 2 :
		  {
           edit();
            break;}
          case 3:
            {del();
            break;}
        case 4:
            {show();
            break;}
        case 5:
		enter_choice();
 {break;
 }
          default :
                cout<<"Invalid Choice\n";
				break;
     }
	 



cout<<"Do you want to continue ? : ";
     cin>>ch;
 
     }while(ch=='Y'||ch=='y');
     
};








class bill
{
	private: // variables
		int code;
		float price,discount;
		string name;
		//int_billnum;
    public:
void list();
		void invoice();
        };

    void bill::list() // list function of bill class
	{
		fstream file;
		file.open("product.txt",ios::in);
		cout<<"\n\n====================================================\n";
		cout<<"P.NO.\t\tNAME\t\tPRICE\n";
		cout<<"====================================================\n";
		file>>code>>name>>price>>discount;
		while(!file.eof())
		{
			cout<<code<<"\t\t"<<name<<"\t\t"<<price<<"\n";
			file>>code>>name>>price>>discount;
		}
		file.close();
	}
	void bill::invoice() // invoice function of bill class
	{
		
		fstream file;
		char choice;
		int o_c[50],o_q[50],c=0;
		float amt=0,dis=0,total=0;
		cout<<"\n\n\t\t\t Invoice Generate";
		file.open("product.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n Data Base is Empty...";
		}
		else
		{
			file.close();
			list();
			cout<<"\n============================";
			cout<<"\n    PLACE YOUR ORDER";
			cout<<"\n============================\n";
			do
			{
				p:
				cout<<"\n\n Product Code : ";
				cin>>o_c[c];
				cout<<"\n Product Quantity : ";
				cin>>o_q[c];
				for(int i=0;i<c;i++)
				{
					if(o_c[c] == o_c[i])
					{
						cout<<"\n\n Duplicate Product Code...";
						goto p;
					}	
				}
				c++;
				cout<<"\n\n Do You Want Add Another Product (Y,N) : ";
				cin>>choice;	
			}while(choice == 'Y' || choice == 'y');
			system("cls");
			cout<<"\n\n***INVOICE*\n";
			cout<<"\nPr No.\tPr Name\tQuantity \tPrice \tAmount \tAmount after discount\n";
			for(int i=0;i<c;i++)
			{
				file.open("product.txt",ios::in);
				file>>code>>name>>price>>discount;
				while(!file.eof())
				{
					if(code == o_c[i])
					{
						amt = price*o_q[i];
						dis = amt - (amt/100*discount);
						total += dis;
						cout<<"\n"<<code<<"\t"<<name<<"\t"<<o_q[i]<<"\t\t"<<price<<"\t"<<amt<<"\t\t"<<dis;	
					}
					file>>code>>name>>price>>discount;
				}
				file.close();
			}
			cout<<"\n\n======================================";
			cout<<"\n Total Amount : "<<total;
		}
	}








int main()
{


	cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°° JEWELLERY SHOP MANAGEMENT °°°°°°°°°°°°°°°°°°°°°°°°°°°";
              cout<< "////////////////////////////////////////////////"<<endl;
              cout<<"///////////////Shop name:AZMI JEWELLERS///////////"<<endl;
              cout<<"Shop address:Shop No. 7,2/122,Commercial Area ,Liaquatabad Sarafa Market,Liaquatabad,Karachi."<<endl;
              cout<<"////////////////////////Shop number:021-34925376/////////////////////////////////"<<endl;
	




Login l1;             //login obj
        
        
stock s2;

           bill b;

	char ch;
 
    
     do{
     int n;
 
     cout<<"ENTER CHOICE\n"<<"1.LOGIN\n"<<"2.STOCK\n"<<"3.BILLING\n";
     cout<<"Make a choice: ";
     cin>>n;
 
     switch(n){
          case 1:
		  {
            l1.description();
			l1.display();
            break;
		  }
          case 2 :
		  {
           s2.enter_choice();
            break;}
          case 3:
            {
				b.list();
				b.invoice();
            break;}
       
 
          default :
                cout<<"Invalid Choice\n";
				break;
     
	 }
	 


cout<<"Do you want to continue ? : ";
     cin>>ch;
 
     
	 }while(ch=='Y'||ch=='y');
	 

	  
    return 0;
 }