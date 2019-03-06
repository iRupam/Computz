 #include<iostream.h>
 #include<conio.h>

   struct employee
   {

       int empid;
       char name[30];
       char address[30];
       float salary;
  };

     void main()
     {

	 clrscr();
	 int size,i;
	 employee e[10];
	 cout<<"\n enter the no.of employee data entery:";
	 cin>>size;
	 cout<<"\n------------employee data entry-------";
	 for(i=0;i<size;i++)
	 {
	     cout<<"\n enter id:";
	     cin>>e[i].empid;
	     cout<<"\n enter name:";
	     cin>>e[i].name;
	     cout<<"\n enter address:";
	     cin>>e[i].address;
	     cout<<"\n enter salary:";
	     cin>>e[i].salary;
    }
    cout<<"\n\n---------employee details--------";
    for(i=0;i<size;i++)
    {


	      cout<<"\n id;"<<e[i].empid;
	      cout<<"\n name:"<< e[i].name;
	      cout<<"\n address:"<<e[i].address;
	      cout<<"\n salary:"<<e[i].salary;
	      cout<<"\n----------";
       }
	getch();

       }
