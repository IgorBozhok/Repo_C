using System;


namespace CW1
{
    class Program
    {
        static void Main(string[] args)
        {
            SmartArray arr = new SmartArray(10, -10);

            arr[-9] = 10;
            for (int i = arr.FerstIndex; i < arr.LastIndex; i++)
            {
                Console.Write("{0}" + " ", arr[i]);
            }
           
            Console.ReadKey();
        }


    }
}