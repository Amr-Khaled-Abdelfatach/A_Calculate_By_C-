#include <iostream>
using namespace std;
int main()
{
    double Num1, Num2 ;
    char Operation;

    cout <<"Enter Your Operation: \n(+ , - , * , / , < , > ) = "<<endl; //للطلب من المستخدم ادخال زمز العملية الحسابية
      cin >>Operation;
    cout << "Enter The Numbers. \n"<<endl;
    cout << " The First Number is: \n";
       cin >> Num1;
     cout << " The Second Number is: \n";
       cin >> Num2;

     //لتنفيذ العمليات الحسابية
     switch(Operation){
     case '+':
        cout <<"The Result is: "<<Num1 + Num2<<endl;
        break;

     case '-':
        cout <<"The Result is: "<<Num1 - Num2<<endl;
        break;

     case '*':
        cout <<"The Result is: "<<Num1 * Num2<<endl;
        break;

    case '/':
        if (Num2 !=0)
        cout <<"The Result is: "<<Num1 / Num2<<endl;
      else
        cout <<"Eror: Division by Zero ";
        break;

    case '>': //.لمعرفة اذا كان الرقم الاول اكبر من الثاني ام لا
        if (Num1 > Num2)
         cout <<"The Result is: yes";
        else
         cout <<"The Result is: No";
        break;

    case '<': //.لمعرفة اذا كان الرقم الاول اصغر من الرقم الثاني ام لا
        if (Num1 < Num2)
         cout <<"The Result is: yes";
        else
         cout <<"The Result is: No";
        break;

   default:
   cout <<"Error: Invalid Operation. \n";  //.عند ادخال عملية حسابية اخري

     }
    return 0;
}
