#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
    void simplify(int x, int y)
{
    int g = __gcd(x, y);
        x = x/g;
        y = y/g;
    cout <<"Answer is: " <<x <<"/" <<y;
}
    void simplifyReciprocal(int x, int y)
{
    int g = __gcd(x, y);
        x = x/g;
        y = y/g;
    cout <<"Answer is: " <<y <<"/" <<x;
}

    int main()
{
    double a, b, c, d;
    double p = 3.142857142857143;
    int x, y, z;
    string op, again, choice, shape, formula;
do {
    cout<<"                             ████████╗██╗  ██╗███████╗"<<endl;
    cout<<"                             ╚══██╔══╝██║  ██║██╔════╝" <<endl;
    cout<<"                                ██║   ███████║█████╗"<<endl;
    cout<<"                                ██║   ██╔══██║██╔══╝"<<endl;
    cout<<"                                ██║   ██║  ██║███████╗"<<endl;
    cout<<"                                ╚═╝   ╚═╝  ╚═╝╚══════╝"<<endl <<endl;
    cout<<" ██████╗ █████╗ ██╗      ██████╗██╗   ██╗██╗      █████╗ ████████╗ ██████╗ ██████╗"<<endl;
    cout<<"██╔════╝██╔══██╗██║     ██╔════╝██║   ██║██║     ██╔══██╗╚══██╔══╝██╔═══██╗██╔══██╗"<<endl;
    cout<<"██║     ███████║██║     ██║     ██║   ██║██║     ███████║   ██║   ██║   ██║██████╔╝"<<endl;
    cout<<"██║     ██╔══██║██║     ██║     ██║   ██║██║     ██╔══██║   ██║   ██║   ██║██╔══██╗"<<endl;
    cout<<"╚██████╗██║  ██║███████╗╚██████╗╚██████╔╝███████╗██║  ██║   ██║   ╚██████╔╝██║  ██║"<<endl;
    cout<<" ╚═════╝╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═════╝ ╚══════╝╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚═╝  ╚═╝"<<endl <<endl;
    cout<<"                                   ██████╗ ███████╗"<<endl;
    cout<<"                                  ██╔═══██╗██╔════╝"<<endl;
    cout<<"                                  ██║   ██║█████╗"<<endl;
    cout<<"                                  ██║   ██║██╔══╝"<<endl;
    cout<<"                                  ╚██████╔╝██║"<<endl;
    cout<<"                                   ╚═════╝ ╚═╝"<<endl <<endl;
    cout<<"      ███████╗██╗  ██╗██╗███████╗████████╗███████╗███╗   ██╗ ██████╗███████╗"<<endl;
    cout<<"      ██╔════╝╚██╗██╔╝██║██╔════╝╚══██╔══╝██╔════╝████╗  ██║██╔════╝██╔════╝"<<endl;
    cout<<"      █████╗   ╚███╔╝ ██║███████╗   ██║   █████╗  ██╔██╗ ██║██║     █████╗"<<endl;
    cout<<"      ██╔══╝   ██╔██╗ ██║╚════██║   ██║   ██╔══╝  ██║╚██╗██║██║     ██╔══╝"<<endl;
    cout<<"      ███████╗██╔╝ ██╗██║███████║   ██║   ███████╗██║ ╚████║╚██████╗███████╗"<<endl;
    cout<<"      ╚══════╝╚═╝  ╚═╝╚═╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═══╝ ╚═════╝╚══════╝"<<endl <<endl;
        cout <<"Choose an operation"<<endl<<"||  Shape (S)  ||  Calculations (C)  ||"<<endl;
        cin >> choice;

            if (choice == "C" || choice == "c")
        {
        cout <<"enter your operation (+, -, *, /, %of, SI): ";
        cin >> op;
                if (op == "+" || op == "-" || op == "*" || op == "%of" || op == "/")
            {
    cout <<"enter your first number: ";
    cin >> a;
    double c = a/100;
    cout <<"enter your second number: ";
    cin >> b; 
        if (op == "+")
    {
        cout <<"answer: " <<a+b <<'\n';
    
    }
        else if (op == "-")
    { 
        cout <<"answer: " <<a-b <<'\n';
    }
        else if (op == "*")
    { 
        cout <<"answer: " <<a*b <<'\n';
    }
        else if (op == "/")
    { 
        cout <<"answer: " <<a/b <<'\n';
    }
         else if (op == "%of")
    {
        cout <<"answer: " <<(a*100)/b <<"%" <<'\n';          //percentage = a*100
    }                                                        //            ------
            }                                                //               b
        else if (op == "SI" || op == "si")
    { 
            double p, r, t;
            cout <<"enter Principal: ";
            cin >>p;
            cout <<"enter the Rate: ";
            cin >>r;
            cout <<"enter Time Period: ";
            cin >>t;
            cout <<"The Interest is: "<<(p*r*t)/100 <<'\n';
    }
        else
    {
            cout <<"not a recognised operation" <<'\n';
    }
        }
            else if (choice == "S" || choice == "s")
    {
        cout <<"what do you want to calculate? (Area || Volume || Perimeter || Sine || Cose || Tangent || Cosec || Sec || Cotan): " <<"\n";
        cin >>op;
    if (op == "area")
{
    cout <<"what is your shape? (square, rectangle, triangle, trapezium, parallelogram, circle): ";
        cin >>shape;
     
    if (shape == "square")                     //square area
{
    cout <<"\n" <<"enter length of side: ";
        cin >>a;
    cout <<"\n" <<"Area is: " <<a*a <<" sq.unit" <<"\n";
}

    else if (shape == "rectangle")          //rectangle area
{
    cout <<"\n" << "Enter length: ";
        cin >>a;
    cout <<"Enter breadth: ";
        cin >>b;
    cout <<"\n" <<"Area is: " <<a*b <<" sq.unit" <<"\n";
}
    else if (shape == "triangle")          //triangle area
{
    cout <<"choose an option --> (a) b/h (base and height) | (b) Heron's formula (sides)" <<"\n";
        cin >>formula;
    if (formula == "a" || formula == "b/h "|| formula == "base and height")
    {
    cout <<"\n" << "Enter base: ";
        cin >>a;
    cout <<"Enter height: ";
        cin >>b;
    cout <<"\n" <<"Area is: " <<a/2*b <<" sq.unit" <<"\n";
    }
    else if (formula == "b" || formula == "heron's formula" || formula == "sides")
    {
        cout <<"\n" "Enter side 1: ";
            cin >>a;
        cout <<"\n" "Enter side 2: ";
            cin >>b;
        cout <<"\n" "Enter side 3: ";
            cin >>c;
                double s = (a+b+c)/2;
                double f = sqrt(s*(s-a)*(s-b)*(s-c));
        cout <<"\n" <<"Area is " <<f <<"sq.unit" <<"\n";
    }
}
    else if (shape == "trapezium")          //trapezium area
{
    cout <<"\n" << "Enter Height: ";
        cin >>a;
    cout <<"Enter 1st parallel line: ";
        cin >>b;
    cout <<"Enter second parallel line: ";
        cin >>c;
    cout <<"\n" <<"Area is: " <<(b+c)*1/2*a <<" sq.unit" <<"\n";
}
    else if (shape == "parallelogram")          //parallelogram area
{
    cout <<"\n" << "Enter base: ";
        cin >>a;
    cout <<"Enter height: ";
        cin >>b;
    cout <<"\n" <<"Area is: " <<a/2*b <<" sq.unit" <<"\n";
}
    else if (shape == "circle")                 //circle area
{
    cout <<"\n" <<"Enter radius: ";
        cin >>a;
    cout <<"\n" <<"area is: " <<p*a*a <<" sq.unit" <<"\n";
}
    else
{
    cout <<"\n" <<"Not a recognized Shape!" <<"\n";
}

}
    else if (op == "perimeter")
{
    cout <<"Enter your shape (square, rectangle, triangle, trapezium, parallelogram, circle): ";
        cin >>shape;
    
    if (shape == "square")                     //square perimeter
{
    cout <<"\n" <<"enter length of side: ";
        cin >>a;
    cout <<"\n" <<"perimeter is : " <<4*a <<" unit" <<"\n";
}
    else if (shape == "rectangle")                     //rectangle perimeter
{
    cout <<"\n" <<"enter length: ";
        cin >>a;
    cout <<"enter breadth: ";
        cin >>b;
    cout <<"\n" <<"perimeter is: " <<(a+b)*2 <<" unit" <<"\n";
}
    else if (shape == "triangle")                     //triangle perimeter
{
    cout <<"\n" <<"enter length of side 1: ";
        cin >>a;
    cout <<"enter length of side 2: ";
        cin >>b;
    cout <<"enter length of side 3: ";
        cin >>c;
    cout <<"\n" <<"perimeter is : " <<a+b+c <<" unit" <<"\n";
}
    else if (shape == "trapezium")                    //trapezium perimeter
{
    cout <<"\n" <<"enter length of side 1: ";
        cin >>a;
    cout <<"enter length of side 2: ";
        cin >>b;
    cout <<"enter length of side 3: ";
        cin >>c;
    cout <<"enter length of side 4: ";
        cin >>d;
    cout <<"\n" <<"perimeter is : " <<a+b+c+d <<" unit" <<"\n";
}
    else if (shape == "parallelogram")              //parallelogram perimeter
{
    cout <<"\n" <<"enter length: ";
        cin >>a;
    cout <<"enter breadth: ";
        cin >>b;
    cout <<"\n" <<"perimeter is: " <<(a+b)*2 <<" unit" <<"\n";
}
    else if (shape == "circle")                     //circle perimeter
{
    cout <<"\n" <<"Enter radius: ";
        cin >>a;
    cout <<"\n" <<"Circumference is: " <<p*a*2 <<" unit" <<"\n";
}
    else
{
    cout <<"\n" <<"Not a recognized Shape!" <<"\n";
}
}
    else if (op == "volume")
{
    cout <<"enter your shape (cube, cuboid, cylender, cone, sphere, hemisphere): ";
        cin >>shape;
    if (shape == "cube")
{
    cout <<"\n" <<"Enter the side: ";
        cin >>a;
    cout <<"\n" <<"Volume is: " <<a*a <<" unit cube" <<"\n";
}
    else if (shape == "cuboid")
{
    cout <<"\n" <<"Enter Length: ";
        cin >>a;
    cout <<"Enter Breadth: ";
        cin >>b;
    cout <<"Enter Height: ";
        cin >>c;
    cout <<"\n" <<"The Volume is: " <<a*b*c <<" unit cube" <<"\n";
}
    else if (shape == "cylender")
{
    cout <<"\n" <<"Enter Radius: ";
        cin >>a;
    cout <<"Enter Height: ";
        cin >>b;
    cout <<"\n" <<"Volume is: " <<p*a*a*b <<" unit cube" <<"\n";
}
    else if (shape == "cone")
{
    cout <<"\n" <<"Enter your radius: ";
        cin >>a;
    cout <<"Enter your height: ";
        cin >>b;
    cout <<"\n" <<"Volume is: " <<p*a*a*b/3 <<" unit cube" <<"\n";
}
    else if (shape == "sphere")
{
    cout <<"\n" <<"Enter Radius: ";
        cin >>a;
    cout <<"\n" <<"Volume is: " <<p*a*a*a*4/3 <<" unit cube" <<"\n";
}
    else if (shape == "hemisphere")
{
    cout <<"\n" <<"Enter Radius: ";
        cin >>a;
    cout <<"\n" <<"Volume is: " <<2*p*a*a*a/3 <<" unit cube" <<"\n";
}
    else
{
    cout <<"\n" <<"Not a recognized Shape!" <<"\n";
}

}
    else if (op == "sin" || op == "Sin" ||op == "sine" || op == "Sine")
{
    cout <<"Enter the opposite side of the angle: ";
        cin >>x;
    cout <<"Enter the Hypotenuse: ";
        cin >>y;
            simplify(x, y);
}
    else if (op == "cose" || op == "cos" || op == "Cose" || op == "Cos")
{
    cout <<"Enter adjacent side to the angle (not hypotenuse): ";
        cin >>x;
    cout <<"Enter the Hypotenuse: ";
        cin >>y;
            simplify(x, y);
}
    else if (op == "Tan" || op == "tan" || op == "Tangent" || op == "tangent")
{
    cout <<"Enter opposide side to the angle: ";
        cin >>x;
    cout <<"Enter adjacent side to the angel (not hypotenuse): ";
        cin >>y;
            simplify(x, y);
}
    else if (op == "cosec"|| op == "Cosec")
{
        cout <<"Enter the opposite side of the angle: ";
            cin >>x;
        cout <<"Enter the Hypotenuse: ";
            cin >>y;
                simplifyReciprocal(x, y);
}
    else if (op == "sec" || op == "Sec")
{
        cout <<"Enter adjacent side to the angle (not hypotenuse): ";
            cin >>x;
        cout <<"Enter the Hypotenuse: ";
            cin >>y;
                simplifyReciprocal(x, y);
}
    else if (op == "cotan" || op == "Cotan" || op == "coangent" || op == "Cotangent" || op == "cot" || op == "Cot")
{
        cout <<"Enter opposide side to the angle: ";
            cin >>x;
        cout <<"Enter adjacent side to the angel (not hypotenuse): ";
            cin >>y;
                simplifyReciprocal(x, y);
}
    else
{
    cout <<"\n" <<"not a recognized Operation!" <<"\n";
}
    }
        //Repeat Prompt
     cout <<'\n' <<"To repeat, press (y | Y)\nTo exit, press ( x | X ): "; 
     cin  >> again;
} while (again == "y" || again == "Y");
    //repeat command
    return 0;

}




