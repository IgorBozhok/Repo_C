using System;


namespace PropertyAndIndicators
{
    class Program
    {
        static void Main(string[] args)
        {
            CarShop shop = new CarShop();
            for (int i = 0; i < shop.CountCars; i++)
            {
                Console.WriteLine("{0} - {1}", shop[i].Name, shop[i].Price);
            } 

            Console.ReadKey();
        }
    }
}
