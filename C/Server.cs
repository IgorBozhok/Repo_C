using System;


namespace DemoClasses
{
    internal class Server
    {
        public static string providerName;

        private const int DEFAULT_COUNT_PROCESS = 5;
        private string type; // field(поля)
        private int countProcess; // field(поля)

        public Server():this(String.Empty , DEFAULT_COUNT_PROCESS)
        {

        }

        public Server(string type, int countProcess)
        {
            this.type = type;
            this.countProcess = countProcess;
        }

        public Server(string type):this(type, DEFAULT_COUNT_PROCESS)
        {

        }
       
        static Server()
        {
            providerName = "BELTELECOM";
        }

        public static void SetProvider(string providerName)
        {
            providerName = "By Fly";
        }

        public void ShowInfo()
        {

            Console.WriteLine(type);
            Console.WriteLine(countProcess);
        }

        public void SetProvider()
        {
            providerName = "By Fly";
        }
    }

}
