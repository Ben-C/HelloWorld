using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//This is a namespace
namespace HelloWorld
{
    //This is a class, think of classes as a book.
    class Program
    {
        //This is a method, a method is a collection of code with a unique name. Think of methods as a chapter in a book. () means do it now ("Hello World") 
        //means do it now with this argument "Hello World".
        static void Main(string[] args)
        {
            //console = class[read book] . WriteLine = Method [read book chapter] () = Do it now "Hello World" = do it with this argument.
            int x = 7;
            int y = x + 3;
            string f = "Hello World";
            Console.WriteLine(f);
            Console.ReadLine();
            Console.WriteLine(y);
            Console.ReadLine();
        }
        //end of method
    }
    //end of class
}
//end of namespace