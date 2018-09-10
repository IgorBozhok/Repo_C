using System;
using exseption.ServerException;

namespace exseption
{
    internal class Server
    {
        private string _serverName;
        public Server(string serverName , int speed)
        {
            if(speed < 0)
            {   
                throw new ServerException("No correct ",new ArgumentException("speed < 0"));
            }
            if (String.IsNullOrWhiteSpace(serverName))
            {
                throw new ServerException("speed < 0", new ArgumentNullException("serverName is null or empty"));
            }
            _serverName = serverName;
        }
    }
}
