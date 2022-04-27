// LIBRARY MANAGEMENT SYSTEM


//                                                   SHELL INTERFACED - LIBRARY MANAGEMENT SYSTEM
//                                                                                               BY,
//                                                                                                    PRANESH M V.

#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
//                                  STUDENT USERNAMES    : 1. PRANESH,  2. KAVINITHAN, 3. GOWRISHANKAR, 4.VARUN
//                                     STUDENT ID        : 1. 191AU125, 2. 191AU118,   3. 191AU111,     4. 191AU139
//                              LIBRARIAN ID & PASSWORD  : 1. LIB101,   2. LIB102
//                               ADMINISTRATOR PASSWORD  : ADMINPASS




                                                                      // CLASS DATABASE //
class database
{
    public:
           string s_name,s_id,l_id,l_pass,a_pass,p;int f,L;
    public:
            string s_input()
            {
                cout<<"IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n";
                cout<<"II                                                                                                                II\n";
                cout<<"II  >>>>>.>>>>.>>>.>>.>.>.>.>.> --- SHELL INTERFACED - LIBRARY MANAGEMENT SYSTEM --- <.<.<.<.<.<<.<<<.<<<<.<<<<<  II\n";
                cout<<"II                                                                                                                II\n";
                cout<<"IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n\n";

                cout<<"IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n";
                cout<<"II>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>      LOG-IN AS      <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<II\n";
                cout<<"IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n\n";

                cout<<"                                       IIIII----------------------- -IIIII\n";
                cout<<"                                       [>>>  [1]   ADMINISTRATOR      <<<]\n";
                cout<<"                                       IIIII-------------------------IIIII\n\n";

                cout<<"                                       IIIII-------------------------IIIII\n";
                cout<<"                                       [>>>  [2]    LIBRARIAN         <<<]\n";
                cout<<"                                       IIIII-------------------------IIIII\n\n";

                cout<<"                                       IIIII-------------------------IIIII\n";
                cout<<"                                       [>>>  [3]     STUDENT          <<<]\n";
                cout<<"                                       IIIII-------------------------IIIII\n\n";

                cout<<"                                       IIIII-------------------------IIIII\n";
                cout<<"                                       [>>>  [4] CLOSE APPLICATION    <<<]\n";
                cout<<"                                       IIIII-------------------------IIIII\n\n";

                cout<<"====================================================================================================================\n\n";
                cin >>L;
                switch(L)
                {
                    case 1:
                    {
                        a_input();
                        break;
                    }
                    case 2:
                    {
                        l_input();
                        break;
                    }
                    case 3:
                    {
                        st_input();
                        break;
                    }
                }
            }
    public:
            string st_input()
            {
                cout<<"ENTER YOUR USERNAME  : ";
                cin>>s_name;
                cout<<"ENTER YOUR ID NUMBER : ";
                cin>>s_id;
                if((s_name=="PRANESH"&&s_id=="191AU125")||(s_name=="KAVINITHAN"&&s_id=="191AU118")||(s_name=="GOWRISHANKAR"&&s_id=="191AU111")||(s_name=="VARUN"&&s_id=="191AU139"))
                {
                    p=s_id;
                    verify();
                }
                else
                {
                    cout<<"\t           >>> INVALID USERNAME / ID -- [x] Please try again! <<<\n";
                    cout<<"                                1] RETRY\n";
                    cout<<"                                2] BACK TO LOG-IN PAGE\n";
                    cout<<"                                3] CLOSE APPLICATION\n";
                    cout<<"_____________________________________________________________________________________";
                    cin>>f;
                    if(f==1)
                    {
                        st_input();
                    }
                    else if(f==2)
                    {
                        s_input();
                    }
                    else if(f==3)
                    {
                        _Exit(f);
                    }
                    else
                    {

                    }
                }
            }

    public:
            string l_input()
            {
                cout<<"ENTER YOUR ID NUMBER : ";
                cin>>l_id;
                cout<<"ENTER YOUR PASSWORD  : ";
                cin>>l_pass;
                if((l_id=="LIB101"&&l_pass=="LIB101")||(l_id=="LIB102"&&l_pass=="LIB102")||(l_id=="LIB103"&&l_pass=="LIB103")||(l_id=="LIB104"&&l_pass=="LIB104")||(l_id=="LIB105"&&l_pass=="LIB105"))
                {
                    p=l_id;
                    verify();
                }
                else
                {
                    cout<<"\t           >>> INVALID USERNAME / ID -- [x] Please try again! <<<\n";
                    cout<<"                                1] RETRY\n";
                    cout<<"                                2] BACK TO LOG-IN PAGE\n";
                    cout<<"                                3] CLOSE APPLICATION\n";
                    cout<<"_____________________________________________________________________________________";
                    cin>>f;
                    if(f==1)
                    {
                        l_input();
                    }
                    else if(f==2)
                    {
                        s_input();
                    }
                    else if(f==3)
                    {
                        _Exit(f);
                    }
                    else
                    {

                    }
                }
            }
    public:
            string a_input()
            {
                cout<<"||||||||||->->->->->->->->->-> WELCOME ADMINISTRATOR <-<-<-<-<-<-<-<-<-<-||||||||||\n\n";
                cout<<"             ENTER PASSWORD    :   ";
                cin>>a_pass;
                if(a_pass=="ADMINPASS")
                {
                    p=a_pass;
                    verify();
                }
                else
                {
                     cout<<"\t           >>> INVALID PASSWORD -- [x] Please try again! <<<\n";
                    cout<<"                                1] RETRY\n";
                    cout<<"                                2] BACK TO LOG-IN PAGE\n";
                    cout<<"                                3] CLOSE APPLICATION\n";
                    cout<<"_____________________________________________________________________________________\n\n";
                    cin>>f;
                    if(f==1)
                    {
                        a_input();
                    }
                    else if(f==2)
                    {
                        s_input();
                    }
                    else if(f==3)
                    {
                        _Exit(f);
                    }
                    else
                    {

                    }
                }
            }


