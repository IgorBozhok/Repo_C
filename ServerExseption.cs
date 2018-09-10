using System;


namespace exseption.ServerException
{
    internal class ServerExseption : Exception
    {
        public ServerExseption()
        { }
        public ServerExseption(string message) :base(message)
        {

        }
        public ServerExseption(string message, Exception innerException):base(message, innerException)
        {

        }
    }
}
