using System;


namespace PropertyAndIndicators
{
    internal class CarShop
    {
        private const int COUNT_CARS = 5;
        private CarInfo[] _cars;

        public CarShop()
        {
            _cars = new CarInfo[COUNT_CARS];
            Initialize();
        }

        private void Initialize()
        {
            _cars[0] = new CarInfo() { Name = "BMW", Price = 50000 };
            _cars[1] = new CarInfo() { Name = "Ford", Price = 40000 };
            _cars[2] = new CarInfo() { Name = "Audi", Price = 60000 };
            _cars[3] = new CarInfo() { Name = "Mers", Price = 70000 };
            _cars[4] = new CarInfo() { Name = "Fir", Price = 150000 };
        }

        public CarInfo this[int index]
        {
            get { return _cars[index]; }
            set { _cars[index] = value; }
        }

        public int CountCars
        {
            get { return _cars.Length; }
        }


    }
}