    //*****************************************************************************************************************

    public:
            int o_1,o_2,o_3,n;

                                              // STUDENT 1 - PRANESH //
    public:
            void stu_1d()
            {
                n=1;
                cout<<"      <<<--------------------------->>>  WELCOME PRANESH  <<<--------------------------->>>\n\n\n";
                cout<<"                            :::::::::: SELECT TO VIEW DETAILS  ::::::::::           \n\n";
                cout<<"                                  1]   DUE DETAILS\n\n";
                cout<<"                                  2]   BOOK RECORDS\n\n";
                cout<<"                                  3]   FINE DETAILS\n\n";
                cout<<"                                  4]   BOOKS STOCK DETAILS\n\n";
                cout<<"                                  5]   LOG OUT\n\n";
                cout<<"                                  6]   CLOSE APPLICATION\n\n";
                cout<<"      _____________________________________________________________________________________\n\n";
                cin >> o_1;
                switch (o_1)
                {
                    case 1:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n\n\n\n";
                        cout<<"                    1]  LAST DATE OF YOUR DUE   :  -NA-\n\n\n";
                        cout<<"                    2]  NUMBER OF DELAYED DUES  :  -NA-\n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________\n\n";
                            stu_1d();
                            break;
                        }
                    }
                    case 2:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n\n\n\n";
                        cout<<"                    1]  NUMBER OF BOOKS ISSUED   :   5\n\n\n";
                        cout<<"                    2]  NUMBER OF BOOKS DROPPED  :   5\n\n\n";
                        cout<<"                    3]  LAST BOOK DROPPED        :   'THE QUANTUM MECHANICS'\n\n\n";
                        cout<<"                    4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n\n\n";
                        cout<<"               .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      ___________________________________________________________\n\n";
                            stu_1d();
                            break;
                        }
                    }
                    case 3:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n\n\n\n";
                        cout<<"                    1]  FINE AMOUNT TO BE PAID   :   -NA-\n\n\n";
                        cout<<"                    2]  NUMBER OF FINE DELAYS    :   -NA-\n\n\n\n";
                        cout<<"               #NOTE:\n\n";
                        cout<<"                     ||| IF YOU HAVE FINE AMOUNT TO BE PAID CONTACT THE LIBRARIAN |||\n\n\n";
                        cout<<"               .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      ____________________________________________________________\n\n";
                            stu_1d();
                            break;
                        }
                    }
                    case 4:
                    {
                        book_stock();
                        break;
                    }
                    case 5:
                    {
                        s_input();
                        break;
                    }
                    case 6:
                    {
                        _Exit(o_1);
                    }
                    case 8:
                    {
                        stu_1d();
                        break;
                    }
                    default:
                    {
                        cout<<"          [x]  INVALID OPTION !  ENTER A VALID OPTION\n\n";
                        stu_1d();
                        break;
                    }
                }
            }

        //*******************************************************************************************************************//
                                                // STUDENT 2 -KAVINITHAN //

     public:
            void stu_2d()
            {
                n=2;
                cout<<"      <<<--------------------------->>>  WELCOME KAVINITHAN  <<<--------------------------->>>\n\n\n";
                cout<<"                            :::::::::: SELECT TO VIEW DETAILS  ::::::::::           \n\n";
                cout<<"                                  1]   DUE DETAILS\n\n";
                cout<<"                                  2]   BOOK RECORDS\n\n";
                cout<<"                                  3]   FINE DETAILS\n\n";
                cout<<"                                  4]   BOOKS STOCK DETAILS\n\n";
                cout<<"                                  5]   LOG OUT\n\n";
                cout<<"                                  6]   CLOSE APPLICATION\n\n";
                cout<<"      _________________________________________________________________________________________\n\n";
                cin >> o_1;
                switch (o_1)
                {
                    case 1:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n\n\n\n";
                        cout<<"                    1]  LAST DATE OF YOUR DUE   :  21-05-2020\n\n\n";
                        cout<<"                    2]  NUMBER OF DELAYED DUES  :  -NA-\n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________\n\n";
                            stu_2d();
                            break;
                        }
                    }
                    case 2:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n\n\n\n";
                        cout<<"                    1]  NUMBER OF BOOKS ISSUED   :   4\n\n\n";
                        cout<<"                    2]  NUMBER OF BOOKS DROPPED  :   3\n\n\n";
                        cout<<"                    3]  LAST BOOK DROPPED        :   'AUTOMOTIVE ENGINES'\n\n\n";
                        cout<<"                    4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n\n\n";
                        cout<<"               .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      ___________________________________________________________\n\n";
                            stu_2d();
                            break;
                        }
                    }
                    case 3:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n\n\n\n";
                        cout<<"                    1]  FINE AMOUNT TO BE PAID   :   -NA-\n\n\n";
                        cout<<"                    2]  NUMBER OF FINE DELAYS    :   -NA-\n\n\n\n";
                        cout<<"               #NOTE:\n\n";
                        cout<<"                     ||| IF YOU HAVE FINE AMOUNT TO BE PAID CONTACT THE LIBRARIAN |||\n\n\n";
                        cout<<"               .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      ____________________________________________________________\n\n";
                            stu_2d();
                            break;
                        }
                    }
                    case 4:
                    {
                        book_stock();
                        break;
                    }
                    case 5:
                    {
                        s_input();
                        break;
                    }
                    case 6:
                    {
                        _Exit(o_1);
                    }
                    case 8:
                    {
                        stu_2d();
                        break;
                    }
                    default:
                    {
                        cout<<"          [x]  INVALID OPTION !  ENTER A VALID OPTION\n\n";
                        stu_2d();
                        break;
                    }
                }
            }

               //*******************************************************************************************************************//
                                                // STUDENT 3 - GOWRI SHANKAR //

     public:
            void stu_3d()
            {
                n=3;
                cout<<"      <<<--------------------------->>>  WELCOME GOWRISHANKAR  <<<--------------------------->>>\n\n\n";
                cout<<"                            :::::::::: SELECT TO VIEW DETAILS  ::::::::::           \n\n";
                cout<<"                                  1]   DUE DETAILS\n\n";
                cout<<"                                  2]   BOOK RECORDS\n\n";
                cout<<"                                  3]   FINE DETAILS\n\n";
                cout<<"                                  4]   BOOKS STOCK DETAILS\n\n";
                cout<<"                                  5]   LOG OUT\n\n";
                cout<<"                                  6]   CLOSE APPLICATION\n\n";
                cout<<"      _________________________________________________________________________________________\n\n";
                cin >> o_1;
                switch (o_1)
                {
                    case 1:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n\n\n\n";
                        cout<<"                    1]  LAST DATE OF YOUR DUE   :  15-05-2020\n\n\n";
                        cout<<"                    2]  NUMBER OF DELAYED DUES  :  2\n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________\n\n";
                            stu_3d();
                            break;
                        }
                    }
                    case 2:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n\n\n\n";
                        cout<<"                    1]  NUMBER OF BOOKS ISSUED   :   3\n\n\n";
                        cout<<"                    2]  NUMBER OF BOOKS DROPPED  :   1\n\n\n";
                        cout<<"                    3]  LAST BOOK DROPPED        :   'AERO MODELLING'\n\n\n";
                        cout<<"                    4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n\n\n";
                        cout<<"               .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      ___________________________________________________________\n\n";
                            stu_3d();
                            break;
                        }
                    }
                    case 3:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n\n\n\n";
                        cout<<"                    1]  FINE AMOUNT TO BE PAID   :   -NA-\n\n\n";
                        cout<<"                    2]  NUMBER OF FINE DELAYS    :    1\n\n\n\n";
                        cout<<"               #NOTE:\n\n";
                        cout<<"                     ||| IF YOU HAVE FINE AMOUNT TO BE PAID CONTACT THE LIBRARIAN |||\n\n\n";
                        cout<<"               .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      ____________________________________________________________\n\n";
                            stu_3d();
                            break;
                        }
                    }
                    case 4:
                    {
                        book_stock();
                        break;
                    }
                    case 5:
                    {
                        s_input();
                        break;
                    }
                    case 6:
                    {
                        _Exit(o_1);
                    }
                    case 8:
                    {
                        stu_3d();
                        break;
                    }
                    default:
                    {
                        cout<<"          [x]  INVALID OPTION !  ENTER A VALID OPTION\n\n";
                        stu_3d();
                        break;
                    }
                }
            }

               //*******************************************************************************************************************//
                                                // STUDENT 4 - VARUN //

     public:
            void stu_4d()
            {
                n=4;
                cout<<"      <<<--------------------------->>>  WELCOME VARUN  <<<--------------------------->>>\n\n\n";
                cout<<"                            :::::::::: SELECT TO VIEW DETAILS  ::::::::::           \n\n";
                cout<<"                                  1]   DUE DETAILS\n\n";
                cout<<"                                  2]   BOOK RECORDS\n\n";
                cout<<"                                  3]   FINE DETAILS\n\n";
                cout<<"                                  4]   BOOKS STOCK DETAILS\n\n";
                cout<<"                                  5]   LOG OUT\n\n";
                cout<<"                                  6]   CLOSE APPLICATION\n\n";
                cout<<"      _________________________________________________________________________________________\n\n";
                cin >> o_1;
                switch (o_1)
                {
                    case 1:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n\n\n";
                        cout<<"                    1]  LAST DATE OF YOUR DUE   :  7-05-2020\n\n\n";
                        cout<<"                    2]  NUMBER OF DELAYED DUES  :  2\n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________\n\n";
                            stu_4d();
                            break;
                        }
                    }
                    case 2:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n\n\n";
                        cout<<"                    1]  NUMBER OF BOOKS ISSUED   :   4\n\n\n";
                        cout<<"                    2]  NUMBER OF BOOKS DROPPED  :   1\n\n\n";
                        cout<<"                    3]  LAST BOOK DROPPED        :   'MANUFACTURING PROCESS'\n\n\n";
                        cout<<"                    4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n\n\n";
                        cout<<"               .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      ___________________________________________________________\n\n";
                            stu_4d();
                            break;
                        }
                    }
                    case 3:
                    {
                        cout<<"<<<MAIN MENU]\n\n";
                        cout<<"          <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n\n\n";
                        cout<<"                    1]  FINE AMOUNT TO BE PAID   :   ₹ 50/-\n\n\n";
                        cout<<"                    2]  NUMBER OF FINE DELAYS    :   1\n\n\n\n";
                        cout<<"               #NOTE:\n\n";
                        cout<<"                     ||| IF YOU HAVE FINE AMOUNT TO BE PAID CONTACT THE LIBRARIAN |||\n\n\n";
                        cout<<"               .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      ____________________________________________________________\n\n";
                            stu_4d();
                            break;
                        }
                    }
                    case 4:
                    {
                        book_stock();
                        break;
                    }
                    case 5:
                    {
                        s_input();
                        break;
                    }
                    case 6:
                    {
                        _Exit(o_1);
                    }
                    case 8:
                    {
                        stu_4d();
                        break;
                    }
                    default:
                    {
                        cout<<"                            [x]  INVALID OPTION !  ENTER A VALID OPTION\n\n";
                        stu_4d();
                        break;
                    }
                }
            }

            //*******************************************************************************************************************//
                                                      //   LIBRARIAN 1  //

    public:
            void lib_1d()
            {
                n=5;
                cout<<"      <<<--------------------------->>>  WELCOME LIBRARIAN 1  <<<--------------------------->>>\n\n\n";
                cout<<"                             :::::::::: SELECT TO VIEW DETAILS  ::::::::::           \n\n";
                cout<<"                                  1]   LIBRARIAN LOG\n\n";
                cout<<"                                  2]   STUDENT RECORDS\n\n";
                cout<<"                                  3]   FINE DETAILS\n\n";
                cout<<"                                  4]   BOOKS STOCK DETAILS\n\n";
                cout<<"                                  5]   LOG OUT\n\n";
                cout<<"                                  6]   CLOSE APPLICATION\n\n";
                cout<<"      _________________________________________________________________________________________\n\n";
                cin >>o_1;
                switch(o_1)
                {
                    case 1:
                    {
                        cout<<"         ----------------------------------------    LIBRARIAN LOG    ----------------------------------\n\n";
                        cout<<"                     TO CHECK ]>> STUDENT 2 - KAVINITHAN has a due that ends by 21-05-2020\n\n";
                        cout<<"                                   .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_3;
                        if(o_3==8)
                        {
                            lib_1d();
                            break;
                        }
                        else
                        {

                        }
                        break;
                    }
                    case 2:
                    {
                        cout<<"         ----------------------------------------    STUDENT RECORDS    -------------------------------------\n\n";
                        cout<<"                                             1]  STUDENT 1\n";
                        cout<<"                                             2]  STUDENT 2\n";
                        cout<<"                                             3]  BACK TO MAIN MENU\n";
                        cout<<"                                     ...   SELECT TO VIEW STUDENT RECORDS   ...\n\n";
                        cin>>o_2;
                        if(o_2==1)
                        {
                            cout<<"         ----------------------------------------  STUDENT 1 - PRANESH  -----------------------------------------\n\n";
                            cout<<"                                 <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  LAST DATE OF YOUR DUE    :  -NA-\n\n";
                            cout<<"                                         2]  NUMBER OF DELAYED DUES   :  -NA-\n\n";
                            cout<<"                                 <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  NUMBER OF BOOKS ISSUED   :   5\n\n";
                            cout<<"                                         2]  NUMBER OF BOOKS DROPPED  :   5\n\n";
                            cout<<"                                         3]  LAST BOOK DROPPED        :   'THE QUANTUM MECHANICS'\n\n";
                            cout<<"                                         4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n";
                            cout<<"                                 <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  FINE AMOUNT TO BE PAID   :   -NA-\n\n";
                            cout<<"                                         2]  NUMBER OF FINE DELAYS    :   -NA-\n\n";
                            cout<<"         -------------------------------------------------------------------------------------------------------\n\n";
                            cout<<"                                   .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                            cin>>o_3;
                            if(o_3==8)
                            {
                                lib_1d();
                                break;
                            }
                            else
                            {

                            }
                            break;
                        }
                        else if(o_2==2)
                        {
                            cout<<"         ----------------------------------------  STUDENT 2 - KAVINITHAN  -----------------------------------------\n\n";
                            cout<<"                                 <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  LAST DATE OF YOUR DUE    :  21-05-2020\n\n";
                            cout<<"                                         2]  NUMBER OF DELAYED DUES   :  -NA-\n\n";
                            cout<<"                                 <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  NUMBER OF BOOKS ISSUED   :   4\n\n";
                            cout<<"                                         2]  NUMBER OF BOOKS DROPPED  :   3\n\n";
                            cout<<"                                         3]  LAST BOOK DROPPED        :   'AUTOMOTIVE ENGINES'\n\n";
                            cout<<"                                         4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n";
                            cout<<"                                 <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  FINE AMOUNT TO BE PAID   :   -NA-\n\n";
                            cout<<"                                         2]  NUMBER OF FINE DELAYS    :   -NA-\n\n";
                            cout<<"         -------------------------------------------------------------------------------------------------------\n\n";
                            cout<<"                                   .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                            cin>>o_3;
                            if(o_3==8)
                            {
                                lib_1d();
                                break;
                            }
                            else
                            {

                            }
                            break;
                        }
                        else if(o_2==3)
                        {
                            lib_1d();
                            break;
                        }
                        else
                        {

                        }
                        break;
                    }
                    case 3:
                    {
                        cout<<"----------------------------------------- FINE DETAILS ---------------------------------------------------\n\n";
                        cout<<"                              ]>> FINE AMOUNT COLLECTED FROM STUDENT 1 : Rs 0/-\n\n";
                        cout<<"                              ]>> FINE AMOUNT COLLECTED FROM STUDENT 2 : Rs 0/-\n\n";
                        cout<<"                                   .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_3;
                        if(o_3==8)
                        {
                            lib_1d();
                            break;
                        }
                        else
                        {

                        }
                        break;
                    }
                    case 4:
                    {
                        book_stock();
                        break;
                    }
                    case 5:
                    {
                        s_input();
                        break;
                    }
                    case 6:
                    {
                        _Exit(o_2);
                    }
                }
            }

            //**********************************************************************************************************************//
                                                              //     LIBRARIAN 2    //

    public:
            void lib_2d()
            {
                n=6;
                cout<<"      <<<--------------------------->>>  WELCOME LIBRARIAN 2  <<<--------------------------->>>\n\n\n";
                cout<<"                             :::::::::: SELECT TO VIEW DETAILS  ::::::::::           \n\n";
                cout<<"                                  1]   LIBRARIAN LOG\n\n";
                cout<<"                                  2]   STUDENT RECORDS\n\n";
                cout<<"                                  3]   FINE DETAILS\n\n";
                cout<<"                                  4]   BOOKS STOCK DETAILS\n\n";
                cout<<"                                  5]   LOG OUT\n\n";
                cout<<"                                  6]   CLOSE APPLICATION\n\n";
                cout<<"      _________________________________________________________________________________________\n\n";
                cin >>o_1;
                switch(o_1)
                {
                    case 1:
                    {
                        cout<<"         ----------------------------------------    LIBRARIAN LOG    ----------------------------------\n\n";
                        cout<<"                     TO CHECK ]>> STUDENT 1 - GOWRISHANKAR has a due that ends by 15-05-2020\n\n";
                        cout<<"                     TO CHECK ]>> STUDENT 2 - VARUN has a due that ends by 7-05-2020\n\n";
                        cout<<"                     TO CHECK ]>> STUDENT 2 - VARUN has to pay Rs 50/- as a fine amount\n\n";
                        cout<<"                                   .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_3;
                        if(o_3==8)
                        {
                            lib_2d();
                            break;
                        }
                        else
                        {

                        }
                        break;
                    }
                    case 2:
                    {
                        cout<<"         ----------------------------------------    STUDENT RECORDS    -------------------------------------\n\n";
                        cout<<"                                             1]  STUDENT 1\n";
                        cout<<"                                             2]  STUDENT 2\n";
                        cout<<"                                             3]  BACK TO MAIN MENU\n";
                        cout<<"                                     ...   SELECT TO VIEW STUDENT RECORDS   ...\n\n";
                        cin>>o_2;
                        if(o_2==1)
                        {
                            cout<<"         ----------------------------------------  STUDENT 1 - GOWRISHANKAR  -----------------------------------------\n\n";
                            cout<<"                                 <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  LAST DATE OF YOUR DUE    :  15-05-2020\n\n";
                            cout<<"                                         2]  NUMBER OF DELAYED DUES   :  2\n\n";
                            cout<<"                                 <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  NUMBER OF BOOKS ISSUED   :   3\n\n";
                            cout<<"                                         2]  NUMBER OF BOOKS DROPPED  :   1\n\n";
                            cout<<"                                         3]  LAST BOOK DROPPED        :   'AERO MODELLING'\n\n";
                            cout<<"                                         4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n";
                            cout<<"                                 <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  FINE AMOUNT TO BE PAID   :   -NA-\n\n";
                            cout<<"                                         2]  NUMBER OF FINE DELAYS    :   1\n\n";
                            cout<<"         -------------------------------------------------------------------------------------------------------\n\n";
                            cout<<"                                   .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                            cin>>o_3;
                            if(o_3==8)
                            {
                                lib_2d();
                                break;
                            }
                            else
                            {

                            }
                            break;
                        }
                        else if(o_2==2)
                        {
                            cout<<"         ----------------------------------------  STUDENT 2 - VARUN  -----------------------------------------\n\n";
                            cout<<"                                 <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  LAST DATE OF YOUR DUE   :  7-05-2020\n\n";
                            cout<<"                                         2]  NUMBER OF DELAYED DUES  :  2\n\n";
                            cout<<"                                 <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  NUMBER OF BOOKS ISSUED   :   4\n\n";
                            cout<<"                                         2]  NUMBER OF BOOKS DROPPED  :   1\n\n";
                            cout<<"                                         3]  LAST BOOK DROPPED        :   'MANUFACTURING PROCESS'\n\n";
                            cout<<"                                         4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n";
                            cout<<"                                 <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n";
                            cout<<"                                         1]  FINE AMOUNT TO BE PAID   :   Rs 50/-\n\n";
                            cout<<"                                         2]  NUMBER OF FINE DELAYS    :   1\n\n";
                            cout<<"         -------------------------------------------------------------------------------------------------------\n\n";
                            cout<<"                                   .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                            cin>>o_3;
                            if(o_3==8)
                            {
                                lib_2d();
                                break;
                            }
                            else
                            {

                            }
                            break;
                        }
                        else if(o_2==3)
                        {
                            lib_2d();
                            break;
                        }
                        else
                        {

                        }
                        break;
                    }
                    case 3:
                    {
                        cout<<"----------------------------------------- FINE DETAILS ---------------------------------------------------\n\n";
                        cout<<"                              ]>> FINE AMOUNT COLLECTED FROM STUDENT 1 : Rs 0/-\n\n";
                        cout<<"                              ]>> FINE AMOUNT COLLECTED FROM STUDENT 2 : Rs 50/-\n\n";
                        cout<<"                                  .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                        cin>>o_3;
                        if(o_3==8)
                        {
                            lib_2d();
                            break;
                        }
                        else
                        {

                        }
                        break;
                    }
                    case 4:
                    {
                        book_stock();
                        break;
                    }
                    case 5:
                    {
                        s_input();
                        break;
                    }
                    case 6:
                    {
                        _Exit(o_2);
                    }
                }
            }

            //**********************************************************************************************************************************//
                                                            //   ADMINISTRATOR  //

    public:
            void a_1d()
            {
                n=7;
                cout<<"      <<<--------------------------->>>  WELCOME ADMINISTRATOR  <<<--------------------------->>>\n\n\n";
                cout<<"                                          1] STUDENT DETAILS\n\n";
                cout<<"                                          2] LIBRARIAN DETAILS\n\n";
                cout<<"                                          3] BOOKS STOCK DETAILS\n\n";
                cout<<"                                          4] LOG OUT\n\n";
                cout<<"                                          5] CLOSE APPLICATION\n\n";
                cout<<"                                         ..... SELECT TO VIEW .....\n";
                cin>>o_1;
                switch(o_1)
                {
                case 1:
                {
                    cout<<"     ---------------        ---------------   STUDENT DETAILS  ---------------         ---------------\n\n";
                    cout<<"                    STUDENT 1 : PRANESH\n";
                    cout<<"                                 <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  LAST DATE OF YOUR DUE    :  -NA-\n\n";
                    cout<<"                                         2]  NUMBER OF DELAYED DUES   :  -NA-\n\n";
                    cout<<"                                 <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  NUMBER OF BOOKS ISSUED   :   5\n\n";
                    cout<<"                                         2]  NUMBER OF BOOKS DROPPED  :   5\n\n";
                    cout<<"                                         3]  LAST BOOK DROPPED        :   'THE QUANTUM MECHANICS'\n\n";
                    cout<<"                                         4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n";
                    cout<<"                                 <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  FINE AMOUNT TO BE PAID   :   -NA-\n\n";
                    cout<<"                                         2]  NUMBER OF FINE DELAYS    :   -NA-\n\n";
                    cout<<"                    STUDENT 2 : KAVINITHAN\n";
                    cout<<"                                 <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  LAST DATE OF YOUR DUE    :  21-05-2020\n\n";
                    cout<<"                                         2]  NUMBER OF DELAYED DUES   :  -NA-\n\n";
                    cout<<"                                 <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  NUMBER OF BOOKS ISSUED   :   4\n\n";
                    cout<<"                                         2]  NUMBER OF BOOKS DROPPED  :   3\n\n";
                    cout<<"                                         3]  LAST BOOK DROPPED        :   'AUTOMOTIVE ENGINES'\n\n";
                    cout<<"                                         4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n";
                    cout<<"                                 <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  FINE AMOUNT TO BE PAID   :   -NA-\n\n";
                    cout<<"                                         2]  NUMBER OF FINE DELAYS    :   -NA-\n\n";
                    cout<<"                    STUDENT 3 : GOWRISHANKAR\n";
                    cout<<"                                 <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  LAST DATE OF YOUR DUE    :  15-05-2020\n\n";
                    cout<<"                                         2]  NUMBER OF DELAYED DUES   :  2\n\n";
                    cout<<"                                 <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  NUMBER OF BOOKS ISSUED   :   3\n\n";
                    cout<<"                                         2]  NUMBER OF BOOKS DROPPED  :   1\n\n";
                    cout<<"                                         3]  LAST BOOK DROPPED        :   'AERO MODELLING'\n\n";
                    cout<<"                                         4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n";
                    cout<<"                                 <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  FINE AMOUNT TO BE PAID   :   -NA-\n\n";
                    cout<<"                                         2]  NUMBER OF FINE DELAYS    :   1\n\n";
                    cout<<"                    STUDENT 4 : VARUN\n";
                    cout<<"                                 <<<--------------->>>  DUE DETAILS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  LAST DATE OF YOUR DUE   :  7-05-2020\n\n";
                    cout<<"                                         2]  NUMBER OF DELAYED DUES  :  2\n\n";
                    cout<<"                                 <<<--------------->>>  BOOK RECORDS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  NUMBER OF BOOKS ISSUED   :   4\n\n";
                    cout<<"                                         2]  NUMBER OF BOOKS DROPPED  :   1\n\n";
                    cout<<"                                         3]  LAST BOOK DROPPED        :   'MANUFACTURING PROCESS'\n\n";
                    cout<<"                                         4]  NUMBER OF TEARED BOOKS   :   -NA-\n\n";
                    cout<<"                                 <<<--------------->>>  FINE DETAILS  <<<--------------->>>\n\n";
                    cout<<"                                         1]  FINE AMOUNT TO BE PAID   :   Rs 50/-\n\n";
                    cout<<"                                         2]  NUMBER OF FINE DELAYS    :   1\n\n";
                    cout<<"         -------------------------------------------------------------------------------------------------------\n\n";
                    cout<<"                                   .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                    cin>>o_3;
                    if(o_3==8)
                    {
                        a_1d();
                        break;
                    }
                    else
                    {

                    }
                    break;
                }
                case 2:
                {
                    cout<<"     ---------------        ---------------   LIBRARIAN DETAILS  ---------------         ---------------\n\n";
                    cout<<"                    [>> LIBRARIAN 1 :\n";
                    cout<<"                                      NUMBER OF STUDENTS              : 2\n";
                    cout<<"                                      ATTENDENCE PERCENTAGE           : 98%\n";
                    cout<<"                                      NUMBER OF FINE AMOUNT COLLECTED : Rs 0/-\n";
                    cout<<"                    [>> LIBRARIAN 2 :\n";
                    cout<<"                                      NUMBER OF STUDENTS              : 2\n";
                    cout<<"                                      ATTENDENCE PERCENTAGE           : 83%\n";
                    cout<<"                                      NUMBER OF FINE AMOUNT COLLECTED : Rs 50/-\n";
                    cout<<"         -------------------------------------------------------------------------------------------------------\n\n";
                    cout<<"                                   .....CLICK [8] TO GO BACK TO MAIN MENU.....\n\n";
                    cin>>o_3;
                    if(o_3==8)
                    {
                        a_1d();
                        break;
                    }
                    else
                    {

                    }
                    break;
                }
                case 3:
                {
                    book_stock();
                    break;
                }
                case 4:
                {
                    s_input();
                    break;
                }
                case 5:
                {
                    _Exit(o_3);
                }
                }
            }

            //**************************************************************************************************//
                                                 //BOOKS STOCK DETAILS//
    public:
            void book_stock()
            {
                cout<<"<<<MAIN MENU]\n\n";
                cout<<"          <<<--------------->>>  BOOKS STOCK DETAILS  <<<--------------->>>\n\n\n\n";
                cout<<"                          1]  B.E.AERONAUTICAL ENGINEERING\n\n\n";
                cout<<"                          2]  B.E.AUTOMOBILE ENGINEERING\n\n\n";
                cout<<"                          3]  B.E.CIVIL ENGINEERING\n\n\n";
                cout<<"                          4]  B.E.COMPUTER SCIENCE ENGINEERING\n\n\n";
                cout<<"                          5]  B.E.MECHANICAL ENGINEERING\n\n\n";
                cout<<"                          6]  B.Tech.INFORMATION TECHNOLOGY\n\n\n";
                cout<<"                          7]  B.Tech.BIO TECHNOLOGY\n\n\n";
                cout<<"                          8]  BACK TO MAIN MENU\n\n\n";
                cout<<"          ====================== SELECT TO VIEW BOOKS =====================\n\n";
                cin>>o_3;
                switch(o_3)
                {
                    case 1:
                    {
                        cout<<"<<<BOOK STOCK DETAILS]\n\n";
                        cout<<"          ---------------   B.E.AERONAUTICAL ENGINEERING   ---------------\n\n\n\n";
                        cout<<"              1]  BASICS OF AERONAUTICAL ENGINEERING  :  32\n\n\n";
                        cout<<"              2]  AERONAUTICAL CHASSISS               :  41\n\n\n";
                        cout<<"              3]  AEROPLANE MANAGEMENT                :  15\n\n\n";
                        cout<<"              4]  AEROPLANE MANUFACTURING             :  -OUT OF STOCK-\n\n\n";
                        cout<<"              5]  AERONAUTICAL THERMODYNAMICS         :  3\n\n\n";
                        cout<<"              6]  AERO MODELLING                      :  53 \n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO BOOKS STOCK DETAILS.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________________\n\n";
                            book_stock();
                            break;;
                        }
                    }
                    case 2:
                    {
                        cout<<"<<<BOOK STOCK DETAILS]\n\n";
                        cout<<"          ---------------   B.E.AUTOMOBILE ENGINEERING   ---------------\n\n\n\n";
                        cout<<"              1]  BASICS OF AUTOMOBILE ENGINEERING  :  12\n\n\n";
                        cout<<"              2]  AUTOMOTIVE CHASSISS               :  31\n\n\n";
                        cout<<"              3]  AUTOMOTIVE MANAGEMENT             :  35\n\n\n";
                        cout<<"              4]  MANUFACTURING PROCESS             :  24\n\n\n";
                        cout<<"              5]  BASICS OF THERMODYNAMICS          :  37\n\n\n";
                        cout<<"              6]  CAD MODELLING                     :  3 \n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO BOOKS STOCK DETAILS.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________________\n\n";
                            book_stock();
                            break;;
                        }
                    }
                    case 3:
                    {
                        cout<<"<<<BOOK STOCK DETAILS]\n\n";
                        cout<<"          ---------------   B.E.CIVIL ENGINEERING   ---------------\n\n\n\n";
                        cout<<"              1]  BASICS OF CIVIL ENGINEERING       :  34\n\n\n";
                        cout<<"              2]  MATRIX FOR CIVIL ENGINEERING      :  18\n\n\n";
                        cout<<"              3]  AUTO CAD                          :  29\n\n\n";
                        cout<<"              4]  MANUFACTURING PROCESS             :  8\n\n\n";
                        cout<<"              5]  METALLURGY                        :  43\n\n\n";
                        cout<<"              6]  BUILDING ANALYSIS                 :  52 \n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO BOOKS STOCK DETAILS.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________________\n\n";
                            book_stock();
                            break;;
                        }
                    }
                    case 4:
                    {
                        cout<<"<<<BOOK STOCK DETAILS]\n\n";
                        cout<<"          ---------------   B.E.COMPUTER SCIENCE ENGINEERING   ---------------\n\n\n\n";
                        cout<<"              1]  BASICS OF COMPUTER SCIENCE        :  23\n\n\n";
                        cout<<"              2]  OPERATING SYSTEMS                 :  10\n\n\n";
                        cout<<"              3]  NETWORKING                        :  39\n\n\n";
                        cout<<"              4]  INTERNET                          :  48\n\n\n";
                        cout<<"              5]  PROGRAMMING LANGUAGES             :  53\n\n\n";
                        cout<<"              6]  COMPUTER ANALYSIS                 :  12 \n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO BOOKS STOCK DETAILS.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________________\n\n";
                            book_stock();
                            break;;
                        }
                    }
                    case 5:
                    {
                        cout<<"<<<BOOK STOCK DETAILS]\n\n";
                        cout<<"          ---------------   B.E.MECHANICAL ENGINEERING   ---------------\n\n\n\n";
                        cout<<"              1]  BASICS OF MECHANICAL ENGINEERING  :  64\n\n\n";
                        cout<<"              2]  MANUFACTURING PROCESS I           :  82\n\n\n";
                        cout<<"              3]  MANUFACTURING PROCESS I           :  27\n\n\n";
                        cout<<"              4]  MACHINES AND ITS FUNCTIONS        :  80\n\n\n";
                        cout<<"              5]  THE QUANTUM MECHANICS             :  37\n\n\n";
                        cout<<"              6]  CAD / CAM                         :  55 \n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO BOOKS STOCK DETAILS.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________________\n\n";
                            book_stock();
                            break;;
                        }
                    }
                    case 6:
                    {
                        cout<<"<<<BOOK STOCK DETAILS]\n\n";
                        cout<<"          ---------------   B.Tech.INFORMATION TECHNOLOGY   ---------------\n\n\n\n";
                        cout<<"              1]  BASICS OF INFORMATION TECHNOLOGY  :  34\n\n\n";
                        cout<<"              2]  INTERNET AND PROTOCOLS            :  18\n\n\n";
                        cout<<"              3]  CLOUD COMPUTING                   :  29\n\n\n";
                        cout<<"              4]  NETWORK DESIGNING                 :  8\n\n\n";
                        cout<<"              5]  SOFTWARE                          :  43\n\n\n";
                        cout<<"              6]  PROGRAMMING BASICS                :  52 \n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO BOOKS STOCK DETAILS.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________________\n\n";
                            book_stock();
                            break;;
                        }
                    }
                    case 7:
                    {
                        cout<<"<<<BOOK STOCK DETAILS]\n\n";
                        cout<<"          ---------------   B.Tech.BIO TECHNOLOGY   ---------------\n\n\n\n";
                        cout<<"              1]  BASICS OF BIO TECHNOLOGY          :  20\n\n\n";
                        cout<<"              2]  GENETIC ENGINEERING               :  16\n\n\n";
                        cout<<"              3]  BIO INFORMATICS                   :  27\n\n\n";
                        cout<<"              4]  MICROBIOLOGY                      :  18\n\n\n";
                        cout<<"              5]  BACTERIA SYNTHESIS                :  3\n\n\n";
                        cout<<"              6]  PLANT PROPAGATION                 :  24 \n\n\n\n";
                        cout<<"              .....CLICK [8] TO GO BACK TO BOOKS STOCK DETAILS.....\n\n";
                        cin>>o_2;
                        if(o_2==8)
                        {
                            cout<<"      __________________________________________________________________\n\n";
                            book_stock();
                            break;;
                        }
                    }
                    case 8:
                    {
                        switch(n)
                        {
                            case 1:
                            {
                                stu_1d();
                                break;
                            }
                            case 2:
                            {
                                stu_2d();
                                break;
                            }
                            case 3:
                            {
                                stu_3d();
                                break;
                            }
                            case 4:
                            {
                                stu_4d();
                                break;
                            }
                            case 5:
                            {
                                lib_1d();
                                break;
                            }
                            case 6:
                            {
                                lib_2d();
                                break;
                            }
                            case 7:
                            {
                                a_1d();
                                break;
                            }
                        }

                    }
                }

            }

            //**************************************************************************************************************//
                                             // VERIFYING//
    public:

            void verify()
            {
                if(p=="191AU125")
                {
                    stu_1d();
                }
                else if(p=="191AU118")
                {
                    stu_2d();
                }
                else if(p=="191AU111")
                {
                    stu_3d();
                }
                else if(p=="191AU139")
                {
                    stu_4d();
                }
                else if(p=="LIB101")
                {
                    lib_1d();
                }
                else if(p=="LIB102")
                {
                    lib_2d();
                }
                else if(p=="ADMINPASS")
                {
                    a_1d();
                }
                else
                {
                    cout<<"    [x]  INVALID\n";
                }
            }

};

//     ************************************************************************************************************************//
//                                                    MAIN FUNCTION

int main()
{

    database s;
    s.s_input();
    return 0;

}


//****************************************************   END   ***********************************************************//




