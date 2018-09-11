using System;


namespace PropertyAndIndicators
{
    class CarInfo
    {
        private string name;
        //todo: Check value
        private decimal price ;

        public string Name  
        {
            get { return name; }
            set { name = value; }
        }

        public decimal Price 
        {
            get { return price; }
            set { price = value; }
        }

        
    }
}
