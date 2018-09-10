using System;
using static System.String;

namespace exseption
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                Server server = new Server("Main Server", 100);
            }
            catch (ArgumentNullException ex)
            {

                Console.WriteLine("No correrct ServerName");
            }

            catch (ArgumentException ex)
            {
                Console.WriteLine("No correrct Server Speed(speed<0)");
            }

            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            
            

            Console.Read();
        }
    }
}
