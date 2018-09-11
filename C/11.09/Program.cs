using System;


namespace CW1
{
    class Program
    {
        static void Main(string[] args)
        {
            SmartArray arr = new SmartArray(4,-2);
            arr[-1] = 10;
            Console.WriteLine("{0}", arr[-1] );
            Console.ReadKey();
        }

        
    }
}
