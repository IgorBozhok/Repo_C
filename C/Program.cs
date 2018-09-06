using System;

namespace DemoClasses
{
    class Program
    {
        static void Main(string[] args)
        {
            Server.providerName = "BELTELECOM";

            Server server = new Server();
            Server server2 = new Server();

            server.SetProvider();

            Console.Read();
        }
    }
}
